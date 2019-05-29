/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __VISUALIZE_IMAGE_CLASSBREAK_H__
#define __VISUALIZE_IMAGE_CLASSBREAK_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #visualizeImageClassbreak(const VisualizeImageClassbreakRequest&) const}.
     * <p>
     * @private
     */
    struct VisualizeImageClassbreakRequest
    {

        /**
         * @private
         * Constructs a VisualizeImageClassbreakRequest object with default
         * parameter values.
         */
        VisualizeImageClassbreakRequest() :
            tableNames(std::vector<std::string>()),
            worldTableNames(std::vector<std::string>()),
            xColumnName(std::string()),
            yColumnName(std::string()),
            geometryColumnName(std::string()),
            trackIds(std::vector<std::vector<std::string> >()),
            cbAttr(std::string()),
            cbVals(std::vector<std::string>()),
            cbPointcolorAttr(std::string()),
            cbPointcolorVals(std::vector<std::string>()),
            cbPointsizeAttr(std::string()),
            cbPointsizeVals(std::vector<std::string>()),
            cbPointshapeAttr(std::string()),
            cbPointshapeVals(std::vector<std::string>()),
            minX(double()),
            maxX(double()),
            minY(double()),
            maxY(double()),
            width(int32_t()),
            height(int32_t()),
            projection(std::string()),
            bgColor(int64_t()),
            styleOptions(std::map<std::string, std::vector<std::string> >()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * @private
         * Constructs a VisualizeImageClassbreakRequest object with the
         * specified parameters.
         * 
         * @param[in] tableNames_
         * @param[in] worldTableNames_
         * @param[in] xColumnName_
         * @param[in] yColumnName_
         * @param[in] geometryColumnName_
         * @param[in] trackIds_
         * @param[in] cbAttr_
         * @param[in] cbVals_
         * @param[in] cbPointcolorAttr_
         * @param[in] cbPointcolorVals_
         * @param[in] cbPointsizeAttr_
         * @param[in] cbPointsizeVals_
         * @param[in] cbPointshapeAttr_
         * @param[in] cbPointshapeVals_
         * @param[in] minX_
         * @param[in] maxX_
         * @param[in] minY_
         * @param[in] maxY_
         * @param[in] width_
         * @param[in] height_
         * @param[in] projection_
         *                         <ul>
         *                                 <li>
         *                         gpudb::visualize_image_classbreak_EPSG_4326
         *                                 <li>
         *                         gpudb::visualize_image_classbreak_PLATE_CARREE
         *                                 <li>
         *                         gpudb::visualize_image_classbreak_900913
         *                                 <li>
         *                         gpudb::visualize_image_classbreak_EPSG_900913
         *                                 <li>
         *                         gpudb::visualize_image_classbreak_102100
         *                                 <li>
         *                         gpudb::visualize_image_classbreak_EPSG_102100
         *                                 <li>
         *                         gpudb::visualize_image_classbreak_3857
         *                                 <li>
         *                         gpudb::visualize_image_classbreak_EPSG_3857
         *                                 <li>
         *                         gpudb::visualize_image_classbreak_WEB_MERCATOR
         *                         </ul>
         *                         The default value is
         *                         gpudb::visualize_image_classbreak_PLATE_CARREE.
         * @param[in] bgColor_
         * @param[in] styleOptions_
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_do_points:
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_true
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_false
         *                           </ul>
         *                           The default value is
         *                           gpudb::visualize_image_classbreak_true.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_do_shapes:
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_true
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_false
         *                           </ul>
         *                           The default value is
         *                           gpudb::visualize_image_classbreak_true.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_do_tracks:
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_true
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_false
         *                           </ul>
         *                           The default value is
         *                           gpudb::visualize_image_classbreak_true.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_do_symbology:
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_true
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_false
         *                           </ul>
         *                           The default value is
         *                           gpudb::visualize_image_classbreak_false.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_pointcolors:
         *                           The default value is 'FF0000'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_pointsizes:
         *                           The default value is '3'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_pointoffset_x:
         *                           The default value is '0'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_pointoffset_y:
         *                           The default value is '0'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_pointshapes:
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_none
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_circle
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_square
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_diamond
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hollowcircle
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hollowsquare
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hollowdiamond
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_SYMBOLCODE
         *                           </ul>
         *                           The default value is
         *                           gpudb::visualize_image_classbreak_none.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_shapelinewidths:
         *                           The default value is '3'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_shapelinecolors:
         *                           The default value is 'FFFF00 '.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_shapelinepatterns:
         *                           The default value is '0'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_shapelinepatternlen:
         *                           The default value is '32'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_shapefillcolors:
         *                           The default value is '-1'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hashlineintervals:
         *                           The default value is '20'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hashlinecolors:
         *                           The default value is 'The same as line
         *                           color.'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hashlineangles:
         *                           The default value is '0'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hashlinelens:
         *                           The default value is '0'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hashlinewidths:
         *                           The default value is '3'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_tracklinewidths:
         *                           The default value is '3'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_tracklinecolors:
         *                           The default value is '00FF00'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_trackmarkersizes:
         *                           The default value is '3'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_trackmarkercolors:
         *                           The default value is '0000FF'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_trackmarkershapes:
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_none
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_circle
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_square
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_diamond
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hollowcircle
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hollowsquare
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hollowdiamond
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_SYMBOLCODE
         *                           </ul>
         *                           The default value is
         *                           gpudb::visualize_image_classbreak_none.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_trackheadcolors:
         *                           The default value is 'FFFFFF'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_trackheadsizes:
         *                           The default value is '10'.
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_trackheadshapes:
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_none
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_circle
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_square
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_diamond
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hollowcircle
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hollowsquare
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_hollowdiamond
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_SYMBOLCODE
         *                           </ul>
         *                           The default value is
         *                           gpudb::visualize_image_classbreak_circle.
         *                           </ul>
         * @param[in] options_
         * 
         */
        VisualizeImageClassbreakRequest(const std::vector<std::string>& tableNames_, const std::vector<std::string>& worldTableNames_, const std::string& xColumnName_, const std::string& yColumnName_, const std::string& geometryColumnName_, const std::vector<std::vector<std::string> >& trackIds_, const std::string& cbAttr_, const std::vector<std::string>& cbVals_, const std::string& cbPointcolorAttr_, const std::vector<std::string>& cbPointcolorVals_, const std::string& cbPointsizeAttr_, const std::vector<std::string>& cbPointsizeVals_, const std::string& cbPointshapeAttr_, const std::vector<std::string>& cbPointshapeVals_, const double minX_, const double maxX_, const double minY_, const double maxY_, const int32_t width_, const int32_t height_, const std::string& projection_, const int64_t bgColor_, const std::map<std::string, std::vector<std::string> >& styleOptions_, const std::map<std::string, std::string>& options_):
            tableNames( tableNames_ ),
            worldTableNames( worldTableNames_ ),
            xColumnName( xColumnName_ ),
            yColumnName( yColumnName_ ),
            geometryColumnName( geometryColumnName_ ),
            trackIds( trackIds_ ),
            cbAttr( cbAttr_ ),
            cbVals( cbVals_ ),
            cbPointcolorAttr( cbPointcolorAttr_ ),
            cbPointcolorVals( cbPointcolorVals_ ),
            cbPointsizeAttr( cbPointsizeAttr_ ),
            cbPointsizeVals( cbPointsizeVals_ ),
            cbPointshapeAttr( cbPointshapeAttr_ ),
            cbPointshapeVals( cbPointshapeVals_ ),
            minX( minX_ ),
            maxX( maxX_ ),
            minY( minY_ ),
            maxY( maxY_ ),
            width( width_ ),
            height( height_ ),
            projection( projection_ ),
            bgColor( bgColor_ ),
            styleOptions( styleOptions_ ),
            options( options_ )
        {
        }

        std::vector<std::string> tableNames;
        std::vector<std::string> worldTableNames;
        std::string xColumnName;
        std::string yColumnName;
        std::string geometryColumnName;
        std::vector<std::vector<std::string> > trackIds;
        std::string cbAttr;
        std::vector<std::string> cbVals;
        std::string cbPointcolorAttr;
        std::vector<std::string> cbPointcolorVals;
        std::string cbPointsizeAttr;
        std::vector<std::string> cbPointsizeVals;
        std::string cbPointshapeAttr;
        std::vector<std::string> cbPointshapeVals;
        double minX;
        double maxX;
        double minY;
        double maxY;
        int32_t width;
        int32_t height;
        std::string projection;
        int64_t bgColor;
        std::map<std::string, std::vector<std::string> > styleOptions;
        std::map<std::string, std::string> options;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeImageClassbreakRequest>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageClassbreakRequest& v)
        {
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.worldTableNames);
            ::avro::encode(e, v.xColumnName);
            ::avro::encode(e, v.yColumnName);
            ::avro::encode(e, v.geometryColumnName);
            ::avro::encode(e, v.trackIds);
            ::avro::encode(e, v.cbAttr);
            ::avro::encode(e, v.cbVals);
            ::avro::encode(e, v.cbPointcolorAttr);
            ::avro::encode(e, v.cbPointcolorVals);
            ::avro::encode(e, v.cbPointsizeAttr);
            ::avro::encode(e, v.cbPointsizeVals);
            ::avro::encode(e, v.cbPointshapeAttr);
            ::avro::encode(e, v.cbPointshapeVals);
            ::avro::encode(e, v.minX);
            ::avro::encode(e, v.maxX);
            ::avro::encode(e, v.minY);
            ::avro::encode(e, v.maxY);
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.projection);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.styleOptions);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageClassbreakRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableNames);
                            break;

                        case 1:
                            ::avro::decode(d, v.worldTableNames);
                            break;

                        case 2:
                            ::avro::decode(d, v.xColumnName);
                            break;

                        case 3:
                            ::avro::decode(d, v.yColumnName);
                            break;

                        case 4:
                            ::avro::decode(d, v.geometryColumnName);
                            break;

                        case 5:
                            ::avro::decode(d, v.trackIds);
                            break;

                        case 6:
                            ::avro::decode(d, v.cbAttr);
                            break;

                        case 7:
                            ::avro::decode(d, v.cbVals);
                            break;

                        case 8:
                            ::avro::decode(d, v.cbPointcolorAttr);
                            break;

                        case 9:
                            ::avro::decode(d, v.cbPointcolorVals);
                            break;

                        case 10:
                            ::avro::decode(d, v.cbPointsizeAttr);
                            break;

                        case 11:
                            ::avro::decode(d, v.cbPointsizeVals);
                            break;

                        case 12:
                            ::avro::decode(d, v.cbPointshapeAttr);
                            break;

                        case 13:
                            ::avro::decode(d, v.cbPointshapeVals);
                            break;

                        case 14:
                            ::avro::decode(d, v.minX);
                            break;

                        case 15:
                            ::avro::decode(d, v.maxX);
                            break;

                        case 16:
                            ::avro::decode(d, v.minY);
                            break;

                        case 17:
                            ::avro::decode(d, v.maxY);
                            break;

                        case 18:
                            ::avro::decode(d, v.width);
                            break;

                        case 19:
                            ::avro::decode(d, v.height);
                            break;

                        case 20:
                            ::avro::decode(d, v.projection);
                            break;

                        case 21:
                            ::avro::decode(d, v.bgColor);
                            break;

                        case 22:
                            ::avro::decode(d, v.styleOptions);
                            break;

                        case 23:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableNames);
                ::avro::decode(d, v.worldTableNames);
                ::avro::decode(d, v.xColumnName);
                ::avro::decode(d, v.yColumnName);
                ::avro::decode(d, v.geometryColumnName);
                ::avro::decode(d, v.trackIds);
                ::avro::decode(d, v.cbAttr);
                ::avro::decode(d, v.cbVals);
                ::avro::decode(d, v.cbPointcolorAttr);
                ::avro::decode(d, v.cbPointcolorVals);
                ::avro::decode(d, v.cbPointsizeAttr);
                ::avro::decode(d, v.cbPointsizeVals);
                ::avro::decode(d, v.cbPointshapeAttr);
                ::avro::decode(d, v.cbPointshapeVals);
                ::avro::decode(d, v.minX);
                ::avro::decode(d, v.maxX);
                ::avro::decode(d, v.minY);
                ::avro::decode(d, v.maxY);
                ::avro::decode(d, v.width);
                ::avro::decode(d, v.height);
                ::avro::decode(d, v.projection);
                ::avro::decode(d, v.bgColor);
                ::avro::decode(d, v.styleOptions);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #visualizeImageClassbreak(const VisualizeImageClassbreakRequest&) const}.
     * <p>
     * @private
     */
    struct VisualizeImageClassbreakResponse
    {

        /**
         * @private
         * Constructs a VisualizeImageClassbreakResponse object with default
         * parameter values.
         */
        VisualizeImageClassbreakResponse() :
            width(double()),
            height(double()),
            bgColor(int64_t()),
            imageData(std::vector<uint8_t>())
        {
        }

        double width;
        double height;
        int64_t bgColor;
        std::vector<uint8_t> imageData;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeImageClassbreakResponse>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageClassbreakResponse& v)
        {
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.imageData);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageClassbreakResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.width);
                            break;

                        case 1:
                            ::avro::decode(d, v.height);
                            break;

                        case 2:
                            ::avro::decode(d, v.bgColor);
                            break;

                        case 3:
                            ::avro::decode(d, v.imageData);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.width);
                ::avro::decode(d, v.height);
                ::avro::decode(d, v.bgColor);
                ::avro::decode(d, v.imageData);
            }
        }
    };
}

#endif
