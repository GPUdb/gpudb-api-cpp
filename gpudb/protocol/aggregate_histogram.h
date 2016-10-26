/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __AGGREGATE_HISTOGRAM_H__
#define __AGGREGATE_HISTOGRAM_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #aggregateHistogram(const AggregateHistogramRequest&) const}.
     * <p>
     * Performs a histogram calculation given a table, a column, and an
     * interval function. The @a interval is used to produce bins of that size
     * and the result, computed over the records falling within each bin, is
     * returned.  For each bin, the start value is inclusive, but the end value
     * is exclusive--except for the very last bin for which the end value is
     * also inclusive.  The value returned for each bin is the number of
     * records in it, except when a column name is provided as a *value_column*
     * in @a options.  In this latter case the sum of the values corresponding
     * to the *value_column* is used as the result instead.
     */
    struct AggregateHistogramRequest
    {

        /**
         * Constructs an AggregateHistogramRequest object with default
         * parameter values.
         */
        AggregateHistogramRequest() :
            tableName(std::string()),
            columnName(std::string()),
            start(double()),
            end(double()),
            interval(double()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AggregateHistogramRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName  Name of the table on which the operation will
         *                       be performed. Must be a valid table or
         *                       collection in GPUdb.
         * @param[in] columnName  Name of a column or an expression of one or
         *                        more column names over which the histogram
         *                        will be calculated.
         * @param[in] start  Lower end value of the histogram interval,
         *                   inclusive.
         * @param[in] end  Upper end value of the histogram interval,
         *                 inclusive.
         * @param[in] interval  The size of each bin within the start and end
         *                      parameters.
         * @param[in] options  Optional parameters.
         *                     <ul>
         *                             <li> value_column: The name of the
         *                     column GPUdb will use when calculating the bin
         *                     values (values are summed).  The column must be
         *                     a numerical type (int, double, long, float).
         *                     </ul>
         *                       Default value is an empty std::map.
         * 
         */
        AggregateHistogramRequest(const std::string& tableName, const std::string& columnName, const double start, const double end, const double interval, const std::map<std::string, std::string>& options):
            tableName(tableName),
            columnName(columnName),
            start(start),
            end(end),
            interval(interval),
            options(options)
        {
        }

        std::string tableName;
        std::string columnName;
        double start;
        double end;
        double interval;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AggregateHistogramRequest>
    {
        static void encode(Encoder& e, const gpudb::AggregateHistogramRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.columnName);
            ::avro::encode(e, v.start);
            ::avro::encode(e, v.end);
            ::avro::encode(e, v.interval);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AggregateHistogramRequest& v)
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
                            ::avro::decode(d, v.start);
                            break;

                        case 3:
                            ::avro::decode(d, v.end);
                            break;

                        case 4:
                            ::avro::decode(d, v.interval);
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
                ::avro::decode(d, v.start);
                ::avro::decode(d, v.end);
                ::avro::decode(d, v.interval);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #aggregateHistogram(const AggregateHistogramRequest&) const}.
     * <p>
     * Performs a histogram calculation given a table, a column, and an
     * interval function. The @a interval is used to produce bins of that size
     * and the result, computed over the records falling within each bin, is
     * returned.  For each bin, the start value is inclusive, but the end value
     * is exclusive--except for the very last bin for which the end value is
     * also inclusive.  The value returned for each bin is the number of
     * records in it, except when a column name is provided as a *value_column*
     * in @a options.  In this latter case the sum of the values corresponding
     * to the *value_column* is used as the result instead.
     */
    struct AggregateHistogramResponse
    {

        /**
         * Constructs an AggregateHistogramResponse object with default
         * parameter values.
         */
        AggregateHistogramResponse() :
            counts(std::vector<double>()),
            start(double()),
            end(double())
        {
        }

        std::vector<double> counts;
        double start;
        double end;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AggregateHistogramResponse>
    {
        static void encode(Encoder& e, const gpudb::AggregateHistogramResponse& v)
        {
            ::avro::encode(e, v.counts);
            ::avro::encode(e, v.start);
            ::avro::encode(e, v.end);
        }

        static void decode(Decoder& d, gpudb::AggregateHistogramResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.counts);
                            break;

                        case 1:
                            ::avro::decode(d, v.start);
                            break;

                        case 2:
                            ::avro::decode(d, v.end);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.counts);
                ::avro::decode(d, v.start);
                ::avro::decode(d, v.end);
            }
        }
    };
}

#endif
