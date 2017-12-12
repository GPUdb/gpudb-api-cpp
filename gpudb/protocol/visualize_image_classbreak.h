/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __VISUALIZE_IMAGE_CLASSBREAK_H__
#define __VISUALIZE_IMAGE_CLASSBREAK_H__

    /**
     * @private
     */

namespace gpudb
{

    /**
     * @private
     * A set of input parameters for {@link
     * #visualizeImageClassbreak(const VisualizeImageClassbreakRequest&) const}.
     * <p>
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
            cbColumnName(std::string()),
            cbVals(std::vector<std::string>()),
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
         * @param[in] cbColumnName_
         * @param[in] cbVals_
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
         *                           gpudb::visualize_image_classbreak_pointcolors
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_pointsizes
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_pointoffset_x
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_pointoffset_y
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
         *                           gpudb::visualize_image_classbreak_shapelinewidths
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_shapelinecolors
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_shapelinepatterns
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_shapelinepatternlen
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_shapefillcolors
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_tracklinewidths
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_tracklinecolors
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_trackmarkersizes
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_trackmarkercolors
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
         *                           gpudb::visualize_image_classbreak_trackheadcolors
         *                                   <li>
         *                           gpudb::visualize_image_classbreak_trackheadsizes
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
        VisualizeImageClassbreakRequest(const std::vector<std::string>& tableNames_, const std::vector<std::string>& worldTableNames_, const std::string& xColumnName_, const std::string& yColumnName_, const std::string& geometryColumnName_, const std::vector<std::vector<std::string> >& trackIds_, const std::string& cbColumnName_, const std::vector<std::string>& cbVals_, const double minX_, const double maxX_, const double minY_, const double maxY_, const int32_t width_, const int32_t height_, const std::string& projection_, const int64_t bgColor_, const std::map<std::string, std::vector<std::string> >& styleOptions_, const std::map<std::string, std::string>& options_):
            tableNames( tableNames_ ),
            worldTableNames( worldTableNames_ ),
            xColumnName( xColumnName_ ),
            yColumnName( yColumnName_ ),
            geometryColumnName( geometryColumnName_ ),
            trackIds( trackIds_ ),
            cbColumnName( cbColumnName_ ),
            cbVals( cbVals_ ),
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

    /**
     * @private
     */

        std::vector<std::string> tableNames;
        std::vector<std::string> worldTableNames;
        std::string xColumnName;
        std::string yColumnName;
        std::string geometryColumnName;
        std::vector<std::vector<std::string> > trackIds;
        std::string cbColumnName;
        std::vector<std::string> cbVals;
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
            ::avro::encode(e, v.cbColumnName);
            ::avro::encode(e, v.cbVals);
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
                            ::avro::decode(d, v.cbColumnName);
                            break;

                        case 7:
                            ::avro::decode(d, v.cbVals);
                            break;

                        case 8:
                            ::avro::decode(d, v.minX);
                            break;

                        case 9:
                            ::avro::decode(d, v.maxX);
                            break;

                        case 10:
                            ::avro::decode(d, v.minY);
                            break;

                        case 11:
                            ::avro::decode(d, v.maxY);
                            break;

                        case 12:
                            ::avro::decode(d, v.width);
                            break;

                        case 13:
                            ::avro::decode(d, v.height);
                            break;

                        case 14:
                            ::avro::decode(d, v.projection);
                            break;

                        case 15:
                            ::avro::decode(d, v.bgColor);
                            break;

                        case 16:
                            ::avro::decode(d, v.styleOptions);
                            break;

                        case 17:
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
                ::avro::decode(d, v.cbColumnName);
                ::avro::decode(d, v.cbVals);
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

    /**
     * @private
     */

namespace gpudb
{

    /**
     * @private
     * A set of output parameters for {@link
     * #visualizeImageClassbreak(const VisualizeImageClassbreakRequest&) const}.
     * <p>
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

    /**
     * @private
     */

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
