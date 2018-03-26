/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __CREATE_TABLE_H__
#define __CREATE_TABLE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #createTable(const CreateTableRequest&) const}.
     * <p>
     * Creates a new table or collection. If a new table is being created, the
     * type of the table is given by @a typeId, which must the be the ID of a
     * currently registered type (i.e. one created via {@link
     * #createType(const CreateTypeRequest&) const}). The table will be
     * created inside a collection if the option @a collection_name is
     * specified. If that collection does not already exist, it will be
     * created.
     * <p>
     * To create a new collection, specify the name of the collection in @a
     * tableName and set the @a is_collection option to @a true; @a typeId will
     * be ignored.
     */
    struct CreateTableRequest
    {

        /**
         * Constructs a CreateTableRequest object with default parameter
         * values.
         */
        CreateTableRequest() :
            tableName(std::string()),
            typeId(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a CreateTableRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of the table to be created. Error for
         *                        requests with existing table of the same name
         *                        and type id may be suppressed by using the @a
         *                        no_error_if_exists option.  See <a
         *                        href="../../concepts/tables.html"
         *                        target="_top">Tables</a> for naming
         *                        restrictions.
         * @param[in] typeId_  ID of a currently registered type. All objects
         *                     added to the newly created table will be of this
         *                     type.  Ignored if @a is_collection is @a true.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::create_table_no_error_if_exists: If @a
         *                      true, prevents an error from occurring if the
         *                      table already exists and is of the given type.
         *                      If a table with the same ID but a different
         *                      type exists, it is still an error.
         *                      <ul>
         *                              <li> gpudb::create_table_true
         *                              <li> gpudb::create_table_false
         *                      </ul>
         *                      The default value is gpudb::create_table_false.
         *                              <li>
         *                      gpudb::create_table_collection_name: Name of a
         *                      collection which is to contain the newly
         *                      created table. If the collection provided is
         *                      non-existent, the collection will be
         *                      automatically created. If empty, then the newly
         *                      created table will be a top-level table.
         *                              <li> gpudb::create_table_is_collection:
         *                      Indicates whether the new table to be created
         *                      will be a collection.
         *                      <ul>
         *                              <li> gpudb::create_table_true
         *                              <li> gpudb::create_table_false
         *                      </ul>
         *                      The default value is gpudb::create_table_false.
         *                              <li>
         *                      gpudb::create_table_disallow_homogeneous_tables:
         *                      For a collection, indicates whether the
         *                      collection prohibits containment of multiple
         *                      tables of exactly the same data type.
         *                      <ul>
         *                              <li> gpudb::create_table_true
         *                              <li> gpudb::create_table_false
         *                      </ul>
         *                      The default value is gpudb::create_table_false.
         *                              <li> gpudb::create_table_is_replicated:
         *                      For a table, indicates the <a
         *                      href="../../concepts/tables.html#distribution"
         *                      target="_top">distribution scheme</a> for the
         *                      table's data.  If true, the table will be <a
         *                      href="../../concepts/tables.html#replication"
         *                      target="_top">replicated</a>.  If false, the
         *                      table will be <a
         *                      href="../../concepts/tables.html#sharding"
         *                      target="_top">sharded</a> according to the <a
         *                      href="../../concepts/tables.html#shard-keys"
         *                      target="_top">shard key</a> specified in the
         *                      given @a typeId, or <a
         *                      href="../../concepts/tables.html#random-sharding"
         *                      target="_top">randomly sharded</a>, if no shard
         *                      key is specified.
         *                      <ul>
         *                              <li> gpudb::create_table_true
         *                              <li> gpudb::create_table_false
         *                      </ul>
         *                      The default value is gpudb::create_table_false.
         *                              <li> gpudb::create_table_foreign_keys:
         *                      Semicolon-separated list of <a
         *                      href="../../concepts/tables.html#foreign-keys"
         *                      target="_top">foreign keys</a>, of the format
         *                      '(source_column_name [, ...]) references
         *                      target_table_name(primary_key_column_name [,
         *                      ...]) [as foreign_key_name]'.
         *                              <li>
         *                      gpudb::create_table_foreign_shard_key: Foreign
         *                      shard key of the format 'source_column
         *                      references shard_by_column from
         *                      target_table(primary_key_column)'
         *                              <li> gpudb::create_table_ttl: For a
         *                      table, sets the <a
         *                      href="../../concepts/ttl.html"
         *                      target="_top">TTL</a> of the table specified in
         *                      @a tableName.
         *                              <li> gpudb::create_table_chunk_size:
         *                      Indicates the chunk size to be used for this
         *                      table.
         *                              <li>
         *                      gpudb::create_table_is_result_table: For a
         *                      table, indicates whether the table is an
         *                      in-memory table. A result table cannot contain
         *                      store_only, text_search, or string columns
         *                      (charN columns are acceptable), and it will not
         *                      be retained if the server is restarted.
         *                      <ul>
         *                              <li> gpudb::create_table_true
         *                              <li> gpudb::create_table_false
         *                      </ul>
         *                      The default value is gpudb::create_table_false.
         *                      </ul>
         * 
         */
        CreateTableRequest(const std::string& tableName_, const std::string& typeId_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            typeId( typeId_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string typeId;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateTableRequest>
    {
        static void encode(Encoder& e, const gpudb::CreateTableRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.typeId);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::CreateTableRequest& v)
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
                            ::avro::decode(d, v.typeId);
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
                ::avro::decode(d, v.tableName);
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
     * #createTable(const CreateTableRequest&) const}.
     * <p>
     * Creates a new table or collection. If a new table is being created, the
     * type of the table is given by @a typeId, which must the be the ID of a
     * currently registered type (i.e. one created via {@link
     * #createType(const CreateTypeRequest&) const}). The table will be
     * created inside a collection if the option @a collection_name is
     * specified. If that collection does not already exist, it will be
     * created.
     * <p>
     * To create a new collection, specify the name of the collection in @a
     * tableName and set the @a is_collection option to @a true; @a typeId will
     * be ignored.
     */
    struct CreateTableResponse
    {

        /**
         * Constructs a CreateTableResponse object with default parameter
         * values.
         */
        CreateTableResponse() :
            tableName(std::string()),
            typeId(std::string()),
            isCollection(bool())
        {
        }

        std::string tableName;
        std::string typeId;
        bool isCollection;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateTableResponse>
    {
        static void encode(Encoder& e, const gpudb::CreateTableResponse& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.typeId);
            ::avro::encode(e, v.isCollection);
        }

        static void decode(Decoder& d, gpudb::CreateTableResponse& v)
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
                            ::avro::decode(d, v.typeId);
                            break;

                        case 2:
                            ::avro::decode(d, v.isCollection);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.typeId);
                ::avro::decode(d, v.isCollection);
            }
        }
    };
}

#endif
