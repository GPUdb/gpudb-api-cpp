/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __GET_RECORDS_FROM_COLLECTION_H__
#define __GET_RECORDS_FROM_COLLECTION_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #getRecordsFromCollectionRaw(const GetRecordsFromCollectionRequest&) const}.
     * <p>
     * Retrieves records from a collection. The operation can optionally return
     * the record IDs which can be used in certain queries such as {@link
     * #deleteRecords(const DeleteRecordsRequest&) const}.
     * <p>
     * This operation supports paging through the data via the @a offset and @a
     * limit parameters.
     * <p>
     * Note that when using the Java API, it is not possible to retrieve
     * records from join tables using this operation.
     */
    struct GetRecordsFromCollectionRequest
    {

        /**
         * Constructs a GetRecordsFromCollectionRequest object with default
         * parameter values.
         */
        GetRecordsFromCollectionRequest() :
            tableName(std::string()),
            offset(int64_t()),
            limit(int64_t()),
            encoding(std::string("binary")),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a GetRecordsFromCollectionRequest object with the
         * specified parameters.
         * 
         * @param[in] tableName_  Name of the collection or table from which
         *                        records are to be retrieved. Must be an
         *                        existing collection or table.
         * @param[in] offset_  A positive integer indicating the number of
         *                     initial results to skip (this can be useful for
         *                     paging through the results).  The minimum
         *                     allowed value is 0. The maximum allowed value is
         *                     MAX_INT.
         * @param[in] limit_  A positive integer indicating the maximum number
         *                    of results to be returned, or END_OF_SET (-9999)
         *                    to indicate that the max number of results should
         *                    be returned.
         * @param[in] options_
         *                      <ul>
         *                              <li>
         *                      gpudb::get_records_from_collection_return_record_ids:
         *                      If 'true' then return the internal record ID
         *                      along with each returned record. Default is
         *                      'false'.
         *                      <ul>
         *                              <li>
         *                      gpudb::get_records_from_collection_true
         *                              <li>
         *                      gpudb::get_records_from_collection_false
         *                      </ul>
         *                      </ul>
         * 
         */
        GetRecordsFromCollectionRequest(const std::string& tableName_, const int64_t offset_, const int64_t limit_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            offset( offset_ ),
            limit( limit_ ),
            encoding( "binary" ),
            options( options_ )
        {
        }

        /**
         * Constructs a GetRecordsFromCollectionRequest object with the
         * specified parameters.
         * 
         * @param[in] tableName_  Name of the collection or table from which
         *                        records are to be retrieved. Must be an
         *                        existing collection or table.
         * @param[in] offset_  A positive integer indicating the number of
         *                     initial results to skip (this can be useful for
         *                     paging through the results).  The minimum
         *                     allowed value is 0. The maximum allowed value is
         *                     MAX_INT.
         * @param[in] limit_  A positive integer indicating the maximum number
         *                    of results to be returned, or END_OF_SET (-9999)
         *                    to indicate that the max number of results should
         *                    be returned.
         * @param[in] encoding_  Specifies the encoding for returned records;
         *                       either 'binary' or 'json'.
         *                       <ul>
         *                               <li>
         *                       gpudb::get_records_from_collection_binary
         *                               <li>
         *                       gpudb::get_records_from_collection_json
         *                       </ul>
         * @param[in] options_
         *                      <ul>
         *                              <li>
         *                      gpudb::get_records_from_collection_return_record_ids:
         *                      If 'true' then return the internal record ID
         *                      along with each returned record. Default is
         *                      'false'.
         *                      <ul>
         *                              <li>
         *                      gpudb::get_records_from_collection_true
         *                              <li>
         *                      gpudb::get_records_from_collection_false
         *                      </ul>
         *                      </ul>
         * 
         */
        GetRecordsFromCollectionRequest(const std::string& tableName_, const int64_t offset_, const int64_t limit_, const std::string& encoding_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            offset( offset_ ),
            limit( limit_ ),
            encoding( encoding_ ),
            options( options_ )
        {
        }

        std::string tableName;
        int64_t offset;
        int64_t limit;
        std::string encoding;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::GetRecordsFromCollectionRequest>
    {
        static void encode(Encoder& e, const gpudb::GetRecordsFromCollectionRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.offset);
            ::avro::encode(e, v.limit);
            ::avro::encode(e, v.encoding);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::GetRecordsFromCollectionRequest& v)
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
                            ::avro::decode(d, v.offset);
                            break;

                        case 2:
                            ::avro::decode(d, v.limit);
                            break;

                        case 3:
                            ::avro::decode(d, v.encoding);
                            break;

                        case 4:
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
     * #getRecordsFromCollectionRaw(const GetRecordsFromCollectionRequest&) const}.
     * <p>
     * Retrieves records from a collection. The operation can optionally return
     * the record IDs which can be used in certain queries such as {@link
     * #deleteRecords(const DeleteRecordsRequest&) const}.
     * <p>
     * This operation supports paging through the data via the @a offset and @a
     * limit parameters.
     * <p>
     * Note that when using the Java API, it is not possible to retrieve
     * records from join tables using this operation.
     */
    struct RawGetRecordsFromCollectionResponse
    {

        /**
         * Constructs a RawGetRecordsFromCollectionResponse object with default
         * parameter values.
         */
        RawGetRecordsFromCollectionResponse() :
            tableName(std::string()),
            typeNames(std::vector<std::string>()),
            recordsBinary(std::vector<std::vector<uint8_t> >()),
            recordsJson(std::vector<std::string>()),
            recordIds(std::vector<std::string>())
        {
        }

        std::string tableName;
        std::vector<std::string> typeNames;
        std::vector<std::vector<uint8_t> > recordsBinary;
        std::vector<std::string> recordsJson;
        std::vector<std::string> recordIds;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::RawGetRecordsFromCollectionResponse>
    {
        static void encode(Encoder& e, const gpudb::RawGetRecordsFromCollectionResponse& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.typeNames);
            ::avro::encode(e, v.recordsBinary);
            ::avro::encode(e, v.recordsJson);
            ::avro::encode(e, v.recordIds);
        }

        static void decode(Decoder& d, gpudb::RawGetRecordsFromCollectionResponse& v)
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
                            ::avro::decode(d, v.typeNames);
                            break;

                        case 2:
                            ::avro::decode(d, v.recordsBinary);
                            break;

                        case 3:
                            ::avro::decode(d, v.recordsJson);
                            break;

                        case 4:
                            ::avro::decode(d, v.recordIds);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.typeNames);
                ::avro::decode(d, v.recordsBinary);
                ::avro::decode(d, v.recordsJson);
                ::avro::decode(d, v.recordIds);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #getRecordsFromCollection(const GetRecordsFromCollectionRequest&) const}.
     * <p>
     * Retrieves records from a collection. The operation can optionally return
     * the record IDs which can be used in certain queries such as {@link
     * #deleteRecords(const DeleteRecordsRequest&) const}.
     * <p>
     * This operation supports paging through the data via the @a offset and @a
     * limit parameters.
     * <p>
     * Note that when using the Java API, it is not possible to retrieve
     * records from join tables using this operation.
     * 
     * @param <T>  The type of object being processed.
     * 
     */
    template<typename T> struct GetRecordsFromCollectionResponse
    {

        /**
         * Constructs a GetRecordsFromCollectionResponse object with default
         * parameter values.
         */
        GetRecordsFromCollectionResponse() :
            tableName(std::string()),
            typeNames(std::vector<std::string>()),
            data(std::vector<T>()),
            recordIds(std::vector<std::string>())
        {
        }

        std::string tableName;
        std::vector<std::string> typeNames;
        std::vector<T> data;
        std::vector<std::string> recordIds;
    };
}

#endif
