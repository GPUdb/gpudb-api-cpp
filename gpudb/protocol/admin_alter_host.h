/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __ADMIN_ALTER_HOST_H__
#define __ADMIN_ALTER_HOST_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #adminAlterHost(const AdminAlterHostRequest&) const}.
     * <p>
     * Alter properties on an existing host in the cluster. Currently, the only
     * property that can be altered is a hosts ability to accept failover
     * processes.
     */
    struct AdminAlterHostRequest
    {

        /**
         * Constructs an AdminAlterHostRequest object with default parameter
         * values.
         */
        AdminAlterHostRequest() :
            host(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AdminAlterHostRequest object with the specified
         * parameters.
         * 
         * @param[in] host_  Identifies the host this applies to. Can be the
         *                   host address, or formatted as 'hostN' where N is
         *                   the host number as specified in gpudb.conf
         * @param[in] options_  Optional parameters
         *                      <ul>
         *                              <li>
         *                      gpudb::admin_alter_host_accepts_failover: If
         *                      set to @a true, the host will accept processes
         *                      (ranks, graph server, etc.) in the event of a
         *                      failover on another node in the cluster. See <a
         *                      href="../../../n_plus_1/" target="_top">Cluster
         *                      Resilience</a> for more information.
         *                      <ul>
         *                              <li> gpudb::admin_alter_host_true
         *                              <li> gpudb::admin_alter_host_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::admin_alter_host_false.
         *                      </ul>
         * 
         */
        AdminAlterHostRequest(const std::string& host_, const std::map<std::string, std::string>& options_):
            host( host_ ),
            options( options_ )
        {
        }

        std::string host;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AdminAlterHostRequest>
    {
        static void encode(Encoder& e, const gpudb::AdminAlterHostRequest& v)
        {
            ::avro::encode(e, v.host);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AdminAlterHostRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.host);
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
                ::avro::decode(d, v.host);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #adminAlterHost(const AdminAlterHostRequest&) const}.
     * <p>
     * Alter properties on an existing host in the cluster. Currently, the only
     * property that can be altered is a hosts ability to accept failover
     * processes.
     */
    struct AdminAlterHostResponse
    {

        /**
         * Constructs an AdminAlterHostResponse object with default parameter
         * values.
         */
        AdminAlterHostResponse() :
            info(std::map<std::string, std::string>())
        {
        }

        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AdminAlterHostResponse>
    {
        static void encode(Encoder& e, const gpudb::AdminAlterHostResponse& v)
        {
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::AdminAlterHostResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.info);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
