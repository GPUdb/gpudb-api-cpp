/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __SHOW_DATASOURCE_H__
#define __SHOW_DATASOURCE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #showDatasource(const ShowDatasourceRequest&) const}.
     * <p>
     * Shows information about a specified <a
     * href="../../../concepts/data_sources/" target="_top">data source</a> or
     * all data sources.
     */
    struct ShowDatasourceRequest
    {

        /**
         * Constructs a ShowDatasourceRequest object with default parameter
         * values.
         */
        ShowDatasourceRequest() :
            name(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a ShowDatasourceRequest object with the specified
         * parameters.
         * 
         * @param[in] name_  Name of the data source for which to retrieve
         *                   information. The name must refer to a currently
         *                   existing data source. If '*' is specified,
         *                   information about all data sources will be
         *                   returned.
         * @param[in] options_  Optional parameters.
         * 
         */
        ShowDatasourceRequest(const std::string& name_, const std::map<std::string, std::string>& options_):
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
    template<> struct codec_traits<gpudb::ShowDatasourceRequest>
    {
        static void encode(Encoder& e, const gpudb::ShowDatasourceRequest& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::ShowDatasourceRequest& v)
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
     * #showDatasource(const ShowDatasourceRequest&) const}.
     * <p>
     * Shows information about a specified <a
     * href="../../../concepts/data_sources/" target="_top">data source</a> or
     * all data sources.
     */
    struct ShowDatasourceResponse
    {

        /**
         * Constructs a ShowDatasourceResponse object with default parameter
         * values.
         */
        ShowDatasourceResponse() :
            datasourceNames(std::vector<std::string>()),
            storageProviderTypes(std::vector<std::string>()),
            additionalInfo(std::vector<std::map<std::string, std::string> >()),
            info(std::map<std::string, std::string>())
        {
        }

        std::vector<std::string> datasourceNames;
        std::vector<std::string> storageProviderTypes;
        std::vector<std::map<std::string, std::string> > additionalInfo;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ShowDatasourceResponse>
    {
        static void encode(Encoder& e, const gpudb::ShowDatasourceResponse& v)
        {
            ::avro::encode(e, v.datasourceNames);
            ::avro::encode(e, v.storageProviderTypes);
            ::avro::encode(e, v.additionalInfo);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::ShowDatasourceResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.datasourceNames);
                            break;

                        case 1:
                            ::avro::decode(d, v.storageProviderTypes);
                            break;

                        case 2:
                            ::avro::decode(d, v.additionalInfo);
                            break;

                        case 3:
                            ::avro::decode(d, v.info);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.datasourceNames);
                ::avro::decode(d, v.storageProviderTypes);
                ::avro::decode(d, v.additionalInfo);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
