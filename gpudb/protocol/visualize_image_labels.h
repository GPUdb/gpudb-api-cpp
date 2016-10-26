/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __VISUALIZE_IMAGE_LABELS_H__
#define __VISUALIZE_IMAGE_LABELS_H__

    /**
     * @private
     */

namespace gpudb
{

    /**
     * @private
     * A set of input parameters for {@link
     * #visualizeImageLabels(const VisualizeImageLabelsRequest&) const}.
     * <p>
     */
    struct VisualizeImageLabelsRequest
    {

        /**
         * @private
         * Constructs a VisualizeImageLabelsRequest object with default
         * parameter values.
         */
        VisualizeImageLabelsRequest() :
            tableName(std::string()),
            xColumnName(std::string()),
            yColumnName(std::string()),
            xOffset(std::string()),
            yOffset(std::string()),
            textString(std::string()),
            font(std::string()),
            textColor(std::string()),
            textAngle(std::string()),
            textScale(std::string()),
            drawBox(std::string()),
            drawLeader(std::string()),
            lineWidth(std::string()),
            lineColor(std::string()),
            fillColor(std::string()),
            leaderXColumnName(std::string()),
            leaderYColumnName(std::string()),
            minX(double()),
            maxX(double()),
            minY(double()),
            maxY(double()),
            width(int32_t()),
            height(int32_t()),
            projection(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * @private
         * Constructs a VisualizeImageLabelsRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName
         * @param[in] xColumnName
         * @param[in] yColumnName
         * @param[in] xOffset
         * @param[in] yOffset
         * @param[in] textString
         * @param[in] font
         * @param[in] textColor
         * @param[in] textAngle
         * @param[in] textScale
         * @param[in] drawBox
         * @param[in] drawLeader
         * @param[in] lineWidth
         * @param[in] lineColor
         * @param[in] fillColor
         * @param[in] leaderXColumnName
         * @param[in] leaderYColumnName
         * @param[in] minX
         * @param[in] maxX
         * @param[in] minY
         * @param[in] maxY
         * @param[in] width
         * @param[in] height
         * @param[in] projection  Values: 'EPSG:4326', 'PLATE_CARREE',
         *                        '900913', 'EPSG:900913', '102100',
         *                        'EPSG:102100', '3857', 'EPSG:3857',
         *                        'WEB_MERCATOR'.
         * @param[in] options
         * 
         */
        VisualizeImageLabelsRequest(const std::string& tableName, const std::string& xColumnName, const std::string& yColumnName, const std::string& xOffset, const std::string& yOffset, const std::string& textString, const std::string& font, const std::string& textColor, const std::string& textAngle, const std::string& textScale, const std::string& drawBox, const std::string& drawLeader, const std::string& lineWidth, const std::string& lineColor, const std::string& fillColor, const std::string& leaderXColumnName, const std::string& leaderYColumnName, const double minX, const double maxX, const double minY, const double maxY, const int32_t width, const int32_t height, const std::string& projection, const std::map<std::string, std::string>& options):
            tableName(tableName),
            xColumnName(xColumnName),
            yColumnName(yColumnName),
            xOffset(xOffset),
            yOffset(yOffset),
            textString(textString),
            font(font),
            textColor(textColor),
            textAngle(textAngle),
            textScale(textScale),
            drawBox(drawBox),
            drawLeader(drawLeader),
            lineWidth(lineWidth),
            lineColor(lineColor),
            fillColor(fillColor),
            leaderXColumnName(leaderXColumnName),
            leaderYColumnName(leaderYColumnName),
            minX(minX),
            maxX(maxX),
            minY(minY),
            maxY(maxY),
            width(width),
            height(height),
            projection(projection),
            options(options)
        {
        }

    /**
     * @private
     */

        std::string tableName;
        std::string xColumnName;
        std::string yColumnName;
        std::string xOffset;
        std::string yOffset;
        std::string textString;
        std::string font;
        std::string textColor;
        std::string textAngle;
        std::string textScale;
        std::string drawBox;
        std::string drawLeader;
        std::string lineWidth;
        std::string lineColor;
        std::string fillColor;
        std::string leaderXColumnName;
        std::string leaderYColumnName;
        double minX;
        double maxX;
        double minY;
        double maxY;
        int32_t width;
        int32_t height;
        std::string projection;
        std::map<std::string, std::string> options;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::VisualizeImageLabelsRequest>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageLabelsRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.xColumnName);
            ::avro::encode(e, v.yColumnName);
            ::avro::encode(e, v.xOffset);
            ::avro::encode(e, v.yOffset);
            ::avro::encode(e, v.textString);
            ::avro::encode(e, v.font);
            ::avro::encode(e, v.textColor);
            ::avro::encode(e, v.textAngle);
            ::avro::encode(e, v.textScale);
            ::avro::encode(e, v.drawBox);
            ::avro::encode(e, v.drawLeader);
            ::avro::encode(e, v.lineWidth);
            ::avro::encode(e, v.lineColor);
            ::avro::encode(e, v.fillColor);
            ::avro::encode(e, v.leaderXColumnName);
            ::avro::encode(e, v.leaderYColumnName);
            ::avro::encode(e, v.minX);
            ::avro::encode(e, v.maxX);
            ::avro::encode(e, v.minY);
            ::avro::encode(e, v.maxY);
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.projection);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageLabelsRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.xColumnName);
                            break;

                        case 2:
                            ::avro::decode(d, v.yColumnName);
                            break;

                        case 3:
                            ::avro::decode(d, v.xOffset);
                            break;

                        case 4:
                            ::avro::decode(d, v.yOffset);
                            break;

                        case 5:
                            ::avro::decode(d, v.textString);
                            break;

                        case 6:
                            ::avro::decode(d, v.font);
                            break;

                        case 7:
                            ::avro::decode(d, v.textColor);
                            break;

                        case 8:
                            ::avro::decode(d, v.textAngle);
                            break;

                        case 9:
                            ::avro::decode(d, v.textScale);
                            break;

                        case 10:
                            ::avro::decode(d, v.drawBox);
                            break;

                        case 11:
                            ::avro::decode(d, v.drawLeader);
                            break;

                        case 12:
                            ::avro::decode(d, v.lineWidth);
                            break;

                        case 13:
                            ::avro::decode(d, v.lineColor);
                            break;

                        case 14:
                            ::avro::decode(d, v.fillColor);
                            break;

                        case 15:
                            ::avro::decode(d, v.leaderXColumnName);
                            break;

                        case 16:
                            ::avro::decode(d, v.leaderYColumnName);
                            break;

                        case 17:
                            ::avro::decode(d, v.minX);
                            break;

                        case 18:
                            ::avro::decode(d, v.maxX);
                            break;

                        case 19:
                            ::avro::decode(d, v.minY);
                            break;

                        case 20:
                            ::avro::decode(d, v.maxY);
                            break;

                        case 21:
                            ::avro::decode(d, v.width);
                            break;

                        case 22:
                            ::avro::decode(d, v.height);
                            break;

                        case 23:
                            ::avro::decode(d, v.projection);
                            break;

                        case 24:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.xColumnName);
                ::avro::decode(d, v.yColumnName);
                ::avro::decode(d, v.xOffset);
                ::avro::decode(d, v.yOffset);
                ::avro::decode(d, v.textString);
                ::avro::decode(d, v.font);
                ::avro::decode(d, v.textColor);
                ::avro::decode(d, v.textAngle);
                ::avro::decode(d, v.textScale);
                ::avro::decode(d, v.drawBox);
                ::avro::decode(d, v.drawLeader);
                ::avro::decode(d, v.lineWidth);
                ::avro::decode(d, v.lineColor);
                ::avro::decode(d, v.fillColor);
                ::avro::decode(d, v.leaderXColumnName);
                ::avro::decode(d, v.leaderYColumnName);
                ::avro::decode(d, v.minX);
                ::avro::decode(d, v.maxX);
                ::avro::decode(d, v.minY);
                ::avro::decode(d, v.maxY);
                ::avro::decode(d, v.width);
                ::avro::decode(d, v.height);
                ::avro::decode(d, v.projection);
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
     * #visualizeImageLabels(const VisualizeImageLabelsRequest&) const}.
     * <p>
     */
    struct VisualizeImageLabelsResponse
    {

        /**
         * @private
         * Constructs a VisualizeImageLabelsResponse object with default
         * parameter values.
         */
        VisualizeImageLabelsResponse() :
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
    template<> struct codec_traits<gpudb::VisualizeImageLabelsResponse>
    {
        static void encode(Encoder& e, const gpudb::VisualizeImageLabelsResponse& v)
        {
            ::avro::encode(e, v.width);
            ::avro::encode(e, v.height);
            ::avro::encode(e, v.bgColor);
            ::avro::encode(e, v.imageData);
        }

        static void decode(Decoder& d, gpudb::VisualizeImageLabelsResponse& v)
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
