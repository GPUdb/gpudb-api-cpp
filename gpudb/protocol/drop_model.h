/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __DROP_MODEL_H__
#define __DROP_MODEL_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #dropModel(const DropModelRequest&) const}.
     * <p>
     * @private
     */
    struct DropModelRequest
    {

        /**
         * @private
         * Constructs a DropModelRequest object with default parameter values.
         */
        DropModelRequest() :
            modelName(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * @private
         * Constructs a DropModelRequest object with the specified parameters.
         * 
         * @param[in] modelName_
         * @param[in] options_
         * 
         */
        DropModelRequest(const std::string& modelName_, const std::map<std::string, std::string>& options_):
            modelName( modelName_ ),
            options( options_ )
        {
        }

        std::string modelName;
        std::map<std::string, std::string> options;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::DropModelRequest>
    {
        static void encode(Encoder& e, const gpudb::DropModelRequest& v)
        {
            ::avro::encode(e, v.modelName);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::DropModelRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.modelName);
                            break;

                        case 1:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.modelName);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #dropModel(const DropModelRequest&) const}.
     * <p>
     * @private
     */
    struct DropModelResponse
    {

        /**
         * @private
         * Constructs a DropModelResponse object with default parameter values.
         */
        DropModelResponse() :
            modelName(std::string()),
            info(std::map<std::string, std::string>())
        {
        }

        std::string modelName;
        std::map<std::string, std::string> info;
    };
}

    /**
     * @private
     */

namespace avro
{
    template<> struct codec_traits<gpudb::DropModelResponse>
    {
        static void encode(Encoder& e, const gpudb::DropModelResponse& v)
        {
            ::avro::encode(e, v.modelName);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::DropModelResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.modelName);
                            break;

                        case 1:
                            ::avro::decode(d, v.info);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.modelName);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
