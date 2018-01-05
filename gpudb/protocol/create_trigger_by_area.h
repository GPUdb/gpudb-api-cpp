/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __CREATE_TRIGGER_BY_AREA_H__
#define __CREATE_TRIGGER_BY_AREA_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #createTriggerByArea(const CreateTriggerByAreaRequest&) const}.
     * <p>
     * Sets up an area trigger mechanism for two column_names for one or more
     * tables. (This function is essentially the two-dimensional version of
     * {@link
     * #createTriggerByRange(const CreateTriggerByRangeRequest&) const}.)
     * Once the trigger has been activated, any record added to the listed
     * tables(s) via {@link
     * #insertRecordsRaw(const RawInsertRecordsRequest&) const} with the
     * chosen columns' values falling within the specified region will trip the
     * trigger. All such records will be queued at the trigger port (by default
     * '9001' but able to be retrieved via {@link
     * #showSystemStatus(const ShowSystemStatusRequest&) const}) for any
     * listening client to collect. Active triggers can be cancelled by using
     * the {@link #clearTrigger(const ClearTriggerRequest&) const} endpoint
     * or by clearing all relevant tables.
     * <p>
     * The output returns the trigger handle as well as indicating success or
     * failure of the trigger activation.
     */
    struct CreateTriggerByAreaRequest
    {

        /**
         * Constructs a CreateTriggerByAreaRequest object with default
         * parameter values.
         */
        CreateTriggerByAreaRequest() :
            requestId(std::string()),
            tableNames(std::vector<std::string>()),
            xColumnName(std::string()),
            xVector(std::vector<double>()),
            yColumnName(std::string()),
            yVector(std::vector<double>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a CreateTriggerByAreaRequest object with the specified
         * parameters.
         * 
         * @param[in] requestId_  User-created ID for the trigger. The ID can
         *                        be alphanumeric, contain symbols, and must
         *                        contain at least one character.
         * @param[in] tableNames_  Names of the tables on which the trigger
         *                         will be activated and maintained.
         * @param[in] xColumnName_  Name of a numeric column on which the
         *                          trigger is activated. Usually 'x' for
         *                          geospatial data points.
         * @param[in] xVector_  The respective coordinate values for the region
         *                      on which the trigger is activated. This usually
         *                      translates to the x-coordinates of a geospatial
         *                      region.
         * @param[in] yColumnName_  Name of a second numeric column on which
         *                          the trigger is activated. Usually 'y' for
         *                          geospatial data points.
         * @param[in] yVector_  The respective coordinate values for the region
         *                      on which the trigger is activated. This usually
         *                      translates to the y-coordinates of a geospatial
         *                      region. Must be the same length as xvals.
         * @param[in] options_  Optional parameters.
         * 
         */
        CreateTriggerByAreaRequest(const std::string& requestId_, const std::vector<std::string>& tableNames_, const std::string& xColumnName_, const std::vector<double>& xVector_, const std::string& yColumnName_, const std::vector<double>& yVector_, const std::map<std::string, std::string>& options_):
            requestId( requestId_ ),
            tableNames( tableNames_ ),
            xColumnName( xColumnName_ ),
            xVector( xVector_ ),
            yColumnName( yColumnName_ ),
            yVector( yVector_ ),
            options( options_ )
        {
        }

        std::string requestId;
        std::vector<std::string> tableNames;
        std::string xColumnName;
        std::vector<double> xVector;
        std::string yColumnName;
        std::vector<double> yVector;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateTriggerByAreaRequest>
    {
        static void encode(Encoder& e, const gpudb::CreateTriggerByAreaRequest& v)
        {
            ::avro::encode(e, v.requestId);
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.xColumnName);
            ::avro::encode(e, v.xVector);
            ::avro::encode(e, v.yColumnName);
            ::avro::encode(e, v.yVector);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::CreateTriggerByAreaRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.requestId);
                            break;

                        case 1:
                            ::avro::decode(d, v.tableNames);
                            break;

                        case 2:
                            ::avro::decode(d, v.xColumnName);
                            break;

                        case 3:
                            ::avro::decode(d, v.xVector);
                            break;

                        case 4:
                            ::avro::decode(d, v.yColumnName);
                            break;

                        case 5:
                            ::avro::decode(d, v.yVector);
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
                ::avro::decode(d, v.requestId);
                ::avro::decode(d, v.tableNames);
                ::avro::decode(d, v.xColumnName);
                ::avro::decode(d, v.xVector);
                ::avro::decode(d, v.yColumnName);
                ::avro::decode(d, v.yVector);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #createTriggerByArea(const CreateTriggerByAreaRequest&) const}.
     * <p>
     * Sets up an area trigger mechanism for two column_names for one or more
     * tables. (This function is essentially the two-dimensional version of
     * {@link
     * #createTriggerByRange(const CreateTriggerByRangeRequest&) const}.)
     * Once the trigger has been activated, any record added to the listed
     * tables(s) via {@link
     * #insertRecordsRaw(const RawInsertRecordsRequest&) const} with the
     * chosen columns' values falling within the specified region will trip the
     * trigger. All such records will be queued at the trigger port (by default
     * '9001' but able to be retrieved via {@link
     * #showSystemStatus(const ShowSystemStatusRequest&) const}) for any
     * listening client to collect. Active triggers can be cancelled by using
     * the {@link #clearTrigger(const ClearTriggerRequest&) const} endpoint
     * or by clearing all relevant tables.
     * <p>
     * The output returns the trigger handle as well as indicating success or
     * failure of the trigger activation.
     */
    struct CreateTriggerByAreaResponse
    {

        /**
         * Constructs a CreateTriggerByAreaResponse object with default
         * parameter values.
         */
        CreateTriggerByAreaResponse() :
            triggerId(std::string())
        {
        }

        std::string triggerId;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateTriggerByAreaResponse>
    {
        static void encode(Encoder& e, const gpudb::CreateTriggerByAreaResponse& v)
        {
            ::avro::encode(e, v.triggerId);
        }

        static void decode(Decoder& d, gpudb::CreateTriggerByAreaResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.triggerId);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.triggerId);
            }
        }
    };
}

#endif
