/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __DELETE_GRAPH_H__
#define __DELETE_GRAPH_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #deleteGraph(const DeleteGraphRequest&) const}.
     * <p>
     * Deletes an existing graph from the graph server and/or persist.
     */
    struct DeleteGraphRequest
    {

        /**
         * Constructs a DeleteGraphRequest object with default parameter
         * values.
         */
        DeleteGraphRequest() :
            graphName(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a DeleteGraphRequest object with the specified
         * parameters.
         * 
         * @param[in] graphName_  Name of the graph to be deleted.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::delete_graph_delete_persist: If set to
         *                      @a true, the graph is removed from the server
         *                      and persist. If set to @a false, the graph is
         *                      removed from the server but is left in persist.
         *                      The graph can be reloaded from persist if it is
         *                      recreated with the same 'graph_name'.
         *                      <ul>
         *                              <li> gpudb::delete_graph_true
         *                              <li> gpudb::delete_graph_false
         *                      </ul>
         *                      The default value is gpudb::delete_graph_true.
         *                              <li> gpudb::delete_graph_server_id:
         *                      Indicates which graph server(s) to send the
         *                      request to. Default is to send to get
         *                      information about all the servers.
         *                      </ul>
         * 
         */
        DeleteGraphRequest(const std::string& graphName_, const std::map<std::string, std::string>& options_):
            graphName( graphName_ ),
            options( options_ )
        {
        }

        std::string graphName;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::DeleteGraphRequest>
    {
        static void encode(Encoder& e, const gpudb::DeleteGraphRequest& v)
        {
            ::avro::encode(e, v.graphName);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::DeleteGraphRequest& v)
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
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #deleteGraph(const DeleteGraphRequest&) const}.
     * <p>
     * Deletes an existing graph from the graph server and/or persist.
     */
    struct DeleteGraphResponse
    {

        /**
         * Constructs a DeleteGraphResponse object with default parameter
         * values.
         */
        DeleteGraphResponse() :
            result(bool()),
            info(std::map<std::string, std::string>())
        {
        }

        bool result;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::DeleteGraphResponse>
    {
        static void encode(Encoder& e, const gpudb::DeleteGraphResponse& v)
        {
            ::avro::encode(e, v.result);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::DeleteGraphResponse& v)
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
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
