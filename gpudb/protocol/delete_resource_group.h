/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __DELETE_RESOURCE_GROUP_H__
#define __DELETE_RESOURCE_GROUP_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #deleteResourceGroup(const DeleteResourceGroupRequest&) const}.
     * <p>
     * Deletes a resource group.
     */
    struct DeleteResourceGroupRequest
    {

        /**
         * Constructs a DeleteResourceGroupRequest object with default
         * parameter values.
         */
        DeleteResourceGroupRequest() :
            name(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a DeleteResourceGroupRequest object with the specified
         * parameters.
         * 
         * @param[in] name_  Name of the resource group to be deleted.
         * @param[in] options_  Optional parameters.
         * 
         */
        DeleteResourceGroupRequest(const std::string& name_, const std::map<std::string, std::string>& options_):
            name( name_ ),
            options( options_ )
        {
        }

        std::string name;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::DeleteResourceGroupRequest>
    {
        static void encode(Encoder& e, const gpudb::DeleteResourceGroupRequest& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::DeleteResourceGroupRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.name);
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
                ::avro::decode(d, v.name);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #deleteResourceGroup(const DeleteResourceGroupRequest&) const}.
     * <p>
     * Deletes a resource group.
     */
    struct DeleteResourceGroupResponse
    {

        /**
         * Constructs a DeleteResourceGroupResponse object with default
         * parameter values.
         */
        DeleteResourceGroupResponse() :
            name(std::string()),
            info(std::map<std::string, std::string>())
        {
        }

        std::string name;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::DeleteResourceGroupResponse>
    {
        static void encode(Encoder& e, const gpudb::DeleteResourceGroupResponse& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::DeleteResourceGroupResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.name);
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
                ::avro::decode(d, v.name);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
