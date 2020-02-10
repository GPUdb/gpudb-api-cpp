/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __INSERT_RECORDS_FROM_FILES_H__
#define __INSERT_RECORDS_FROM_FILES_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #insertRecordsFromFiles(const InsertRecordsFromFilesRequest&) const}.
     * <p>
     * Reads from one or more files located on the server and inserts the data
     * into a new or existing table.
     * <p>
     * For CSV files, there are two loading schemes: positional and name-based.
     * The name-based loading scheme is enabled when the file has a header
     * present and @a text_has_header is set to @a true. In this scheme, the
     * source file(s) field names must match the target table's column names
     * exactly; however, the source file can have more fields than the target
     * table has columns. If @a error_handling is set to @a permissive, the
     * source file can have fewer fields than the target table has columns. If
     * the name-based loading scheme is being used, names matching the file
     * header's names may be provided to @a columns_to_load instead of numbers,
     * but ranges are not supported.

     * Returns once all files are processed.
     */
    struct InsertRecordsFromFilesRequest
    {

        /**
         * Constructs an InsertRecordsFromFilesRequest object with default
         * parameter values.
         */
        InsertRecordsFromFilesRequest() :
            tableName(std::string()),
            filepaths(std::vector<std::string>()),
            createTableOptions(std::map<std::string, std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an InsertRecordsFromFilesRequest object with the
         * specified parameters.
         * 
         * @param[in] tableName_  Name of the table into which the data will be
         *                        inserted. If the table does not exist, the
         *                        table will be created using either an
         *                        existing @a type_id or the type inferred from
         *                        the file.
         * @param[in] filepaths_  Absolute or relative filepath(s) from where
         *                        files will be loaded. Relative filepaths are
         *                        relative to the defined <a
         *                        href="../../config/index.html#external-files"
         *                        target="_top">external_files_directory</a>
         *                        parameter in the server configuration. The
         *                        filepaths may include wildcards (*). If the
         *                        first path ends in .tsv, the text delimiter
         *                        will be defaulted to a tab character. If the
         *                        first path ends in .psv, the text delimiter
         *                        will be defaulted to a pipe character (|).
         * @param[in] createTableOptions_  Options used when creating a new
         *                                 table.
         *                                 <ul>
         *                                         <li>
         *                                 gpudb::insert_records_from_files_type_id:
         *                                 ID of a currently registered <a
         *                                 href="../../concepts/types.html"
         *                                 target="_top">type</a>.  The default
         *                                 value is ''.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_no_error_if_exists:
         *                                 If @a true, prevents an error from
         *                                 occurring if the table already
         *                                 exists and is of the given type.  If
         *                                 a table with the same ID but a
         *                                 different type exists, it is still
         *                                 an error.
         *                                 <ul>
         *                                         <li>
         *                                 gpudb::insert_records_from_files_true
         *                                         <li>
         *                                 gpudb::insert_records_from_files_false
         *                                 </ul>
         *                                 The default value is
         *                                 gpudb::insert_records_from_files_false.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_collection_name:
         *                                 Name of a collection which is to
         *                                 contain the newly created table. If
         *                                 the collection provided is
         *                                 non-existent, the collection will be
         *                                 automatically created. If empty,
         *                                 then the newly created table will be
         *                                 a top-level table.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_is_replicated:
         *                                 For a table, affects the <a
         *                                 href="../../concepts/tables.html#distribution"
         *                                 target="_top">distribution
         *                                 scheme</a> for the table's data.  If
         *                                 true and the given type has no
         *                                 explicit <a
         *                                 href="../../concepts/tables.html#shard-key"
         *                                 target="_top">shard key</a> defined,
         *                                 the table will be <a
         *                                 href="../../concepts/tables.html#replication"
         *                                 target="_top">replicated</a>.  If
         *                                 false, the table will be <a
         *                                 href="../../concepts/tables.html#sharding"
         *                                 target="_top">sharded</a> according
         *                                 to the shard key specified in the
         *                                 given @a type_id, or <a
         *                                 href="../../concepts/tables.html#random-sharding"
         *                                 target="_top">randomly sharded</a>,
         *                                 if no shard key is specified.  Note
         *                                 that a type containing a shard key
         *                                 cannot be used to create a
         *                                 replicated table.
         *                                 <ul>
         *                                         <li>
         *                                 gpudb::insert_records_from_files_true
         *                                         <li>
         *                                 gpudb::insert_records_from_files_false
         *                                 </ul>
         *                                 The default value is
         *                                 gpudb::insert_records_from_files_false.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_foreign_keys:
         *                                 Semicolon-separated list of <a
         *                                 href="../../concepts/tables.html#foreign-keys"
         *                                 target="_top">foreign keys</a>, of
         *                                 the format '(source_column_name [,
         *                                 ...]) references
         *                                 target_table_name(primary_key_column_name
         *                                 [, ...]) [as foreign_key_name]'.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_foreign_shard_key:
         *                                 Foreign shard key of the format
         *                                 'source_column references
         *                                 shard_by_column from
         *                                 target_table(primary_key_column)'.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_partition_type:
         *                                 <a
         *                                 href="../../concepts/tables.html#partitioning"
         *                                 target="_top">Partitioning</a>
         *                                 scheme to use.
         *                                 <ul>
         *                                         <li>
         *                                 gpudb::insert_records_from_files_RANGE:
         *                                 Use <a
         *                                 href="../../concepts/tables.html#partitioning-by-range"
         *                                 target="_top">range
         *                                 partitioning</a>.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_INTERVAL:
         *                                 Use <a
         *                                 href="../../concepts/tables.html#partitioning-by-interval"
         *                                 target="_top">interval
         *                                 partitioning</a>.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_LIST:
         *                                 Use <a
         *                                 href="../../concepts/tables.html#partitioning-by-list"
         *                                 target="_top">list partitioning</a>.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_HASH:
         *                                 Use <a
         *                                 href="../../concepts/tables.html#partitioning-by-hash"
         *                                 target="_top">hash partitioning</a>.
         *                                 </ul>
         *                                         <li>
         *                                 gpudb::insert_records_from_files_partition_keys:
         *                                 Comma-separated list of partition
         *                                 keys, which are the columns or
         *                                 column expressions by which records
         *                                 will be assigned to partitions
         *                                 defined by @a partition_definitions.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_partition_definitions:
         *                                 Comma-separated list of partition
         *                                 definitions, whose format depends on
         *                                 the choice of @a partition_type.
         *                                 See <a
         *                                 href="../../concepts/tables.html#partitioning-by-range"
         *                                 target="_top">range
         *                                 partitioning</a>, <a
         *                                 href="../../concepts/tables.html#partitioning-by-interval"
         *                                 target="_top">interval
         *                                 partitioning</a>, <a
         *                                 href="../../concepts/tables.html#partitioning-by-list"
         *                                 target="_top">list partitioning</a>,
         *                                 or <a
         *                                 href="../../concepts/tables.html#partitioning-by-hash"
         *                                 target="_top">hash partitioning</a>
         *                                 for example formats.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_is_automatic_partition:
         *                                 If true, a new partition will be
         *                                 created for values which don't fall
         *                                 into an existing partition.
         *                                 Currently only supported for <a
         *                                 href="../../concepts/tables.html#partitioning-by-list"
         *                                 target="_top">list partitions</a>.
         *                                 <ul>
         *                                         <li>
         *                                 gpudb::insert_records_from_files_true
         *                                         <li>
         *                                 gpudb::insert_records_from_files_false
         *                                 </ul>
         *                                 The default value is
         *                                 gpudb::insert_records_from_files_false.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_ttl:
         *                                 For a table, sets the <a
         *                                 href="../../concepts/ttl.html"
         *                                 target="_top">TTL</a> of the table
         *                                 specified in @a tableName.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_chunk_size:
         *                                 Indicates the number of records per
         *                                 chunk to be used for this table.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_is_result_table:
         *                                 For a table, indicates whether the
         *                                 table is an in-memory table. A
         *                                 result table cannot contain
         *                                 store_only, text_search, or string
         *                                 columns (charN columns are
         *                                 acceptable), and it will not be
         *                                 retained if the server is restarted.
         *                                 <ul>
         *                                         <li>
         *                                 gpudb::insert_records_from_files_true
         *                                         <li>
         *                                 gpudb::insert_records_from_files_false
         *                                 </ul>
         *                                 The default value is
         *                                 gpudb::insert_records_from_files_false.
         *                                         <li>
         *                                 gpudb::insert_records_from_files_strategy_definition:
         *                                 The <a
         *                                 href="../../rm/concepts.html#tier-strategies"
         *                                 target="_top">tier strategy</a> for
         *                                 the table and its columns. See <a
         *                                 href="../../rm/concepts.html#tier-strategies"
         *                                 target="_top">tier strategy
         *                                 usage</a> for format and <a
         *                                 href="../../rm/usage.html#tier-strategies"
         *                                 target="_top">tier strategy
         *                                 examples</a> for examples.
         *                                 </ul>
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::insert_records_from_files_batch_size:
         *                      Specifies number of records to process before
         *                      inserting.
         *                              <li>
         *                      gpudb::insert_records_from_files_column_formats:
         *                      For each target column specified, applies the
         *                      column-property-bound format to the source data
         *                      loaded into that column.  Each column format
         *                      will contain a mapping of one or more of its
         *                      column properties to an appropriate format for
         *                      each property.  Currently supported column
         *                      properties include date, time, & datetime. The
         *                      parameter value must be formatted as a JSON
         *                      string of maps of column names to maps of
         *                      column properties to their corresponding column
         *                      formats, e.g., { "order_date" : { "date" :
         *                      "%Y.%m.%d" }, "order_time" : { "time" :
         *                      "%H:%M:%S" } }.  See @a default_column_formats
         *                      for valid format syntax.
         *                              <li>
         *                      gpudb::insert_records_from_files_columns_to_load:
         *                      For @a delimited_text @a file_type only.
         *                      Specifies a comma-delimited list of column
         *                      positions or names to load instead of loading
         *                      all columns in the file(s); if more than one
         *                      file is being loaded, the list of columns will
         *                      apply to all files. Column numbers can be
         *                      specified discretely or as a range, e.g., a
         *                      value of '5,7,1..3' will create a table with
         *                      the first column in the table being the fifth
         *                      column in the file, followed by seventh column
         *                      in the file, then the first column through the
         *                      fourth column in the file.
         *                              <li>
         *                      gpudb::insert_records_from_files_default_column_formats:
         *                      Specifies the default format to be applied to
         *                      source data loaded into columns with the
         *                      corresponding column property.  This default
         *                      column-property-bound format can be overridden
         *                      by specifying a column property & format for a
         *                      given target column in @a column_formats. For
         *                      each specified annotation, the format will
         *                      apply to all columns with that annotation
         *                      unless a custom @a column_formats for that
         *                      annotation is specified. The parameter value
         *                      must be formatted as a JSON string that is a
         *                      map of column properties to their respective
         *                      column formats, e.g., { "date" : "%Y.%m.%d",
         *                      "time" : "%H:%M:%S" }. Column formats are
         *                      specified as a string of control characters and
         *                      plain text. The supported control characters
         *                      are 'Y', 'm', 'd', 'H', 'M', 'S', and 's',
         *                      which follow the Linux 'strptime()'
         *                      specification, as well as 's', which specifies
         *                      seconds and fractional seconds (though the
         *                      fractional component will be truncated past
         *                      milliseconds). Formats for the 'date'
         *                      annotation must include the 'Y', 'm', and 'd'
         *                      control characters. Formats for the 'time'
         *                      annotation must include the 'H', 'M', and
         *                      either 'S' or 's' (but not both) control
         *                      characters. Formats for the 'datetime'
         *                      annotation meet both the 'date' and 'time'
         *                      control character requirements. For example,
         *                      '{"datetime" : "%m/%d/%Y %H:%M:%S" }' would be
         *                      used to interpret text as "05/04/2000 12:12:11"
         *                              <li>
         *                      gpudb::insert_records_from_files_dry_run: If
         *                      set to @a true, no data will be inserted but
         *                      the file will be read with the applied @a
         *                      error_handling mode and the number of valid
         *                      records that would be normally inserted are
         *                      returned.
         *                      <ul>
         *                              <li>
         *                      gpudb::insert_records_from_files_false
         *                              <li>
         *                      gpudb::insert_records_from_files_true
         *                      </ul>
         *                      The default value is
         *                      gpudb::insert_records_from_files_false.
         *                              <li>
         *                      gpudb::insert_records_from_files_error_handling:
         *                      Specifies how errors should be handled upon
         *                      insertion.
         *                      <ul>
         *                              <li>
         *                      gpudb::insert_records_from_files_permissive:
         *                      Records with missing columns are populated with
         *                      nulls if possible; otherwise, the malformed
         *                      records are skipped.
         *                              <li>
         *                      gpudb::insert_records_from_files_ignore_bad_records:
         *                      Malformed records are skipped.
         *                              <li>
         *                      gpudb::insert_records_from_files_abort: Stops
         *                      current insertion and aborts entire operation
         *                      when an error is encountered.
         *                      </ul>
         *                      The default value is
         *                      gpudb::insert_records_from_files_Permissive.
         *                              <li>
         *                      gpudb::insert_records_from_files_file_type:
         *                      File type for the file(s).
         *                      <ul>
         *                              <li>
         *                      gpudb::insert_records_from_files_delimited_text:
         *                      Indicates the file(s) are in delimited text
         *                      format, e.g., CSV, TSV, PSV, etc.
         *                      </ul>
         *                      The default value is
         *                      gpudb::insert_records_from_files_delimited_text.
         *                              <li>
         *                      gpudb::insert_records_from_files_loading_mode:
         *                      Specifies how to divide data loading among
         *                      nodes.
         *                      <ul>
         *                              <li>
         *                      gpudb::insert_records_from_files_head: The head
         *                      node loads all data. All files must be
         *                      available on the head node.
         *                              <li>
         *                      gpudb::insert_records_from_files_distributed_shared:
         *                      The worker nodes coordinate loading a set of
         *                      files that are available to all of them. All
         *                      files must be available on all nodes. This
         *                      option is best when there is a shared file
         *                      system.
         *                              <li>
         *                      gpudb::insert_records_from_files_distributed_local:
         *                      Each worker node loads all files that are
         *                      available to it. This option is best when each
         *                      worker node has its own file system.
         *                      </ul>
         *                      The default value is
         *                      gpudb::insert_records_from_files_head.
         *                              <li>
         *                      gpudb::insert_records_from_files_text_comment_string:
         *                      For @a delimited_text @a file_type only. All
         *                      lines in the file(s) starting with the provided
         *                      string are ignored. The comment string has no
         *                      effect unless it appears at the beginning of a
         *                      line.  The default value is '#'.
         *                              <li>
         *                      gpudb::insert_records_from_files_text_delimiter:
         *                      For @a delimited_text @a file_type only.
         *                      Specifies the delimiter for values and columns
         *                      in the header row (if present). Must be a
         *                      single character.  The default value is ','.
         *                              <li>
         *                      gpudb::insert_records_from_files_text_escape_character:
         *                      For @a delimited_text @a file_type only.  The
         *                      character used in the file(s) to escape certain
         *                      character sequences in text. For example, the
         *                      escape character followed by a literal 'n'
         *                      escapes to a newline character within the
         *                      field. Can be used within quoted string to
         *                      escape a quote character. An empty value for
         *                      this option does not specify an escape
         *                      character.
         *                              <li>
         *                      gpudb::insert_records_from_files_text_has_header:
         *                      For @a delimited_text @a file_type only.
         *                      Indicates whether the delimited text files have
         *                      a header row.
         *                      <ul>
         *                              <li>
         *                      gpudb::insert_records_from_files_true
         *                              <li>
         *                      gpudb::insert_records_from_files_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::insert_records_from_files_true.
         *                              <li>
         *                      gpudb::insert_records_from_files_text_header_property_delimiter:
         *                      For @a delimited_text @a file_type only.
         *                      Specifies the delimiter for column properties
         *                      in the header row (if present). Cannot be set
         *                      to same value as text_delimiter.  The default
         *                      value is '|'.
         *                              <li>
         *                      gpudb::insert_records_from_files_text_null_string:
         *                      For @a delimited_text @a file_type only. The
         *                      value in the file(s) to treat as a null value
         *                      in the database.  The default value is ''.
         *                              <li>
         *                      gpudb::insert_records_from_files_text_quote_character:
         *                      For @a delimited_text @a file_type only. The
         *                      quote character used in the file(s), typically
         *                      encompassing a field value. The character must
         *                      appear at beginning and end of field to take
         *                      effect. Delimiters within quoted fields are not
         *                      treated as delimiters. Within a quoted field,
         *                      double quotes (") can be used to escape a
         *                      single literal quote character. To not have a
         *                      quote character, specify an empty string ("").
         *                      The default value is '"'.
         *                              <li>
         *                      gpudb::insert_records_from_files_truncate_table:
         *                      If set to @a true, truncates the table
         *                      specified by @a tableName prior to loading the
         *                      file(s).
         *                      <ul>
         *                              <li>
         *                      gpudb::insert_records_from_files_true
         *                              <li>
         *                      gpudb::insert_records_from_files_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::insert_records_from_files_false.
         *                      </ul>
         * 
         */
        InsertRecordsFromFilesRequest(const std::string& tableName_, const std::vector<std::string>& filepaths_, const std::map<std::string, std::string>& createTableOptions_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            filepaths( filepaths_ ),
            createTableOptions( createTableOptions_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::vector<std::string> filepaths;
        std::map<std::string, std::string> createTableOptions;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::InsertRecordsFromFilesRequest>
    {
        static void encode(Encoder& e, const gpudb::InsertRecordsFromFilesRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.filepaths);
            ::avro::encode(e, v.createTableOptions);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::InsertRecordsFromFilesRequest& v)
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
                            ::avro::decode(d, v.filepaths);
                            break;

                        case 2:
                            ::avro::decode(d, v.createTableOptions);
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
                ::avro::decode(d, v.filepaths);
                ::avro::decode(d, v.createTableOptions);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #insertRecordsFromFiles(const InsertRecordsFromFilesRequest&) const}.
     * <p>
     * Reads from one or more files located on the server and inserts the data
     * into a new or existing table.
     * <p>
     * For CSV files, there are two loading schemes: positional and name-based.
     * The name-based loading scheme is enabled when the file has a header
     * present and @a text_has_header is set to @a true. In this scheme, the
     * source file(s) field names must match the target table's column names
     * exactly; however, the source file can have more fields than the target
     * table has columns. If @a error_handling is set to @a permissive, the
     * source file can have fewer fields than the target table has columns. If
     * the name-based loading scheme is being used, names matching the file
     * header's names may be provided to @a columns_to_load instead of numbers,
     * but ranges are not supported.

     * Returns once all files are processed.
     */
    struct InsertRecordsFromFilesResponse
    {

        /**
         * Constructs an InsertRecordsFromFilesResponse object with default
         * parameter values.
         */
        InsertRecordsFromFilesResponse() :
            tableName(std::string()),
            typeId(std::string()),
            countInserted(int64_t()),
            countSkipped(int64_t()),
            countUpdated(int64_t()),
            info(std::map<std::string, std::string>())
        {
        }

        std::string tableName;
        std::string typeId;
        int64_t countInserted;
        int64_t countSkipped;
        int64_t countUpdated;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::InsertRecordsFromFilesResponse>
    {
        static void encode(Encoder& e, const gpudb::InsertRecordsFromFilesResponse& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.typeId);
            ::avro::encode(e, v.countInserted);
            ::avro::encode(e, v.countSkipped);
            ::avro::encode(e, v.countUpdated);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::InsertRecordsFromFilesResponse& v)
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
                            ::avro::decode(d, v.countInserted);
                            break;

                        case 3:
                            ::avro::decode(d, v.countSkipped);
                            break;

                        case 4:
                            ::avro::decode(d, v.countUpdated);
                            break;

                        case 5:
                            ::avro::decode(d, v.info);
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
                ::avro::decode(d, v.countInserted);
                ::avro::decode(d, v.countSkipped);
                ::avro::decode(d, v.countUpdated);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
