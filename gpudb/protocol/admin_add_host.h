/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __ADMIN_ADD_HOST_H__
#define __ADMIN_ADD_HOST_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #adminAddHost(const AdminAddHostRequest&) const}.
     * <p>
     * Adds a host to an existing cluster.
     */
    struct AdminAddHostRequest
    {

        /**
         * Constructs an AdminAddHostRequest object with default parameter
         * values.
         */
        AdminAddHostRequest() :
            hostAddress(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AdminAddHostRequest object with the specified
         * parameters.
         * 
         * @param[in] hostAddress_  IP address of the host that will be added
         *                          to the cluster. This host must have
         *                          installed the same version of Kinetica as
         *                          the cluster to which it is being added.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li> gpudb::admin_add_host_dry_run: If
         *                      set to @a true, only validation checks will be
         *                      performed. No host is added.
         *                      <ul>
         *                              <li> gpudb::admin_add_host_true
         *                              <li> gpudb::admin_add_host_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::admin_add_host_false.
         *                              <li>
         *                      gpudb::admin_add_host_accepts_failover: If set
         *                      to @a true, the host will accept processes
         *                      (ranks, graph server, etc.) in the event of a
         *                      failover on another node in the cluster. See <a
         *                      href="../../../n_plus_1/" target="_top">Cluster
         *                      Resilience</a> for more information.
         *                      <ul>
         *                              <li> gpudb::admin_add_host_true
         *                              <li> gpudb::admin_add_host_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::admin_add_host_false.
         *                              <li>
         *                      gpudb::admin_add_host_public_address: The
         *                      publicly-accessible IP address for the host
         *                      being added, typically specified for clients
         *                      using multi-head operations. This setting is
         *                      required if any other host(s) in the cluster
         *                      specify a public address.
         *                              <li>
         *                      gpudb::admin_add_host_host_manager_public_url:
         *                      The publicly-accessible full path URL to the
         *                      host manager on the host being added, e.g.,
         *                      'http://172.123.45.67:9300'. The default host
         *                      manager port can be found in the <a
         *                      href="../../../install/shared/ports/"
         *                      target="_top">list of ports</a> used by
         *                      Kinetica.
         *                              <li> gpudb::admin_add_host_ram_limit:
         *                      The desired RAM limit for the host being added,
         *                      i.e. the sum of RAM usage for all processes on
         *                      the host will not be able to exceed this value.
         *                      Supported units: K (thousand), KB (kilobytes),
         *                      M (million), MB (megabytes), G (billion), GB
         *                      (gigabytes); if no unit is provided, the value
         *                      is assumed to be in bytes. For example, if @a
         *                      ram_limit is set to 10M, the resulting RAM
         *                      limit is 10 million bytes. Set @a ram_limit to
         *                      -1 to have no RAM limit.
         *                              <li> gpudb::admin_add_host_gpus:
         *                      Comma-delimited list of GPU indices (starting
         *                      at 1) that are eligible for running worker
         *                      processes. If left blank, all GPUs on the host
         *                      being added will be eligible.
         *                      </ul>
         * 
         */
        AdminAddHostRequest(const std::string& hostAddress_, const std::map<std::string, std::string>& options_):
            hostAddress( hostAddress_ ),
            options( options_ )
        {
        }

        std::string hostAddress;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AdminAddHostRequest>
    {
        static void encode(Encoder& e, const gpudb::AdminAddHostRequest& v)
        {
            ::avro::encode(e, v.hostAddress);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AdminAddHostRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.hostAddress);
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
                ::avro::decode(d, v.hostAddress);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #adminAddHost(const AdminAddHostRequest&) const}.
     * <p>
     * Adds a host to an existing cluster.
     */
    struct AdminAddHostResponse
    {

        /**
         * Constructs an AdminAddHostResponse object with default parameter
         * values.
         */
        AdminAddHostResponse() :
            addedHost(std::string()),
            info(std::map<std::string, std::string>())
        {
        }

        std::string addedHost;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AdminAddHostResponse>
    {
        static void encode(Encoder& e, const gpudb::AdminAddHostResponse& v)
        {
            ::avro::encode(e, v.addedHost);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::AdminAddHostResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.addedHost);
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
                ::avro::decode(d, v.addedHost);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
