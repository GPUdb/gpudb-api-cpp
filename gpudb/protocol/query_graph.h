/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __QUERY_GRAPH_H__
#define __QUERY_GRAPH_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #queryGraph(const QueryGraphRequest&) const}.
     * <p>
     * Employs a topological query on a network graph generated a-priori by
     * {@link #createGraph(const CreateGraphRequest&) const}. See <a
     * href="../../graph_solver/network_graph_solver.html"
     * target="_top">Network Graph Solvers</a> for more information.
     */
    struct QueryGraphRequest
    {

        /**
         * Constructs a QueryGraphRequest object with default parameter values.
         */
        QueryGraphRequest() :
            graphName(std::string()),
            queries(std::vector<std::string>()),
            edgeToNode(bool()),
            edgeOrNodeIntIds(std::vector<int64_t>()),
            edgeOrNodeStringIds(std::vector<std::string>()),
            edgeOrNodeWktIds(std::vector<std::string>()),
            adjacencyTable(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a QueryGraphRequest object with the specified parameters.
         * 
         * @param[in] graphName_  Name of the graph resource to query.
         * @param[in] queries_  ['Schema.collection.table.column',
         *                      'node_identifier', ... ]; e.g.,
         *                      ['graph_nodes.id AS QUERY_NODE_ID'] It appends
         *                      to the respective arrays below. QUERY
         *                      identifier overrides edge_to_node parameter.
         * @param[in] edgeToNode_  If set to @a true, the query gives the
         *                         adjacency list from edge(s) to node(s);
         *                         otherwise, the adjacency list is from
         *                         node(s) to edge(s).
         *                         <ul>
         *                                 <li> gpudb::query_graph_true
         *                                 <li> gpudb::query_graph_false
         *                         </ul>
         *                         The default value is
         *                         gpudb::query_graph_true.
         * @param[in] edgeOrNodeIntIds_  The unique list of edge or node
         *                               integer identifiers that will be
         *                               queried for adjacencies.
         * @param[in] edgeOrNodeStringIds_  The unique list of edge or node
         *                                  string identifiers that will be
         *                                  queried for adjacencies.
         * @param[in] edgeOrNodeWktIds_  The unique list of edge or node
         *                               WKTPOINT or WKTLINE string identifiers
         *                               that will be queried for adjacencies.
         * @param[in] adjacencyTable_  Name of the table to store the resulting
         *                             adjacencies. If left blank, the query
         *                             results are instead returned in the
         *                             response even if @a export_query_results
         *                             is set to @a false.
         * @param[in] options_  Additional parameters
         *                      <ul>
         *                              <li>
         *                      gpudb::query_graph_number_of_rings: Sets the
         *                      number of rings of edges around the node to
         *                      query for adjacency, with '1' being the edges
         *                      directly attached to the queried nodes. This
         *                      setting is ignored if @a edgeToNode is set to
         *                      @a true.
         *                              <li>
         *                      gpudb::query_graph_include_all_edges: Includes
         *                      only the edges directed out of the node for the
         *                      query if set to @a false. If set to @a true,
         *                      all edges are queried.
         *                      <ul>
         *                              <li> gpudb::query_graph_true
         *                              <li> gpudb::query_graph_false
         *                      </ul>
         *                      The default value is gpudb::query_graph_false.
         *                              <li>
         *                      gpudb::query_graph_export_query_results:
         *                      Returns query results in the response if set to
         *                      @a true.
         *                      <ul>
         *                              <li> gpudb::query_graph_true
         *                              <li> gpudb::query_graph_false
         *                      </ul>
         *                      The default value is gpudb::query_graph_true.
         *                              <li>
         *                      gpudb::query_graph_enable_graph_draw: If set to
         *                      @a true, adds an 'EDGE_WKTLINE' column
         *                      identifier to the given @a adjacencyTable.
         *                      <ul>
         *                              <li> gpudb::query_graph_true
         *                              <li> gpudb::query_graph_false
         *                      </ul>
         *                      The default value is gpudb::query_graph_false.
         *                      </ul>
         * 
         */
        QueryGraphRequest(const std::string& graphName_, const std::vector<std::string>& queries_, const bool edgeToNode_, const std::vector<int64_t>& edgeOrNodeIntIds_, const std::vector<std::string>& edgeOrNodeStringIds_, const std::vector<std::string>& edgeOrNodeWktIds_, const std::string& adjacencyTable_, const std::map<std::string, std::string>& options_):
            graphName( graphName_ ),
            queries( queries_ ),
            edgeToNode( edgeToNode_ ),
            edgeOrNodeIntIds( edgeOrNodeIntIds_ ),
            edgeOrNodeStringIds( edgeOrNodeStringIds_ ),
            edgeOrNodeWktIds( edgeOrNodeWktIds_ ),
            adjacencyTable( adjacencyTable_ ),
            options( options_ )
        {
        }

        std::string graphName;
        std::vector<std::string> queries;
        bool edgeToNode;
        std::vector<int64_t> edgeOrNodeIntIds;
        std::vector<std::string> edgeOrNodeStringIds;
        std::vector<std::string> edgeOrNodeWktIds;
        std::string adjacencyTable;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::QueryGraphRequest>
    {
        static void encode(Encoder& e, const gpudb::QueryGraphRequest& v)
        {
            ::avro::encode(e, v.graphName);
            ::avro::encode(e, v.queries);
            ::avro::encode(e, v.edgeToNode);
            ::avro::encode(e, v.edgeOrNodeIntIds);
            ::avro::encode(e, v.edgeOrNodeStringIds);
            ::avro::encode(e, v.edgeOrNodeWktIds);
            ::avro::encode(e, v.adjacencyTable);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::QueryGraphRequest& v)
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
                            ::avro::decode(d, v.queries);
                            break;

                        case 2:
                            ::avro::decode(d, v.edgeToNode);
                            break;

                        case 3:
                            ::avro::decode(d, v.edgeOrNodeIntIds);
                            break;

                        case 4:
                            ::avro::decode(d, v.edgeOrNodeStringIds);
                            break;

                        case 5:
                            ::avro::decode(d, v.edgeOrNodeWktIds);
                            break;

                        case 6:
                            ::avro::decode(d, v.adjacencyTable);
                            break;

                        case 7:
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
                ::avro::decode(d, v.queries);
                ::avro::decode(d, v.edgeToNode);
                ::avro::decode(d, v.edgeOrNodeIntIds);
                ::avro::decode(d, v.edgeOrNodeStringIds);
                ::avro::decode(d, v.edgeOrNodeWktIds);
                ::avro::decode(d, v.adjacencyTable);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #queryGraph(const QueryGraphRequest&) const}.
     * <p>
     * Employs a topological query on a network graph generated a-priori by
     * {@link #createGraph(const CreateGraphRequest&) const}. See <a
     * href="../../graph_solver/network_graph_solver.html"
     * target="_top">Network Graph Solvers</a> for more information.
     */
    struct QueryGraphResponse
    {

        /**
         * Constructs a QueryGraphResponse object with default parameter
         * values.
         */
        QueryGraphResponse() :
            result(bool()),
            adjacencyListIntArray(std::vector<int64_t>()),
            adjacencyListStringArray(std::vector<std::string>()),
            adjacencyListWktArray(std::vector<std::string>()),
            info(std::map<std::string, std::string>())
        {
        }

        bool result;
        std::vector<int64_t> adjacencyListIntArray;
        std::vector<std::string> adjacencyListStringArray;
        std::vector<std::string> adjacencyListWktArray;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::QueryGraphResponse>
    {
        static void encode(Encoder& e, const gpudb::QueryGraphResponse& v)
        {
            ::avro::encode(e, v.result);
            ::avro::encode(e, v.adjacencyListIntArray);
            ::avro::encode(e, v.adjacencyListStringArray);
            ::avro::encode(e, v.adjacencyListWktArray);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::QueryGraphResponse& v)
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
                            ::avro::decode(d, v.adjacencyListIntArray);
                            break;

                        case 2:
                            ::avro::decode(d, v.adjacencyListStringArray);
                            break;

                        case 3:
                            ::avro::decode(d, v.adjacencyListWktArray);
                            break;

                        case 4:
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
                ::avro::decode(d, v.adjacencyListIntArray);
                ::avro::decode(d, v.adjacencyListStringArray);
                ::avro::decode(d, v.adjacencyListWktArray);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
