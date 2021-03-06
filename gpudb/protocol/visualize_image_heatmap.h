/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __VISUALIZE_IMAGE_HEATMAP_H__
#define __VISUALIZE_IMAGE_HEATMAP_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #visualizeImageHeatmap(const VisualizeImageHeatmapRequest&) const}.
     * <p>
     * @private
     */
    struct VisualizeImageHeatmapRequest
    {

        /**
         * @private
         * Constructs a VisualizeImageHeatmapRequest object with default
         * parameter values.
         */
        VisualizeImageHeatmapRequest() :
            tableNames(std::vector<std::string>()),
            xColumnName(std::string()),
            yColumnName(std::string()),
            valueColumnName(std::string()),
            geometryColumnName(std::string()),
            minX(double()),
            maxX(double()),
            minY(double()),
            maxY(double()),
            width(int32_t()),
            height(int32_t()),
            projection(std::string()),
            styleOptions(std::map<std::string, std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * @private
         * Constructs a VisualizeImageHeatmapRequest object with the specified
         * parameters.
         * 
         * @param[in] tableNames_
         * @param[in] xColumnName_
         * @param[in] yColumnName_
         * @param[in] valueColumnName_
         * @param[in] geometryColumnName_
         * @param[in] minX_
         * @param[in] maxX_
         * @param[in] minY_
         * @param[in] maxY_
         * @param[in] width_
         * @param[in] height_
         * @param[in] projection_
         *                         <ul>
         *                                 <li>
         *                         gpudb::visualize_image_heatmap_EPSG_4326
         *                                 <li>
         *                         gpudb::visualize_image_heatmap_PLATE_CARREE
         *                                 <li>
         *                         gpudb::visualize_image_heatmap_900913
         *                                 <li>
         *                         gpudb::visualize_image_heatmap_EPSG_900913
         *                                 <li>
         *                         gpudb::visualize_image_heatmap_102100
         *                                 <li>
         *                         gpudb::visualize_image_heatmap_EPSG_102100
         *                                 <li>
         *                         gpudb::visualize_image_heatmap_3857
         *                                 <li>
         *                         gpudb::visualize_image_heatmap_EPSG_3857
         *                                 <li>
         *                         gpudb::visualize_image_heatmap_WEB_MERCATOR
         *                         </ul>
         *                         The default value is
         *                         gpudb::visualize_image_heatmap_PLATE_CARREE.
         * @param[in] styleOptions_
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_colormap:
         *                           <ul>
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_jet
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_accent
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_afmhot
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_autumn
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_binary
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_blues
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_bone
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_brbg
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_brg
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_bugn
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_bupu
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_bwr
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_cmrmap
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_cool
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_coolwarm
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_copper
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_cubehelix
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_dark2
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_flag
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gist_earth
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gist_gray
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gist_heat
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gist_ncar
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gist_rainbow
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gist_stern
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gist_yarg
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gnbu
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gnuplot2
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gnuplot
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gray
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_greens
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_greys
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_hot
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_hsv
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_inferno
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_magma
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_nipy_spectral
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_ocean
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_oranges
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_orrd
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_paired
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_pastel1
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_pastel2
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_pink
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_piyg
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_plasma
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_prgn
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_prism
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_pubu
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_pubugn
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_puor
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_purd
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_purples
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_rainbow
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_rdbu
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_rdgy
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_rdpu
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_rdylbu
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_rdylgn
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_reds
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_seismic
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_set1
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_set2
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_set3
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_spectral
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_spring
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_summer
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_terrain
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_viridis
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_winter
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_wistia
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_ylgn
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_ylgnbu
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_ylorbr
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_ylorrd
         *                           </ul>
         *                           The default value is
         *                           gpudb::visualize_image_heatmap_jet.
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_blur_radius:
         *                           The default value is '5'.
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_bg_color
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gradient_start_color:
         *                           The default value is 'FFFFFF'.
         *                                   <li>
         *                           gpudb::visualize_image_heatmap_gradient_end_color:
         *                           The default value is 'FF0000'.
         *                           </ul>
         * @param[in] options_
         * 
         */
        VisualizeImageHeatmapRequest(const std::vector<std::string>& tableNames_, const std::string& xColumnName_, const std::string& yColumnName_, const std::string& valueColumnName_, const std::string& geometryColumnName_, const double minX_, const double maxX_, const double minY_, const double maxY_, const int32_t width_, const int32_t height_, const std::string& projection_, const std::map<std::string, std::string>& styleOptions_, const std::map<std::string, std::string>& options_):
            tableNames( tableNames_ ),
            xColumnName( xColumnName_ ),
            yColumnName( yColumnName_ ),
            valueColumnName( valueColumnName_ ),
            geometryColumnName( geometryColumnName_ ),
            minX( minX_ ),
            maxX( maxX_ ),
            minY( minY_ ),
            maxY( maxY_ ),
            width( width_ ),
            height( height_ ),
            projection( projection_ ),
            styleOptions( styleOptions_ ),
            options( options_ )
        {
        }

        std::vector<std::string> tableNames;
        std::string xColumnName;
        std::string yColumnName;
        std::string valueColumnName;
        std::string geometryColumnName;
        double minX;
        double maxX;
        double minY;
        double maxY;
        int32_t width;
        int32_t height;
        std::string projection;
        std::map<std::string, std::string> styleOptions;
        std::map<std::string, std::string> options;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeImageHeatmapRequest>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageHeatmapRequest& v)
        {
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.xColumnName);
            ::avro::encode(e, v.yColumnName);
            ::avro::encode(e, v.valueColumnName);
            ::avro::encode(e, v.geometryColumnName);
            ::avro::encode(e, v.minX);
            ::avro::encode(e, v.maxX);
            ::avro::encode(e, v.minY);
            ::avro::encode(e, v.maxY);
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.projection);
            ::avro::encode(e, v.styleOptions);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageHeatmapRequest& v)
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
                            ::avro::decode(d, v.valueColumnName);
                            break;

                        case 4:
                            ::avro::decode(d, v.geometryColumnName);
                            break;

                        case 5:
                            ::avro::decode(d, v.minX);
                            break;

                        case 6:
                            ::avro::decode(d, v.maxX);
                            break;

                        case 7:
                            ::avro::decode(d, v.minY);
                            break;

                        case 8:
                            ::avro::decode(d, v.maxY);
                            break;

                        case 9:
                            ::avro::decode(d, v.width);
                            break;

                        case 10:
                            ::avro::decode(d, v.height);
                            break;

                        case 11:
                            ::avro::decode(d, v.projection);
                            break;

                        case 12:
                            ::avro::decode(d, v.styleOptions);
                            break;

                        case 13:
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
                ::avro::decode(d, v.valueColumnName);
                ::avro::decode(d, v.geometryColumnName);
                ::avro::decode(d, v.minX);
                ::avro::decode(d, v.maxX);
                ::avro::decode(d, v.minY);
                ::avro::decode(d, v.maxY);
                ::avro::decode(d, v.width);
                ::avro::decode(d, v.height);
                ::avro::decode(d, v.projection);
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
     * #visualizeImageHeatmap(const VisualizeImageHeatmapRequest&) const}.
     * <p>
     * @private
     */
    struct VisualizeImageHeatmapResponse
    {

        /**
         * @private
         * Constructs a VisualizeImageHeatmapResponse object with default
         * parameter values.
         */
        VisualizeImageHeatmapResponse() :
            width(int32_t()),
            height(int32_t()),
            bgColor(int64_t()),
            imageData(std::vector<uint8_t>()),
            info(std::map<std::string, std::string>())
        {
        }

        int32_t width;
        int32_t height;
        int64_t bgColor;
        std::vector<uint8_t> imageData;
        std::map<std::string, std::string> info;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeImageHeatmapResponse>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageHeatmapResponse& v)
        {
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.imageData);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageHeatmapResponse& v)
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

                        case 4:
                            ::avro::decode(d, v.info);
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
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
