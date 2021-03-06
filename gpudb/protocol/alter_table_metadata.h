/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __ALTER_TABLE_METADATA_H__
#define __ALTER_TABLE_METADATA_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #alterTableMetadata(const AlterTableMetadataRequest&) const}.
     * <p>
     * Updates (adds or changes) metadata for tables. The metadata key and
     * values must both be strings. This is an easy way to annotate whole
     * tables rather
     * than single records within tables.  Some examples of metadata are owner
     * of the
     * table, table creation timestamp etc.
     */
    struct AlterTableMetadataRequest
    {

        /**
         * Constructs an AlterTableMetadataRequest object with default
         * parameter values.
         */
        AlterTableMetadataRequest() :
            tableNames(std::vector<std::string>()),
            metadataMap(std::map<std::string, std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AlterTableMetadataRequest object with the specified
         * parameters.
         * 
         * @param[in] tableNames_  Names of the tables whose metadata will be
         *                         updated, in [schema_name.]table_name format,
         *                         using standard <a
         *                         href="../../../concepts/tables/#table-name-resolution"
         *                         target="_top">name resolution rules</a>.
         *                         All specified tables must exist, or an error
         *                         will be returned.
         * @param[in] metadataMap_  A map which contains the metadata of the
         *                          tables that are to be updated. Note that
         *                          only one map is provided for all the
         *                          tables; so the change will be applied to
         *                          every table. If the provided map is empty,
         *                          then all existing metadata for the table(s)
         *                          will be cleared.
         * @param[in] options_  Optional parameters.
         * 
         */
        AlterTableMetadataRequest(const std::vector<std::string>& tableNames_, const std::map<std::string, std::string>& metadataMap_, const std::map<std::string, std::string>& options_):
            tableNames( tableNames_ ),
            metadataMap( metadataMap_ ),
            options( options_ )
        {
        }

        std::vector<std::string> tableNames;
        std::map<std::string, std::string> metadataMap;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AlterTableMetadataRequest>
    {
        static void encode(Encoder& e, const gpudb::AlterTableMetadataRequest& v)
        {
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.metadataMap);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AlterTableMetadataRequest& v)
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
                            ::avro::decode(d, v.metadataMap);
                            break;

                        case 2:
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
                ::avro::decode(d, v.metadataMap);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #alterTableMetadata(const AlterTableMetadataRequest&) const}.
     * <p>
     * Updates (adds or changes) metadata for tables. The metadata key and
     * values must both be strings. This is an easy way to annotate whole
     * tables rather
     * than single records within tables.  Some examples of metadata are owner
     * of the
     * table, table creation timestamp etc.
     */
    struct AlterTableMetadataResponse
    {

        /**
         * Constructs an AlterTableMetadataResponse object with default
         * parameter values.
         */
        AlterTableMetadataResponse() :
            tableNames(std::vector<std::string>()),
            metadataMap(std::map<std::string, std::string>()),
            info(std::map<std::string, std::string>())
        {
        }

        std::vector<std::string> tableNames;
        std::map<std::string, std::string> metadataMap;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AlterTableMetadataResponse>
    {
        static void encode(Encoder& e, const gpudb::AlterTableMetadataResponse& v)
        {
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.metadataMap);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::AlterTableMetadataResponse& v)
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
                            ::avro::decode(d, v.metadataMap);
                            break;

                        case 2:
                            ::avro::decode(d, v.info);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableNames);
                ::avro::decode(d, v.metadataMap);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
