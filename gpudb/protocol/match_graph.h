/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __MATCH_GRAPH_H__
#define __MATCH_GRAPH_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #matchGraph(const MatchGraphRequest&) const}.
     * <p>
     * Matches measured lon/lat points to an underlying graph network.
     */
    struct MatchGraphRequest
    {

        /**
         * Constructs a MatchGraphRequest object with default parameter values.
         */
        MatchGraphRequest() :
            graphName(std::string()),
            samplePoints(std::vector<std::string>()),
            solveMethod(std::string()),
            solutionTable(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a MatchGraphRequest object with the specified parameters.
         * 
         * @param[in] graphName_  Name of the underlying graph network.
         * @param[in] samplePoints_  ['Table.column AS node_identifier',
         *                           'Table.column AS SAMPLE_TIME' ]; e.g.,
         *                           't1.wkt' AS 'SAMPLE_WKTPOINT', t1.t' AS
         *                           'SAMPLE_TIME'
         * @param[in] solveMethod_  Solver used for mapmatching.
         *                          <ul>
         *                                  <li>
         *                          gpudb::match_graph_markov_chain: Hidden
         *                          Markov Model (HMM) based method.
         *                                  <li>
         *                          gpudb::match_graph_incremental_weighted:
         *                          Uses time and/or distance to influence one
         *                          or more shortest paths along the sample
         *                          points.
         *                          </ul>
         *                          The default value is
         *                          gpudb::match_graph_incremental_weighted.
         * @param[in] solutionTable_  Name of the table to store the solution.
         *                            Error if table already exists.
         * @param[in] options_  Additional parameters
         *                      <ul>
         *                              <li> gpudb::match_graph_gps_noise: GPS
         *                      noise value - in meters - to remove redundant
         *                      samplespoints (95th percentile). -1 to disable.
         *                      The default value is '5.0'.
         *                              <li> gpudb::match_graph_num_segments:
         *                      Number of potentially matching road segments
         *                      for each sample point. (Defaults to 3 for
         *                      'markov_chain' and 5 for
         *                      'incremental_weighted').  The default value is
         *                      '0'.
         *                              <li> gpudb::match_graph_search_radius:
         *                      Maximum search radius used when snapping
         *                      samples points onto potentially matching road
         *                      segments. This corresponds to approximately
         *                      100m when using geodesic coordinates.  The
         *                      default value is '0.001'.
         *                              <li> gpudb::match_graph_chain_width:
         *                      Only applicable if method is 'markov_chain'.
         *                      Length of the sample points window within the
         *                      Markov kernel.  The default value is '9'.
         *                              <li>
         *                      gpudb::match_graph_max_solve_length: Only
         *                      applicable if method is 'incremental_weighted'.
         *                      Maximum number of samples along the path to
         *                      solve on.  The default value is '200'.
         *                              <li>
         *                      gpudb::match_graph_time_window_width: Only
         *                      applicable if method is 'incremental_weighted'.
         *                      Time window in which sample points are favored
         *                      (dt of 1 is the most attractive).  The default
         *                      value is '30'.
         *                              <li> gpudb::match_graph_detect_loops:
         *                      Only applicable if method is
         *                      'incremental_weighted'. If true, add a break
         *                      point within any loop.  The default value is
         *                      'true'.
         *                              <li> gpudb::match_graph_source:
         *                      Optional WKT point on the trace; otherwise the
         *                      beginning (in time) is taken as the source.
         *                      The default value is 'POINT NULL'.
         *                              <li> gpudb::match_graph_destination:
         *                      Optional WKT point on the trace; otherwise the
         *                      end (in time) is taken as the destination.  The
         *                      default value is 'POINT NULL'.
         *                      </ul>
         * 
         */
        MatchGraphRequest(const std::string& graphName_, const std::vector<std::string>& samplePoints_, const std::string& solveMethod_, const std::string& solutionTable_, const std::map<std::string, std::string>& options_):
            graphName( graphName_ ),
            samplePoints( samplePoints_ ),
            solveMethod( solveMethod_ ),
            solutionTable( solutionTable_ ),
            options( options_ )
        {
        }

        std::string graphName;
        std::vector<std::string> samplePoints;
        std::string solveMethod;
        std::string solutionTable;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::MatchGraphRequest>
    {
        static void encode(Encoder& e, const gpudb::MatchGraphRequest& v)
        {
            ::avro::encode(e, v.graphName);
            ::avro::encode(e, v.samplePoints);
            ::avro::encode(e, v.solveMethod);
            ::avro::encode(e, v.solutionTable);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::MatchGraphRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.graphName);
                            break;

                        case 1:
                            ::avro::decode(d, v.samplePoints);
                            break;

                        case 2:
                            ::avro::decode(d, v.solveMethod);
                            break;

                        case 3:
                            ::avro::decode(d, v.solutionTable);
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
                ::avro::decode(d, v.graphName);
                ::avro::decode(d, v.samplePoints);
                ::avro::decode(d, v.solveMethod);
                ::avro::decode(d, v.solutionTable);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #matchGraph(const MatchGraphRequest&) const}.
     * <p>
     * Matches measured lon/lat points to an underlying graph network.
     */
    struct MatchGraphResponse
    {

        /**
         * Constructs a MatchGraphResponse object with default parameter
         * values.
         */
        MatchGraphResponse() :
            result(bool()),
            matchScore(float()),
            info(std::map<std::string, std::string>())
        {
        }

        bool result;
        float matchScore;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::MatchGraphResponse>
    {
        static void encode(Encoder& e, const gpudb::MatchGraphResponse& v)
        {
            ::avro::encode(e, v.result);
            ::avro::encode(e, v.matchScore);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::MatchGraphResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.result);
                            break;

                        case 1:
                            ::avro::decode(d, v.matchScore);
                            break;

                        case 2:
                            ::avro::decode(d, v.info);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.result);
                ::avro::decode(d, v.matchScore);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif