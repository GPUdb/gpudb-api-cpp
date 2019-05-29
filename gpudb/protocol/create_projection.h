/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __CREATE_PROJECTION_H__
#define __CREATE_PROJECTION_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #createProjection(const CreateProjectionRequest&) const}.
     * <p>
     * Creates a new <a href="../../concepts/projections.html"
     * target="_top">projection</a> of an existing table. A projection
     * represents a subset of the columns (potentially including derived
     * columns) of a table.
     * <p>
     * For projection details and examples, see <a
     * href="../../concepts/projections.html" target="_top">Projections</a>.
     * For limitations, see <a
     * href="../../concepts/projections.html#limitations-and-cautions"
     * target="_top">Projection Limitations and Cautions</a>.
     * <p>
     * <a href="../../concepts/window.html" target="_top">Window functions</a>,
     * which can perform operations like moving averages, are available through
     * this endpoint as well as {@link
     * #getRecordsByColumnRaw(const GetRecordsByColumnRequest&) const}.
     * <p>
     * A projection can be created with a different <a
     * href="../../concepts/tables.html#shard-keys" target="_top">shard key</a>
     * than the source table.  By specifying @a shard_key, the projection will
     * be sharded according to the specified columns, regardless of how the
     * source table is sharded.  The source table can even be unsharded or
     * replicated.
     */
    struct CreateProjectionRequest
    {

        /**
         * Constructs a CreateProjectionRequest object with default parameter
         * values.
         */
        CreateProjectionRequest() :
            tableName(std::string()),
            projectionName(std::string()),
            columnNames(std::vector<std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a CreateProjectionRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of the existing table on which the
         *                        projection is to be applied.
         * @param[in] projectionName_  Name of the projection to be created.
         *                             Has the same naming restrictions as <a
         *                             href="../../concepts/tables.html"
         *                             target="_top">tables</a>.
         * @param[in] columnNames_  List of columns from @a tableName to be
         *                          included in the projection. Can include
         *                          derived columns. Can be specified as
         *                          aliased via the syntax 'column_name as
         *                          alias'.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::create_projection_collection_name: Name
         *                      of a <a href="../../concepts/collections.html"
         *                      target="_top">collection</a> to which the
         *                      projection is to be assigned as a child. If the
         *                      collection provided is non-existent, the
         *                      collection will be automatically created. If
         *                      empty, then the projection will be at the top
         *                      level.  The default value is ''.
         *                              <li>
         *                      gpudb::create_projection_expression: An
         *                      optional filter <a
         *                      href="../../concepts/expressions.html"
         *                      target="_top">expression</a> to be applied to
         *                      the source table prior to the projection.  The
         *                      default value is ''.
         *                              <li>
         *                      gpudb::create_projection_is_replicated: If @a
         *                      true then the projection will be replicated
         *                      even if the source table is not.
         *                      <ul>
         *                              <li> gpudb::create_projection_true
         *                              <li> gpudb::create_projection_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::create_projection_false.
         *                              <li> gpudb::create_projection_limit:
         *                      The number of records to keep.  The default
         *                      value is ''.
         *                              <li> gpudb::create_projection_order_by:
         *                      Comma-separated list of the columns to be
         *                      sorted by; e.g. 'timestamp asc, x desc'.  The
         *                      columns specified must be present in @a
         *                      columnNames.  If any alias is given for any
         *                      column name, the alias must be used, rather
         *                      than the original column name.  The default
         *                      value is ''.
         *                              <li>
         *                      gpudb::create_projection_materialize_on_gpu: If
         *                      @a true then the columns of the projection will
         *                      be cached on the GPU.
         *                      <ul>
         *                              <li> gpudb::create_projection_true
         *                              <li> gpudb::create_projection_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::create_projection_false.
         *                              <li>
         *                      gpudb::create_projection_chunk_size: Indicates
         *                      the chunk size to be used for this table.
         *                              <li>
         *                      gpudb::create_projection_create_indexes:
         *                      Comma-separated list of columns on which to
         *                      create indexes on the output table.  The
         *                      columns specified must be present in @a
         *                      columnNames.  If any alias is given for any
         *                      column name, the alias must be used, rather
         *                      than the original column name.
         *                              <li> gpudb::create_projection_ttl: Sets
         *                      the <a href="../../concepts/ttl.html"
         *                      target="_top">TTL</a> of the projection
         *                      specified in @a projectionName.
         *                              <li>
         *                      gpudb::create_projection_shard_key:
         *                      Comma-separated list of the columns to be
         *                      sharded on; e.g. 'column1, column2'.  The
         *                      columns specified must be present in @a
         *                      columnNames.  If any alias is given for any
         *                      column name, the alias must be used, rather
         *                      than the original column name.  The default
         *                      value is ''.
         *                              <li> gpudb::create_projection_persist:
         *                      If @a true, then the projection specified in @a
         *                      projectionName will be persisted and will not
         *                      expire unless a @a ttl is specified.   If @a
         *                      false, then the projection will be an in-memory
         *                      table and will expire unless a @a ttl is
         *                      specified otherwise.
         *                      <ul>
         *                              <li> gpudb::create_projection_true
         *                              <li> gpudb::create_projection_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::create_projection_false.
         *                              <li>
         *                      gpudb::create_projection_preserve_dict_encoding:
         *                      If @a true, then columns that were dict encoded
         *                      in the source table will be dict encoded in the
         *                      projection table.
         *                      <ul>
         *                              <li> gpudb::create_projection_true
         *                              <li> gpudb::create_projection_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::create_projection_false.
         *                              <li> gpudb::create_projection_view_id:
         *                      view this projection is part of.  The default
         *                      value is ''.
         *                      </ul>
         * 
         */
        CreateProjectionRequest(const std::string& tableName_, const std::string& projectionName_, const std::vector<std::string>& columnNames_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            projectionName( projectionName_ ),
            columnNames( columnNames_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string projectionName;
        std::vector<std::string> columnNames;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateProjectionRequest>
    {
        static void encode(Encoder& e, const gpudb::CreateProjectionRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.projectionName);
            ::avro::encode(e, v.columnNames);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::CreateProjectionRequest& v)
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
                            ::avro::decode(d, v.projectionName);
                            break;

                        case 2:
                            ::avro::decode(d, v.columnNames);
                            break;

                        case 3:
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
                ::avro::decode(d, v.projectionName);
                ::avro::decode(d, v.columnNames);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #createProjection(const CreateProjectionRequest&) const}.
     * <p>
     * Creates a new <a href="../../concepts/projections.html"
     * target="_top">projection</a> of an existing table. A projection
     * represents a subset of the columns (potentially including derived
     * columns) of a table.
     * <p>
     * For projection details and examples, see <a
     * href="../../concepts/projections.html" target="_top">Projections</a>.
     * For limitations, see <a
     * href="../../concepts/projections.html#limitations-and-cautions"
     * target="_top">Projection Limitations and Cautions</a>.
     * <p>
     * <a href="../../concepts/window.html" target="_top">Window functions</a>,
     * which can perform operations like moving averages, are available through
     * this endpoint as well as {@link
     * #getRecordsByColumnRaw(const GetRecordsByColumnRequest&) const}.
     * <p>
     * A projection can be created with a different <a
     * href="../../concepts/tables.html#shard-keys" target="_top">shard key</a>
     * than the source table.  By specifying @a shard_key, the projection will
     * be sharded according to the specified columns, regardless of how the
     * source table is sharded.  The source table can even be unsharded or
     * replicated.
     */
    struct CreateProjectionResponse
    {

        /**
         * Constructs a CreateProjectionResponse object with default parameter
         * values.
         */
        CreateProjectionResponse() :
            projectionName(std::string())
        {
        }

        std::string projectionName;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateProjectionResponse>
    {
        static void encode(Encoder& e, const gpudb::CreateProjectionResponse& v)
        {
            ::avro::encode(e, v.projectionName);
        }

        static void decode(Decoder& d, gpudb::CreateProjectionResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.projectionName);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.projectionName);
            }
        }
    };
}

#endif
