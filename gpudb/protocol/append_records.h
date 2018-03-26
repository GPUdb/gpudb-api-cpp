/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __APPEND_RECORDS_H__
#define __APPEND_RECORDS_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #appendRecords(const AppendRecordsRequest&) const}.
     * <p>
     * Append (or insert) all records from a source table (specified by @a
     * sourceTableName) to a particular target table (specified by @a
     * tableName). The field map (specified by @a fieldMap) holds the user
     * specified map of target table column names with their mapped source
     * column names.
     */
    struct AppendRecordsRequest
    {

        /**
         * Constructs an AppendRecordsRequest object with default parameter
         * values.
         */
        AppendRecordsRequest() :
            tableName(std::string()),
            sourceTableName(std::string()),
            fieldMap(std::map<std::string, std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AppendRecordsRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  The table name for the records to be
         *                        appended. Must be an existing table.
         * @param[in] sourceTableName_  The source table name to get records
         *                              from. Must be an existing table name.
         * @param[in] fieldMap_  Contains the mapping of column names from the
         *                       target table (specified by @a tableName) as
         *                       the keys, and corresponding column names or
         *                       expressions (e.g., 'col_name+1') from the
         *                       source table (specified by @a
         *                       sourceTableName). Must be existing column
         *                       names in source table and target table, and
         *                       their types must be matched. For details on
         *                       using expressions, see <a
         *                       href="../../concepts/expressions.html"
         *                       target="_top">Expressions</a>.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li> gpudb::append_records_offset: A
         *                      positive integer indicating the number of
         *                      initial results to skip from source table
         *                      (specified by @a sourceTableName). Default is
         *                      0. The minimum allowed value is 0. The maximum
         *                      allowed value is MAX_INT.
         *                              <li> gpudb::append_records_limit: A
         *                      positive integer indicating the maximum number
         *                      of results to be returned from source table
         *                      (specified by @a sourceTableName). Or
         *                      END_OF_SET (-9999) to indicate that the max
         *                      number of results should be returned.
         *                              <li> gpudb::append_records_expression:
         *                      Optional filter expression to apply to the
         *                      source table (specified by @a sourceTableName).
         *                      Empty by default.
         *                              <li> gpudb::append_records_order_by:
         *                      Comma-separated list of the columns to be
         *                      sorted from source table (specified by @a
         *                      sourceTableName) by; e.g. 'timestamp asc, x
         *                      desc'.  The columns specified must be present
         *                      in @a fieldMap.  If any alias is given for any
         *                      column name, the alias must be used, rather
         *                      than the original column name.
         *                              <li>
         *                      gpudb::append_records_update_on_existing_pk:
         *                      Specifies the record collision policy for
         *                      inserting the source table records (specified
         *                      by @a sourceTableName) into the target table
         *                      (specified by @a tableName) table with a <a
         *                      href="../../concepts/tables.html#primary-keys"
         *                      target="_top">primary key</a>.  If set to @a
         *                      true, any existing target table record with
         *                      primary key values that match those of a source
         *                      table record being inserted will be replaced by
         *                      that new record.  If set to @a false, any
         *                      existing target table record with primary key
         *                      values that match those of a source table
         *                      record being inserted will remain unchanged and
         *                      the new record discarded.  If the specified
         *                      table does not have a primary key, then this
         *                      option is ignored.
         *                      <ul>
         *                              <li> gpudb::append_records_true
         *                              <li> gpudb::append_records_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::append_records_false.
         *                      </ul>
         * 
         */
        AppendRecordsRequest(const std::string& tableName_, const std::string& sourceTableName_, const std::map<std::string, std::string>& fieldMap_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            sourceTableName( sourceTableName_ ),
            fieldMap( fieldMap_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string sourceTableName;
        std::map<std::string, std::string> fieldMap;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AppendRecordsRequest>
    {
        static void encode(Encoder& e, const gpudb::AppendRecordsRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.sourceTableName);
            ::avro::encode(e, v.fieldMap);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AppendRecordsRequest& v)
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
                            ::avro::decode(d, v.sourceTableName);
                            break;

                        case 2:
                            ::avro::decode(d, v.fieldMap);
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
                ::avro::decode(d, v.sourceTableName);
                ::avro::decode(d, v.fieldMap);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #appendRecords(const AppendRecordsRequest&) const}.
     * <p>
     * Append (or insert) all records from a source table (specified by @a
     * sourceTableName) to a particular target table (specified by @a
     * tableName). The field map (specified by @a fieldMap) holds the user
     * specified map of target table column names with their mapped source
     * column names.
     */
    struct AppendRecordsResponse
    {

        /**
         * Constructs an AppendRecordsResponse object with default parameter
         * values.
         */
        AppendRecordsResponse() :
            tableName(std::string())
        {
        }

        std::string tableName;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AppendRecordsResponse>
    {
        static void encode(Encoder& e, const gpudb::AppendRecordsResponse& v)
        {
            ::avro::encode(e, v.tableName);
        }

        static void decode(Decoder& d, gpudb::AppendRecordsResponse& v)
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

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
            }
        }
    };
}

#endif
