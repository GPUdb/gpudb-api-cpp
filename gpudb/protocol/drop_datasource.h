/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __DROP_DATASOURCE_H__
#define __DROP_DATASOURCE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #dropDatasource(const DropDatasourceRequest&) const}.
     * <p>
     * Drops an existing <a href="../../../concepts/data_sources/"
     * target="_top">data source</a>.  Any external
     * tables that depend on the data source must be dropped before it can be
     * dropped.
     */
    struct DropDatasourceRequest
    {

        /**
         * Constructs a DropDatasourceRequest object with default parameter
         * values.
         */
        DropDatasourceRequest() :
            name(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a DropDatasourceRequest object with the specified
         * parameters.
         * 
         * @param[in] name_  Name of the data source to be dropped. Must be an
         *                   existing data source.
         * @param[in] options_  Optional parameters.
         * 
         */
        DropDatasourceRequest(const std::string& name_, const std::map<std::string, std::string>& options_):
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
    template<> struct codec_traits<gpudb::DropDatasourceRequest>
    {
        static void encode(Encoder& e, const gpudb::DropDatasourceRequest& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::DropDatasourceRequest& v)
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
     * #dropDatasource(const DropDatasourceRequest&) const}.
     * <p>
     * Drops an existing <a href="../../../concepts/data_sources/"
     * target="_top">data source</a>.  Any external
     * tables that depend on the data source must be dropped before it can be
     * dropped.
     */
    struct DropDatasourceResponse
    {

        /**
         * Constructs a DropDatasourceResponse object with default parameter
         * values.
         */
        DropDatasourceResponse() :
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
    template<> struct codec_traits<gpudb::DropDatasourceResponse>
    {
        static void encode(Encoder& e, const gpudb::DropDatasourceResponse& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::DropDatasourceResponse& v)
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
