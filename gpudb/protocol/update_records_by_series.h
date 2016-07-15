/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __UPDATE_RECORDS_BY_SERIES_H__
#define __UPDATE_RECORDS_BY_SERIES_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #updateRecordsBySeries(const UpdateRecordsBySeriesRequest&) const}.
     * <p>
     * Updates the view specified by @a tableName to include full series
     * (track) information from the @a worldTableName for the series (tracks)
     * present in the @a viewName.
     */
    struct UpdateRecordsBySeriesRequest
    {

        /**
         * Constructs an UpdateRecordsBySeriesRequest object with default
         * parameter values.
         */
        UpdateRecordsBySeriesRequest() :
            tableName(std::string()),
            worldTableName(std::string()),
            viewName(std::string()),
            reserved(std::vector<std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an UpdateRecordsBySeriesRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName  Name of the view on which the update operation
         *                       will be performed. Must be a valid view in
         *                       GPUdb.
         * @param[in] worldTableName  Name of the table containing the complete
         *                            series (track) information.
         * @param[in] viewName  Optional name of the view containing the series
         *                      (tracks) which have to be updated.  Default
         *                      value is an empty string.
         * @param[in] reserved  Default value is an empty std::vector.
         * @param[in] options  Optional parameters.  Default value is an empty
         *                     std::map.
         * 
         */
        UpdateRecordsBySeriesRequest(const std::string& tableName, const std::string& worldTableName, const std::string& viewName, const std::vector<std::string>& reserved, const std::map<std::string, std::string>& options):
            tableName(tableName),
            worldTableName(worldTableName),
            viewName(viewName),
            reserved(reserved),
            options(options)
        {
        }

        std::string tableName;
        std::string worldTableName;
        std::string viewName;
        std::vector<std::string> reserved;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::UpdateRecordsBySeriesRequest>
    {
        static void encode(Encoder& e, const gpudb::UpdateRecordsBySeriesRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.worldTableName);
            ::avro::encode(e, v.viewName);
            ::avro::encode(e, v.reserved);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::UpdateRecordsBySeriesRequest& v)
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
                            ::avro::decode(d, v.worldTableName);
                            break;

                        case 2:
                            ::avro::decode(d, v.viewName);
                            break;

                        case 3:
                            ::avro::decode(d, v.reserved);
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
                ::avro::decode(d, v.worldTableName);
                ::avro::decode(d, v.viewName);
                ::avro::decode(d, v.reserved);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #updateRecordsBySeries(const UpdateRecordsBySeriesRequest&) const}.
     * <p>
     * Updates the view specified by @a tableName to include full series
     * (track) information from the @a worldTableName for the series (tracks)
     * present in the @a viewName.
     */
    struct UpdateRecordsBySeriesResponse
    {

        /**
         * Constructs an UpdateRecordsBySeriesResponse object with default
         * parameter values.
         */
        UpdateRecordsBySeriesResponse() :
            count(int32_t())
        {
        }

        int32_t count;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::UpdateRecordsBySeriesResponse>
    {
        static void encode(Encoder& e, const gpudb::UpdateRecordsBySeriesResponse& v)
        {
            ::avro::encode(e, v.count);
        }

        static void decode(Decoder& d, gpudb::UpdateRecordsBySeriesResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.count);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.count);
            }
        }
    };
}

#endif