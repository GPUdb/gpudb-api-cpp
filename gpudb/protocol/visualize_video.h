/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __VISUALIZE_VIDEO_H__
#define __VISUALIZE_VIDEO_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #visualizeVideo(const VisualizeVideoRequest&) const}.
     * <p>
     * Creates raster images of data in the given table based on provided input
     * parameters. Numerous parameters are required to call this function. Some
     * of the important parameters are the attributes of the generated images
     * (@a bgColor, @a width, @a height), the collection of GPUdb table names
     * on which this function is to be applied, for which shapes (point,
     * polygon, tracks) the images are to be created and a user specified
     * session key. This session key is later used to fetch the generated
     * images stored by GPUdb. The operation is synchronous meaning that GPUdb
     * will not return the request until the images for all the frames of the
     * video are fully available.
     * <p>
     * Once the request has been processed then the generated video frames are
     * available for download via WMS using STYLES=cached. In this request the
     * LAYERS parameter should be populated with the session key passed in @a
     * sessionKey of the visualize video request and the FRAME parameter
     * indicates which 0-based frame of the video should be returned. All other
     * WMS parameters are ignored for this mode.
     * <p>
     * For instance, if a 20 frame video with the session key 'MY-SESSION-KEY'
     * was generated, the first frame could be retrieved with the URL::
     * <p>
     * http://<gpudb-ip-address>:9191/wms?REQUEST=GetMap&STYLES=cached&LAYERS=MY-SESSION-KEY&FRAME=0
     * <p>
     * and the last frame could be retrieved with::
     * <p>
     * http://gpudb-ip-address:9191/wms?REQUEST=GetMap&STYLES=cached&LAYERS=MY-SESSION-KEY&FRAME=19
     * The response payload provides, among other things, the number of frames
     * which were created by GPUdb.
     */
    struct VisualizeVideoRequest
    {

        /**
         * Constructs a VisualizeVideoRequest object with default parameter
         * values.
         */
        VisualizeVideoRequest() :
            tableNames(std::vector<std::string>()),
            worldTableNames(std::vector<std::string>()),
            trackIds(std::vector<std::vector<std::string> >()),
            xColumnName(std::string()),
            yColumnName(std::string()),
            minX(double()),
            maxX(double()),
            minY(double()),
            maxY(double()),
            width(int32_t()),
            height(int32_t()),
            projection(std::string()),
            bgColor(int64_t()),
            timeIntervals(std::vector<std::vector<double> >()),
            videoStyle(std::string()),
            sessionKey(std::string()),
            styleOptions(std::map<std::string, std::vector<std::string> >()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a VisualizeVideoRequest object with the specified
         * parameters.
         * 
         * @param[in] tableNames  Names of the tables containing the data for
         *                        various layers of the resulting video.
         * @param[in] worldTableNames  Optional name of the tables containing
         *                             the data for the entire track when the
         *                             @a tableNames contains only part of the
         *                             track data, but the entire track has to
         *                             be rendered. The number of tables should
         *                             match the number of tables in the @a
         *                             tableNames
         * @param[in] trackIds  Tracks from the @a tableNames to be rendered.
         * @param[in] xColumnName  Name of the column containing the x
         *                         coordinates.
         * @param[in] yColumnName  Name of the column containing the y
         *                         coordinates.
         * @param[in] minX  Lower bound for the x values.
         * @param[in] maxX  Upper bound for the x values.
         * @param[in] minY  Lower bound for the y values.
         * @param[in] maxY  Upper bound for the y values.
         * @param[in] width  Width of the generated image.
         * @param[in] height  Height of the generated image.
         * @param[in] projection  Spatial Reference System (i.e. EPSG Code).
         *                        Values: 'EPSG:4326', 'PLATE_CARREE',
         *                        '900913', 'EPSG:900913', '102100',
         *                        'EPSG:102100', '3857', 'EPSG:3857',
         *                        'WEB_MERCATOR'.
         *                          Default value is 'PLATE_CARREE'.
         * @param[in] bgColor  Background color of the generated image.
         * @param[in] timeIntervals
         * @param[in] videoStyle
         * @param[in] sessionKey  User Provided session key that is later used
         *                        to retrieve the generated video from the WMS.
         * @param[in] styleOptions  Styling options for the image.
         *                          <ul>
         *                                  <li> do_points: Rasterize point
         *                          data toggle. Values: 'true', 'false'.
         *                                  <li> do_shapes: Rasterize shapes
         *                          toggle. Values: 'true', 'false'.
         *                                  <li> do_tracks: Rasterize tracks
         *                          toggle. Values: 'true', 'false'.
         *                                  <li> pointcolors: RGB color value
         *                          in hex for the points.
         *                                  <li> pointsizes: Size of points.
         *                                  <li> pointshapes: Shape of the
         *                          point. Values: 'none', 'circle', 'square',
         *                          'diamond', 'hollowcircle', 'hollowsquare',
         *                          'hollowdiamond', 'SYMBOLCODE'.
         *                                  <li> shapelinewidths: Width of the
         *                          lines.
         *                                  <li> shapelinecolors: RGB color
         *                          values in hex for the line.
         *                                  <li> shapefillcolors: RGB color
         *                          values in hex for the fill color of the
         *                          shapes. Use '-1' for no fill.
         *                                  <li> tracklinewidths: Width of the
         *                          track lines. '0' implies do not draw track
         *                          lines.
         *                                  <li> tracklinecolors: RGB color
         *                          values for the track lines.
         *                                  <li> trackmarkersizes: Size of the
         *                          track point markers.
         *                                  <li> trackmarkercolors: Color of
         *                          the track point markers.
         *                                  <li> trackmarkershapes: Shape of
         *                          track point markers. Values: 'none',
         *                          'circle', 'square', 'diamond',
         *                          'hollowcircle', 'hollowsquare',
         *                          'hollowdiamond', 'SYMBOLCODE'.
         *                                  <li> trackheadcolors: Color of
         *                          track head markers.
         *                                  <li> trackheadsizes: Size of track
         *                          head markers.
         *                                  <li> trackheadshapes: Shape of
         *                          track head markers. Values: 'none',
         *                          'circle', 'square', 'diamond',
         *                          'hollowcircle', 'hollowsquare',
         *                          'hollowdiamond', 'SYMBOLCODE'.
         *                          </ul>
         * @param[in] options  Optional parameters.  Default value is an empty
         *                     std::map.
         * 
         */
        VisualizeVideoRequest(const std::vector<std::string>& tableNames, const std::vector<std::string>& worldTableNames, const std::vector<std::vector<std::string> >& trackIds, const std::string& xColumnName, const std::string& yColumnName, const double minX, const double maxX, const double minY, const double maxY, const int32_t width, const int32_t height, const std::string& projection, const int64_t bgColor, const std::vector<std::vector<double> >& timeIntervals, const std::string& videoStyle, const std::string& sessionKey, const std::map<std::string, std::vector<std::string> >& styleOptions, const std::map<std::string, std::string>& options):
            tableNames(tableNames),
            worldTableNames(worldTableNames),
            trackIds(trackIds),
            xColumnName(xColumnName),
            yColumnName(yColumnName),
            minX(minX),
            maxX(maxX),
            minY(minY),
            maxY(maxY),
            width(width),
            height(height),
            projection(projection),
            bgColor(bgColor),
            timeIntervals(timeIntervals),
            videoStyle(videoStyle),
            sessionKey(sessionKey),
            styleOptions(styleOptions),
            options(options)
        {
        }

        std::vector<std::string> tableNames;
        std::vector<std::string> worldTableNames;
        std::vector<std::vector<std::string> > trackIds;
        std::string xColumnName;
        std::string yColumnName;
        double minX;
        double maxX;
        double minY;
        double maxY;
        int32_t width;
        int32_t height;
        std::string projection;
        int64_t bgColor;
        std::vector<std::vector<double> > timeIntervals;
        std::string videoStyle;
        std::string sessionKey;
        std::map<std::string, std::vector<std::string> > styleOptions;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeVideoRequest>
    {
        static void encode(Encoder& e, const gpudb::VisualizeVideoRequest& v)
        {
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.worldTableNames);
            ::avro::encode(e, v.trackIds);
            ::avro::encode(e, v.xColumnName);
            ::avro::encode(e, v.yColumnName);
            ::avro::encode(e, v.minX);
            ::avro::encode(e, v.maxX);
            ::avro::encode(e, v.minY);
            ::avro::encode(e, v.maxY);
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.projection);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.timeIntervals);
            ::avro::encode(e, v.videoStyle);
            ::avro::encode(e, v.sessionKey);
            ::avro::encode(e, v.styleOptions);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::VisualizeVideoRequest& v)
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
                            ::avro::decode(d, v.trackIds);
                            break;

                        case 3:
                            ::avro::decode(d, v.xColumnName);
                            break;

                        case 4:
                            ::avro::decode(d, v.yColumnName);
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
                            ::avro::decode(d, v.bgColor);
                            break;

                        case 13:
                            ::avro::decode(d, v.timeIntervals);
                            break;

                        case 14:
                            ::avro::decode(d, v.videoStyle);
                            break;

                        case 15:
                            ::avro::decode(d, v.sessionKey);
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
                ::avro::decode(d, v.trackIds);
                ::avro::decode(d, v.xColumnName);
                ::avro::decode(d, v.yColumnName);
                ::avro::decode(d, v.minX);
                ::avro::decode(d, v.maxX);
                ::avro::decode(d, v.minY);
                ::avro::decode(d, v.maxY);
                ::avro::decode(d, v.width);
                ::avro::decode(d, v.height);
                ::avro::decode(d, v.projection);
                ::avro::decode(d, v.bgColor);
                ::avro::decode(d, v.timeIntervals);
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
     * #visualizeVideo(const VisualizeVideoRequest&) const}.
     * <p>
     * Creates raster images of data in the given table based on provided input
     * parameters. Numerous parameters are required to call this function. Some
     * of the important parameters are the attributes of the generated images
     * (@a bgColor, @a width, @a height), the collection of GPUdb table names
     * on which this function is to be applied, for which shapes (point,
     * polygon, tracks) the images are to be created and a user specified
     * session key. This session key is later used to fetch the generated
     * images stored by GPUdb. The operation is synchronous meaning that GPUdb
     * will not return the request until the images for all the frames of the
     * video are fully available.
     * <p>
     * Once the request has been processed then the generated video frames are
     * available for download via WMS using STYLES=cached. In this request the
     * LAYERS parameter should be populated with the session key passed in @a
     * sessionKey of the visualize video request and the FRAME parameter
     * indicates which 0-based frame of the video should be returned. All other
     * WMS parameters are ignored for this mode.
     * <p>
     * For instance, if a 20 frame video with the session key 'MY-SESSION-KEY'
     * was generated, the first frame could be retrieved with the URL::
     * <p>
     * http://<gpudb-ip-address>:9191/wms?REQUEST=GetMap&STYLES=cached&LAYERS=MY-SESSION-KEY&FRAME=0
     * <p>
     * and the last frame could be retrieved with::
     * <p>
     * http://gpudb-ip-address:9191/wms?REQUEST=GetMap&STYLES=cached&LAYERS=MY-SESSION-KEY&FRAME=19
     * The response payload provides, among other things, the number of frames
     * which were created by GPUdb.
     */
    struct VisualizeVideoResponse
    {

        /**
         * Constructs a VisualizeVideoResponse object with default parameter
         * values.
         */
        VisualizeVideoResponse() :
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

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeVideoResponse>
    {
        static void encode(Encoder& e, const gpudb::VisualizeVideoResponse& v)
        {
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.numFrames);
            ::avro::encode(e, v.sessionKey);
            ::avro::encode(e, v.data);
        }

        static void decode(Decoder& d, gpudb::VisualizeVideoResponse& v)
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
