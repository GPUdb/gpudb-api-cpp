/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __AGGREGATE_UNIQUE_H__
#define __AGGREGATE_UNIQUE_H__

#include "../GenericRecord.hpp"

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #aggregateUniqueRaw(const AggregateUniqueRequest&) const}.
     * <p>
     * Returns all the unique values from a particular column (specified by @a
     * columnName) of a particular table (specified by @a tableName). If @a
     * columnName is a numeric column the values will be in @a
     * binaryEncodedResponse. Otherwise if @a columnName is a string column the
     * values will be in @a jsonEncodedResponse.  @a offset and @a limit are
     * used to page through the results if there are large numbers of unique
     * values. To get the first 10 unique values sorted in descending order @a
     * options would be::
     * <p>
     * {"limit":"10","sort_order":"descending"}.
     * <p>
     * The response is returned as a dynamic schema. For details see: <a
     * href="../../concepts/dynamic_schemas.html" target="_top">dynamic schemas
     * documentation</a>.
     * <p>
     * If a @a result_table name is specified in the options, the results are
     * stored in a new table with that name.  No results are returned in the
     * response.  If the source table's <a
     * href="../../concepts/tables.html#shard-keys" target="_top">shard key</a>
     * is used as the @a columnName, the result table will be sharded, in all
     * other cases it will be replicated.  Sorting will properly function only
     * if the result table is replicated or if there is only one processing
     * node and should not be relied upon in other cases.
     */
    struct AggregateUniqueRequest
    {

        /**
         * Constructs an AggregateUniqueRequest object with default parameter
         * values.
         */
        AggregateUniqueRequest() :
            tableName(std::string()),
            columnName(std::string()),
            offset(int64_t()),
            limit(int64_t()),
            encoding(std::string("binary")),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AggregateUniqueRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of the table on which the operation will
         *                        be performed. Must be an existing table.
         * @param[in] columnName_  Name of the column or an expression
         *                         containing one or more column names on which
         *                         the unique function would be applied.
         * @param[in] offset_  A positive integer indicating the number of
         *                     initial results to skip (this can be useful for
         *                     paging through the results).  The minimum
         *                     allowed value is 0. The maximum allowed value is
         *                     MAX_INT.
         * @param[in] limit_  A positive integer indicating the maximum number
         *                    of results to be returned. Or END_OF_SET (-9999)
         *                    to indicate that the max number of results should
         *                    be returned.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::aggregate_unique_collection_name: Name
         *                      of a collection which is to contain the table
         *                      specified in 'result_table', otherwise the
         *                      table will be a top-level table. If the
         *                      collection does not allow duplicate types and
         *                      it contains a table of the same type as the
         *                      given one, then this table creation request
         *                      will fail.
         *                              <li>
         *                      gpudb::aggregate_unique_expression: Optional
         *                      filter expression to apply to the table.
         *                              <li>
         *                      gpudb::aggregate_unique_sort_order: String
         *                      indicating how the returned values should be
         *                      sorted.
         *                      <ul>
         *                              <li> gpudb::aggregate_unique_ascending
         *                              <li> gpudb::aggregate_unique_descending
         *                      </ul>
         *                              <li>
         *                      gpudb::aggregate_unique_result_table: The name
         *                      of the table used to store the results. If
         *                      present no results are returned in the
         *                      response. Has the same naming restrictions as
         *                      <a href="../../concepts/tables.html"
         *                      target="_top">tables</a>.
         *                              <li>
         *                      gpudb::aggregate_unique_result_table_persist:
         *                      If @a true then the result table specified in
         *                      @a result_table will be persisted as a regular
         *                      table (it will not be automatically cleared
         *                      unless a @a ttl is provided, and the table data
         *                      can be modified in subsequent operations). If
         *                      @a false (the default) then the result table
         *                      will be a read-only, memory-only temporary
         *                      table.
         *                      <ul>
         *                              <li> gpudb::aggregate_unique_true
         *                              <li> gpudb::aggregate_unique_false
         *                      </ul>
         *                              <li> gpudb::aggregate_unique_ttl: Sets
         *                      the TTL of the table specified in
         *                      'result_table'. The value must be the desired
         *                      TTL in minutes.
         *                      </ul>
         * 
         */
        AggregateUniqueRequest(const std::string& tableName_, const std::string& columnName_, const int64_t offset_, const int64_t limit_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            columnName( columnName_ ),
            offset( offset_ ),
            limit( limit_ ),
            encoding( "binary" ),
            options( options_ )
        {
        }

        /**
         * Constructs an AggregateUniqueRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of the table on which the operation will
         *                        be performed. Must be an existing table.
         * @param[in] columnName_  Name of the column or an expression
         *                         containing one or more column names on which
         *                         the unique function would be applied.
         * @param[in] offset_  A positive integer indicating the number of
         *                     initial results to skip (this can be useful for
         *                     paging through the results).  The minimum
         *                     allowed value is 0. The maximum allowed value is
         *                     MAX_INT.
         * @param[in] limit_  A positive integer indicating the maximum number
         *                    of results to be returned. Or END_OF_SET (-9999)
         *                    to indicate that the max number of results should
         *                    be returned.
         * @param[in] encoding_  Specifies the encoding for returned records.
         *                       <ul>
         *                               <li> gpudb::aggregate_unique_binary:
         *                       Indicates that the returned records should be
         *                       binary encoded.
         *                               <li> gpudb::aggregate_unique_json:
         *                       Indicates that the returned records should be
         *                       json encoded.
         *                       </ul>
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::aggregate_unique_collection_name: Name
         *                      of a collection which is to contain the table
         *                      specified in 'result_table', otherwise the
         *                      table will be a top-level table. If the
         *                      collection does not allow duplicate types and
         *                      it contains a table of the same type as the
         *                      given one, then this table creation request
         *                      will fail.
         *                              <li>
         *                      gpudb::aggregate_unique_expression: Optional
         *                      filter expression to apply to the table.
         *                              <li>
         *                      gpudb::aggregate_unique_sort_order: String
         *                      indicating how the returned values should be
         *                      sorted.
         *                      <ul>
         *                              <li> gpudb::aggregate_unique_ascending
         *                              <li> gpudb::aggregate_unique_descending
         *                      </ul>
         *                              <li>
         *                      gpudb::aggregate_unique_result_table: The name
         *                      of the table used to store the results. If
         *                      present no results are returned in the
         *                      response. Has the same naming restrictions as
         *                      <a href="../../concepts/tables.html"
         *                      target="_top">tables</a>.
         *                              <li>
         *                      gpudb::aggregate_unique_result_table_persist:
         *                      If @a true then the result table specified in
         *                      @a result_table will be persisted as a regular
         *                      table (it will not be automatically cleared
         *                      unless a @a ttl is provided, and the table data
         *                      can be modified in subsequent operations). If
         *                      @a false (the default) then the result table
         *                      will be a read-only, memory-only temporary
         *                      table.
         *                      <ul>
         *                              <li> gpudb::aggregate_unique_true
         *                              <li> gpudb::aggregate_unique_false
         *                      </ul>
         *                              <li> gpudb::aggregate_unique_ttl: Sets
         *                      the TTL of the table specified in
         *                      'result_table'. The value must be the desired
         *                      TTL in minutes.
         *                      </ul>
         * 
         */
        AggregateUniqueRequest(const std::string& tableName_, const std::string& columnName_, const int64_t offset_, const int64_t limit_, const std::string& encoding_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            columnName( columnName_ ),
            offset( offset_ ),
            limit( limit_ ),
            encoding( encoding_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string columnName;
        int64_t offset;
        int64_t limit;
        std::string encoding;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AggregateUniqueRequest>
    {
        static void encode(Encoder& e, const gpudb::AggregateUniqueRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.columnName);
            ::avro::encode(e, v.offset);
            ::avro::encode(e, v.limit);
            ::avro::encode(e, v.encoding);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AggregateUniqueRequest& v)
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
                            ::avro::decode(d, v.columnName);
                            break;

                        case 2:
                            ::avro::decode(d, v.offset);
                            break;

                        case 3:
                            ::avro::decode(d, v.limit);
                            break;

                        case 4:
                            ::avro::decode(d, v.encoding);
                            break;

                        case 5:
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
                ::avro::decode(d, v.columnName);
                ::avro::decode(d, v.offset);
                ::avro::decode(d, v.limit);
                ::avro::decode(d, v.encoding);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #aggregateUniqueRaw(const AggregateUniqueRequest&) const}.
     * <p>
     * Returns all the unique values from a particular column (specified by @a
     * columnName) of a particular table (specified by @a tableName). If @a
     * columnName is a numeric column the values will be in @a
     * binaryEncodedResponse. Otherwise if @a columnName is a string column the
     * values will be in @a jsonEncodedResponse.  @a offset and @a limit are
     * used to page through the results if there are large numbers of unique
     * values. To get the first 10 unique values sorted in descending order @a
     * options would be::
     * <p>
     * {"limit":"10","sort_order":"descending"}.
     * <p>
     * The response is returned as a dynamic schema. For details see: <a
     * href="../../concepts/dynamic_schemas.html" target="_top">dynamic schemas
     * documentation</a>.
     * <p>
     * If a @a result_table name is specified in the options, the results are
     * stored in a new table with that name.  No results are returned in the
     * response.  If the source table's <a
     * href="../../concepts/tables.html#shard-keys" target="_top">shard key</a>
     * is used as the @a columnName, the result table will be sharded, in all
     * other cases it will be replicated.  Sorting will properly function only
     * if the result table is replicated or if there is only one processing
     * node and should not be relied upon in other cases.
     */
    struct RawAggregateUniqueResponse
    {

        /**
         * Constructs a RawAggregateUniqueResponse object with default
         * parameter values.
         */
        RawAggregateUniqueResponse() :
            tableName(std::string()),
            responseSchemaStr(std::string()),
            binaryEncodedResponse(std::vector<uint8_t>()),
            jsonEncodedResponse(std::string()),
            hasMoreRecords(bool())
        {
        }

        std::string tableName;
        std::string responseSchemaStr;
        std::vector<uint8_t> binaryEncodedResponse;
        std::string jsonEncodedResponse;
        bool hasMoreRecords;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::RawAggregateUniqueResponse>
    {
        static void encode(Encoder& e, const gpudb::RawAggregateUniqueResponse& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.responseSchemaStr);
            ::avro::encode(e, v.binaryEncodedResponse);
            ::avro::encode(e, v.jsonEncodedResponse);
            ::avro::encode(e, v.hasMoreRecords);
        }

        static void decode(Decoder& d, gpudb::RawAggregateUniqueResponse& v)
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
                            ::avro::decode(d, v.responseSchemaStr);
                            break;

                        case 2:
                            ::avro::decode(d, v.binaryEncodedResponse);
                            break;

                        case 3:
                            ::avro::decode(d, v.jsonEncodedResponse);
                            break;

                        case 4:
                            ::avro::decode(d, v.hasMoreRecords);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.responseSchemaStr);
                ::avro::decode(d, v.binaryEncodedResponse);
                ::avro::decode(d, v.jsonEncodedResponse);
                ::avro::decode(d, v.hasMoreRecords);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #aggregateUnique(const AggregateUniqueRequest&) const}.
     * <p>
     * Returns all the unique values from a particular column (specified by @a
     * columnName) of a particular table (specified by @a tableName). If @a
     * columnName is a numeric column the values will be in @a
     * binaryEncodedResponse. Otherwise if @a columnName is a string column the
     * values will be in @a jsonEncodedResponse.  @a offset and @a limit are
     * used to page through the results if there are large numbers of unique
     * values. To get the first 10 unique values sorted in descending order @a
     * options would be::
     * <p>
     * {"limit":"10","sort_order":"descending"}.
     * <p>
     * The response is returned as a dynamic schema. For details see: <a
     * href="../../concepts/dynamic_schemas.html" target="_top">dynamic schemas
     * documentation</a>.
     * <p>
     * If a @a result_table name is specified in the options, the results are
     * stored in a new table with that name.  No results are returned in the
     * response.  If the source table's <a
     * href="../../concepts/tables.html#shard-keys" target="_top">shard key</a>
     * is used as the @a columnName, the result table will be sharded, in all
     * other cases it will be replicated.  Sorting will properly function only
     * if the result table is replicated or if there is only one processing
     * node and should not be relied upon in other cases.
     */
    struct AggregateUniqueResponse
    {

        /**
         * Constructs an AggregateUniqueResponse object with default parameter
         * values.
         */
        AggregateUniqueResponse() :
            tableName(std::string()),
            responseSchemaStr(std::string()),
            data(std::vector<gpudb::GenericRecord>()),
            hasMoreRecords(bool())
        {
        }

        std::string tableName;
        std::string responseSchemaStr;
        std::vector<gpudb::GenericRecord> data;
        bool hasMoreRecords;
    };
}

#endif
