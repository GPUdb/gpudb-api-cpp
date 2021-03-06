/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __EXECUTE_SQL_H__
#define __EXECUTE_SQL_H__

#include "../GenericRecord.hpp"

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #executeSqlRaw(const ExecuteSqlRequest&) const}.
     * <p>
     * Execute a SQL statement (query, DML, or DDL).
     * <p>
     * See <a href="../../../concepts/sql/" target="_top">SQL Support</a> for
     * the complete set of supported SQL commands.
     */
    struct ExecuteSqlRequest
    {

        /**
         * Constructs an ExecuteSqlRequest object with default parameter
         * values.
         */
        ExecuteSqlRequest() :
            statement(std::string()),
            offset(int64_t()),
            limit(int64_t()),
            encoding(std::string("binary")),
            requestSchemaStr(std::string()),
            data(std::vector<std::vector<uint8_t> >()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an ExecuteSqlRequest object with the specified
         * parameters.
         * 
         * @param[in] statement_  SQL statement (query, DML, or DDL) to be
         *                        executed
         * @param[in] offset_  A positive integer indicating the number of
         *                     initial results to skip (this can be useful for
         *                     paging through the results).  The minimum
         *                     allowed value is 0. The maximum allowed value is
         *                     MAX_INT.
         * @param[in] limit_  A positive integer indicating the maximum number
         *                    of results to be returned, or END_OF_SET (-9999)
         *                    to indicate that the maximum number of results
         *                    allowed by the server should be returned.  The
         *                    number of records returned will never exceed the
         *                    server's own limit, defined by the <a
         *                    href="../../../config/#general"
         *                    target="_top">max_get_records_size</a> parameter
         *                    in the server configuration.  Use @a
         *                    hasMoreRecords to see if more records exist in
         *                    the result to be fetched, and @a offset & @a
         *                    limit to request subsequent pages of results.
         * @param[in] requestSchemaStr_  Avro schema of @a data.
         * @param[in] data_  An array of binary-encoded data for the records to
         *                   be binded to the SQL query.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::execute_sql_parallel_execution: If @a
         *                      false, disables the parallel step execution of
         *                      the given query.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_cost_based_optimization: If
         *                      @a false, disables the cost-based optimization
         *                      of the given query.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li> gpudb::execute_sql_plan_cache: If
         *                      @a false, disables plan caching for the given
         *                      query.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_rule_based_optimization: If
         *                      @a false, disables rule-based rewrite
         *                      optimizations for the given query
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_results_caching: If @a
         *                      false, disables caching of the results of the
         *                      given query
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li> gpudb::execute_sql_paging_table:
         *                      When empty or the specified paging table not
         *                      exists, the system will create a paging table
         *                      and return when query output has more records
         *                      than the user asked. If the paging table exists
         *                      in the system, the records from the paging
         *                      table are returned without evaluating the
         *                      query.
         *                              <li>
         *                      gpudb::execute_sql_paging_table_ttl: Sets the
         *                      <a href="../../../concepts/ttl/"
         *                      target="_top">TTL</a> of the paging table.
         *                              <li>
         *                      gpudb::execute_sql_distributed_joins: If @a
         *                      true, enables the use of distributed joins in
         *                      servicing the given query.  Any query requiring
         *                      a distributed join will succeed, though hints
         *                      can be used in the query to change the
         *                      distribution of the source data to allow the
         *                      query to succeed.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li>
         *                      gpudb::execute_sql_distributed_operations: If
         *                      @a true, enables the use of distributed
         *                      operations in servicing the given query.  Any
         *                      query requiring a distributed join will
         *                      succeed, though hints can be used in the query
         *                      to change the distribution of the source data
         *                      to allow the query to succeed.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li>
         *                      gpudb::execute_sql_ssq_optimization: If @a
         *                      false, scalar subqueries will be translated
         *                      into joins
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_late_materialization: If @a
         *                      true, Joins/Filters results  will always be
         *                      materialized ( saved to result tables format)
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li> gpudb::execute_sql_ttl: Sets the
         *                      <a href="../../../concepts/ttl/"
         *                      target="_top">TTL</a> of the intermediate
         *                      result tables used in query execution.
         *                              <li>
         *                      gpudb::execute_sql_update_on_existing_pk: Can
         *                      be used to customize behavior when the updated
         *                      primary key value already exists as described
         *                      in /insert/records.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li>
         *                      gpudb::execute_sql_preserve_dict_encoding: If
         *                      @a true, then columns that were dict encoded in
         *                      the source table will be dict encoded in the
         *                      projection table.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_validate_change_column: When
         *                      changing a column using alter table, validate
         *                      the change before applying it. If @a true, then
         *                      validate all values. A value too large (or too
         *                      long) for the new type will prevent any change.
         *                      If @a false, then when a value is too large or
         *                      long, it will be truncated.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li> gpudb::execute_sql_prepare_mode:
         *                      If @a true, compiles a query into an execution
         *                      plan and saves it in query cache. Query
         *                      execution is not performed and an empty
         *                      response will be returned to user
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                      </ul>
         * 
         */
        ExecuteSqlRequest(const std::string& statement_, const int64_t offset_, const int64_t limit_, const std::string& requestSchemaStr_, const std::vector<std::vector<uint8_t> >& data_, const std::map<std::string, std::string>& options_):
            statement( statement_ ),
            offset( offset_ ),
            limit( limit_ ),
            encoding( "binary" ),
            requestSchemaStr( requestSchemaStr_ ),
            data( data_ ),
            options( options_ )
        {
        }

        /**
         * Constructs an ExecuteSqlRequest object with the specified
         * parameters.
         * 
         * @param[in] statement_  SQL statement (query, DML, or DDL) to be
         *                        executed
         * @param[in] offset_  A positive integer indicating the number of
         *                     initial results to skip (this can be useful for
         *                     paging through the results).  The minimum
         *                     allowed value is 0. The maximum allowed value is
         *                     MAX_INT.
         * @param[in] limit_  A positive integer indicating the maximum number
         *                    of results to be returned, or END_OF_SET (-9999)
         *                    to indicate that the maximum number of results
         *                    allowed by the server should be returned.  The
         *                    number of records returned will never exceed the
         *                    server's own limit, defined by the <a
         *                    href="../../../config/#general"
         *                    target="_top">max_get_records_size</a> parameter
         *                    in the server configuration.  Use @a
         *                    hasMoreRecords to see if more records exist in
         *                    the result to be fetched, and @a offset & @a
         *                    limit to request subsequent pages of results.
         * @param[in] encoding_  Specifies the encoding for returned records;
         *                       either 'binary' or 'json'.
         *                       <ul>
         *                               <li> gpudb::execute_sql_binary
         *                               <li> gpudb::execute_sql_json
         *                       </ul>
         *                       The default value is
         *                       gpudb::execute_sql_binary.
         * @param[in] requestSchemaStr_  Avro schema of @a data.
         * @param[in] data_  An array of binary-encoded data for the records to
         *                   be binded to the SQL query.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::execute_sql_parallel_execution: If @a
         *                      false, disables the parallel step execution of
         *                      the given query.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_cost_based_optimization: If
         *                      @a false, disables the cost-based optimization
         *                      of the given query.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li> gpudb::execute_sql_plan_cache: If
         *                      @a false, disables plan caching for the given
         *                      query.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_rule_based_optimization: If
         *                      @a false, disables rule-based rewrite
         *                      optimizations for the given query
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_results_caching: If @a
         *                      false, disables caching of the results of the
         *                      given query
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li> gpudb::execute_sql_paging_table:
         *                      When empty or the specified paging table not
         *                      exists, the system will create a paging table
         *                      and return when query output has more records
         *                      than the user asked. If the paging table exists
         *                      in the system, the records from the paging
         *                      table are returned without evaluating the
         *                      query.
         *                              <li>
         *                      gpudb::execute_sql_paging_table_ttl: Sets the
         *                      <a href="../../../concepts/ttl/"
         *                      target="_top">TTL</a> of the paging table.
         *                              <li>
         *                      gpudb::execute_sql_distributed_joins: If @a
         *                      true, enables the use of distributed joins in
         *                      servicing the given query.  Any query requiring
         *                      a distributed join will succeed, though hints
         *                      can be used in the query to change the
         *                      distribution of the source data to allow the
         *                      query to succeed.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li>
         *                      gpudb::execute_sql_distributed_operations: If
         *                      @a true, enables the use of distributed
         *                      operations in servicing the given query.  Any
         *                      query requiring a distributed join will
         *                      succeed, though hints can be used in the query
         *                      to change the distribution of the source data
         *                      to allow the query to succeed.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li>
         *                      gpudb::execute_sql_ssq_optimization: If @a
         *                      false, scalar subqueries will be translated
         *                      into joins
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_late_materialization: If @a
         *                      true, Joins/Filters results  will always be
         *                      materialized ( saved to result tables format)
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li> gpudb::execute_sql_ttl: Sets the
         *                      <a href="../../../concepts/ttl/"
         *                      target="_top">TTL</a> of the intermediate
         *                      result tables used in query execution.
         *                              <li>
         *                      gpudb::execute_sql_update_on_existing_pk: Can
         *                      be used to customize behavior when the updated
         *                      primary key value already exists as described
         *                      in /insert/records.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                              <li>
         *                      gpudb::execute_sql_preserve_dict_encoding: If
         *                      @a true, then columns that were dict encoded in
         *                      the source table will be dict encoded in the
         *                      projection table.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li>
         *                      gpudb::execute_sql_validate_change_column: When
         *                      changing a column using alter table, validate
         *                      the change before applying it. If @a true, then
         *                      validate all values. A value too large (or too
         *                      long) for the new type will prevent any change.
         *                      If @a false, then when a value is too large or
         *                      long, it will be truncated.
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_true.
         *                              <li> gpudb::execute_sql_prepare_mode:
         *                      If @a true, compiles a query into an execution
         *                      plan and saves it in query cache. Query
         *                      execution is not performed and an empty
         *                      response will be returned to user
         *                      <ul>
         *                              <li> gpudb::execute_sql_true
         *                              <li> gpudb::execute_sql_false
         *                      </ul>
         *                      The default value is gpudb::execute_sql_false.
         *                      </ul>
         * 
         */
        ExecuteSqlRequest(const std::string& statement_, const int64_t offset_, const int64_t limit_, const std::string& encoding_, const std::string& requestSchemaStr_, const std::vector<std::vector<uint8_t> >& data_, const std::map<std::string, std::string>& options_):
            statement( statement_ ),
            offset( offset_ ),
            limit( limit_ ),
            encoding( encoding_ ),
            requestSchemaStr( requestSchemaStr_ ),
            data( data_ ),
            options( options_ )
        {
        }

        std::string statement;
        int64_t offset;
        int64_t limit;
        std::string encoding;
        std::string requestSchemaStr;
        std::vector<std::vector<uint8_t> > data;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ExecuteSqlRequest>
    {
        static void encode(Encoder& e, const gpudb::ExecuteSqlRequest& v)
        {
            ::avro::encode(e, v.statement);
            ::avro::encode(e, v.offset);
            ::avro::encode(e, v.limit);
            ::avro::encode(e, v.encoding);
            ::avro::encode(e, v.requestSchemaStr);
            ::avro::encode(e, v.data);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::ExecuteSqlRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.statement);
                            break;

                        case 1:
                            ::avro::decode(d, v.offset);
                            break;

                        case 2:
                            ::avro::decode(d, v.limit);
                            break;

                        case 3:
                            ::avro::decode(d, v.encoding);
                            break;

                        case 4:
                            ::avro::decode(d, v.requestSchemaStr);
                            break;

                        case 5:
                            ::avro::decode(d, v.data);
                            break;

                        case 6:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.statement);
                ::avro::decode(d, v.offset);
                ::avro::decode(d, v.limit);
                ::avro::decode(d, v.encoding);
                ::avro::decode(d, v.requestSchemaStr);
                ::avro::decode(d, v.data);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #executeSqlRaw(const ExecuteSqlRequest&) const}.
     * <p>
     * Execute a SQL statement (query, DML, or DDL).
     * <p>
     * See <a href="../../../concepts/sql/" target="_top">SQL Support</a> for
     * the complete set of supported SQL commands.
     */
    struct RawExecuteSqlResponse
    {

        /**
         * Constructs a RawExecuteSqlResponse object with default parameter
         * values.
         */
        RawExecuteSqlResponse() :
            countAffected(int64_t()),
            responseSchemaStr(std::string()),
            binaryEncodedResponse(std::vector<uint8_t>()),
            jsonEncodedResponse(std::string()),
            totalNumberOfRecords(int64_t()),
            hasMoreRecords(bool()),
            pagingTable(std::string()),
            info(std::map<std::string, std::string>())
        {
        }

        int64_t countAffected;
        std::string responseSchemaStr;
        std::vector<uint8_t> binaryEncodedResponse;
        std::string jsonEncodedResponse;
        int64_t totalNumberOfRecords;
        bool hasMoreRecords;
        std::string pagingTable;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::RawExecuteSqlResponse>
    {
        static void encode(Encoder& e, const gpudb::RawExecuteSqlResponse& v)
        {
            ::avro::encode(e, v.countAffected);
            ::avro::encode(e, v.responseSchemaStr);
            ::avro::encode(e, v.binaryEncodedResponse);
            ::avro::encode(e, v.jsonEncodedResponse);
            ::avro::encode(e, v.totalNumberOfRecords);
            ::avro::encode(e, v.hasMoreRecords);
            ::avro::encode(e, v.pagingTable);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::RawExecuteSqlResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.countAffected);
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
                            ::avro::decode(d, v.totalNumberOfRecords);
                            break;

                        case 5:
                            ::avro::decode(d, v.hasMoreRecords);
                            break;

                        case 6:
                            ::avro::decode(d, v.pagingTable);
                            break;

                        case 7:
                            ::avro::decode(d, v.info);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.countAffected);
                ::avro::decode(d, v.responseSchemaStr);
                ::avro::decode(d, v.binaryEncodedResponse);
                ::avro::decode(d, v.jsonEncodedResponse);
                ::avro::decode(d, v.totalNumberOfRecords);
                ::avro::decode(d, v.hasMoreRecords);
                ::avro::decode(d, v.pagingTable);
                ::avro::decode(d, v.info);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #executeSql(const ExecuteSqlRequest&) const}.
     * <p>
     * Execute a SQL statement (query, DML, or DDL).
     * <p>
     * See <a href="../../../concepts/sql/" target="_top">SQL Support</a> for
     * the complete set of supported SQL commands.
     */
    struct ExecuteSqlResponse
    {

        /**
         * Constructs an ExecuteSqlResponse object with default parameter
         * values.
         */
        ExecuteSqlResponse() :
            countAffected(int64_t()),
            responseSchemaStr(std::string()),
            data(std::vector<gpudb::GenericRecord>()),
            totalNumberOfRecords(int64_t()),
            hasMoreRecords(bool()),
            pagingTable(std::string()),
            info(std::map<std::string, std::string>()),
            dataTypePtr((gpudb::Type*)NULL)
        {
        }

        int64_t countAffected;
        std::string responseSchemaStr;
        std::vector<gpudb::GenericRecord> data;
        int64_t totalNumberOfRecords;
        bool hasMoreRecords;
        std::string pagingTable;
        std::map<std::string, std::string> info;
        gpudb_type_ptr_t dataTypePtr;
    };
}

#endif
