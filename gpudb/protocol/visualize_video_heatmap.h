/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __VISUALIZE_VIDEO_HEATMAP_H__
#define __VISUALIZE_VIDEO_HEATMAP_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #visualizeVideoHeatmap(const VisualizeVideoHeatmapRequest&) const}.
     * <p>
     * @private
     */
    struct VisualizeVideoHeatmapRequest
    {

        /**
         * @private
         * Constructs a VisualizeVideoHeatmapRequest object with default
         * parameter values.
         */
        VisualizeVideoHeatmapRequest() :
            tableNames(std::vector<std::string>()),
            xColumnName(std::string()),
            yColumnName(std::string()),
            minX(double()),
            maxX(double()),
            minY(double()),
            maxY(double()),
            timeIntervals(std::vector<std::vector<double> >()),
            width(int32_t()),
            height(int32_t()),
            projection(std::string()),
            videoStyle(std::string()),
            sessionKey(std::string()),
            styleOptions(std::map<std::string, std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * @private
         * Constructs a VisualizeVideoHeatmapRequest object with the specified
         * parameters.
         * 
         * @param[in] tableNames_
         * @param[in] xColumnName_
         * @param[in] yColumnName_
         * @param[in] minX_
         * @param[in] maxX_
         * @param[in] minY_
         * @param[in] maxY_
         * @param[in] timeIntervals_
         * @param[in] width_
         * @param[in] height_
         * @param[in] projection_
         *                         <ul>
         *                                 <li>
         *                         gpudb::visualize_video_heatmap_EPSG_4326
         *                                 <li>
         *                         gpudb::visualize_video_heatmap_PLATE_CARREE
         *                                 <li>
         *                         gpudb::visualize_video_heatmap_900913
         *                                 <li>
         *                         gpudb::visualize_video_heatmap_EPSG_900913
         *                                 <li>
         *                         gpudb::visualize_video_heatmap_102100
         *                                 <li>
         *                         gpudb::visualize_video_heatmap_EPSG_102100
         *                                 <li>
         *                         gpudb::visualize_video_heatmap_3857
         *                                 <li>
         *                         gpudb::visualize_video_heatmap_EPSG_3857
         *                                 <li>
         *                         gpudb::visualize_video_heatmap_WEB_MERCATOR
         *                         </ul>
         *                         The default value is
         *                         gpudb::visualize_video_heatmap_PLATE_CARREE.
         * @param[in] videoStyle_
         * @param[in] sessionKey_
         * @param[in] styleOptions_
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_colormap:
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_jet
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_hot
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_hsv
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_gray
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_blues
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_greens
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_greys
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_oranges
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_purples
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_reds
         *                           </ul>
         *                           The default value is
         *                           gpudb::visualize_video_heatmap_reds.
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_blur_radius:
         *                           The default value is '5'.
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_bg_color:
         *                           The default value is 'FF000000'.
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_gradient_start_color:
         *                           The default value is 'FFFFFF'.
         *                                   <li>
         *                           gpudb::visualize_video_heatmap_gradient_end_color:
         *                           The default value is 'FF0000'.
         *                           </ul>
         * @param[in] options_
         * 
         */
        VisualizeVideoHeatmapRequest(const std::vector<std::string>& tableNames_, const std::string& xColumnName_, const std::string& yColumnName_, const double minX_, const double maxX_, const double minY_, const double maxY_, const std::vector<std::vector<double> >& timeIntervals_, const int32_t width_, const int32_t height_, const std::string& projection_, const std::string& videoStyle_, const std::string& sessionKey_, const std::map<std::string, std::string>& styleOptions_, const std::map<std::string, std::string>& options_):
            tableNames( tableNames_ ),
            xColumnName( xColumnName_ ),
            yColumnName( yColumnName_ ),
            minX( minX_ ),
            maxX( maxX_ ),
            minY( minY_ ),
            maxY( maxY_ ),
            timeIntervals( timeIntervals_ ),
            width( width_ ),
            height( height_ ),
            projection( projection_ ),
            videoStyle( videoStyle_ ),
            sessionKey( sessionKey_ ),
            styleOptions( styleOptions_ ),
            options( options_ )
        {
        }

        std::vector<std::string> tableNames;
        std::string xColumnName;
        std::string yColumnName;
        double minX;
        double maxX;
        double minY;
        double maxY;
        std::vector<std::vector<double> > timeIntervals;
        int32_t width;
        int32_t height;
        std::string projection;
        std::string videoStyle;
        std::string sessionKey;
        std::map<std::string, std::string> styleOptions;
        std::map<std::string, std::string> options;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeVideoHeatmapRequest>
    {
        static void encode(Encoder& e, const gpudb::VisualizeVideoHeatmapRequest& v)
        {
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.xColumnName);
            ::avro::encode(e, v.yColumnName);
            ::avro::encode(e, v.minX);
            ::avro::encode(e, v.maxX);
            ::avro::encode(e, v.minY);
            ::avro::encode(e, v.maxY);
            ::avro::encode(e, v.timeIntervals);
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.projection);
            ::avro::encode(e, v.videoStyle);
            ::avro::encode(e, v.sessionKey);
            ::avro::encode(e, v.styleOptions);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::VisualizeVideoHeatmapRequest& v)
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
                            ::avro::decode(d, v.xColumnName);
                            break;

                        case 2:
                            ::avro::decode(d, v.yColumnName);
                            break;

                        case 3:
                            ::avro::decode(d, v.minX);
                            break;

                        case 4:
                            ::avro::decode(d, v.maxX);
                            break;

                        case 5:
                            ::avro::decode(d, v.minY);
                            break;

                        case 6:
                            ::avro::decode(d, v.maxY);
                            break;

                        case 7:
                            ::avro::decode(d, v.timeIntervals);
                            break;

                        case 8:
                            ::avro::decode(d, v.width);
                            break;

                        case 9:
                            ::avro::decode(d, v.height);
                            break;

                        case 10:
                            ::avro::decode(d, v.projection);
                            break;

                        case 11:
                            ::avro::decode(d, v.videoStyle);
                            break;

                        case 12:
                            ::avro::decode(d, v.sessionKey);
                            break;

                        case 13:
                            ::avro::decode(d, v.styleOptions);
                            break;

                        case 14:
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
                ::avro::decode(d, v.xColumnName);
                ::avro::decode(d, v.yColumnName);
                ::avro::decode(d, v.minX);
                ::avro::decode(d, v.maxX);
                ::avro::decode(d, v.minY);
                ::avro::decode(d, v.maxY);
                ::avro::decode(d, v.timeIntervals);
                ::avro::decode(d, v.width);
                ::avro::decode(d, v.height);
                ::avro::decode(d, v.projection);
                ::avro::decode(d, v.videoStyle);
                ::avro::decode(d, v.sessionKey);
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
     * #visualizeVideoHeatmap(const VisualizeVideoHeatmapRequest&) const}.
     * <p>
     * @private
     */
    struct VisualizeVideoHeatmapResponse
    {

        /**
         * @private
         * Constructs a VisualizeVideoHeatmapResponse object with default
         * parameter values.
         */
        VisualizeVideoHeatmapResponse() :
            width(double()),
            height(double()),
            bgColor(int64_t()),
            numFrames(int32_t()),
            sessionKey(std::string()),
            data(std::vector<std::vector<uint8_t> >())
        {
        }

        double width;
        double height;
        int64_t bgColor;
        int32_t numFrames;
        std::string sessionKey;
        std::vector<std::vector<uint8_t> > data;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeVideoHeatmapResponse>
    {
        static void encode(Encoder& e, const gpudb::VisualizeVideoHeatmapResponse& v)
        {
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.numFrames);
            ::avro::encode(e, v.sessionKey);
            ::avro::encode(e, v.data);
        }

        static void decode(Decoder& d, gpudb::VisualizeVideoHeatmapResponse& v)
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
                            ::avro::decode(d, v.numFrames);
                            break;

                        case 4:
                            ::avro::decode(d, v.sessionKey);
                            break;

                        case 5:
                            ::avro::decode(d, v.data);
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
                ::avro::decode(d, v.numFrames);
                ::avro::decode(d, v.sessionKey);
                ::avro::decode(d, v.data);
            }
        }
    };
}

#endif
