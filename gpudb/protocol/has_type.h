/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __HAS_TYPE_H__
#define __HAS_TYPE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #hasType(const HasTypeRequest&) const}.
     * <p>
     * Check the existence of a type in GPUdb.
     */
    struct HasTypeRequest
    {

        /**
         * Constructs a HasTypeRequest object with default parameter values.
         */
        HasTypeRequest() :
            typeId(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a HasTypeRequest object with the specified parameters.
         * 
         * @param[in] typeId  Id of the type returned by GPUdb in response to
         *                    /create/type request.
         * @param[in] options  Optional parameters.  Default value is an empty
         *                     std::map.
         * 
         */
        HasTypeRequest(const std::string& typeId, const std::map<std::string, std::string>& options):
            typeId(typeId),
            options(options)
        {
        }

        std::string typeId;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::HasTypeRequest>
    {
        static void encode(Encoder& e, const gpudb::HasTypeRequest& v)
        {
            ::avro::encode(e, v.typeId);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::HasTypeRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.typeId);
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
                ::avro::decode(d, v.typeId);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #hasType(const HasTypeRequest&) const}.
     * <p>
     * Check the existence of a type in GPUdb.
     */
    struct HasTypeResponse
    {

        /**
         * Constructs a HasTypeResponse object with default parameter values.
         */
        HasTypeResponse() :
            typeId(std::string()),
            typeExists(bool())
        {
        }

        std::string typeId;
        bool typeExists;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::HasTypeResponse>
    {
        static void encode(Encoder& e, const gpudb::HasTypeResponse& v)
        {
            ::avro::encode(e, v.typeId);
            ::avro::encode(e, v.typeExists);
        }

        static void decode(Decoder& d, gpudb::HasTypeResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.typeId);
                            break;

                        case 1:
                            ::avro::decode(d, v.typeExists);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.typeId);
                ::avro::decode(d, v.typeExists);
            }
        }
    };
}

#endif
