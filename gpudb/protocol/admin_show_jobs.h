/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __ADMIN_SHOW_JOBS_H__
#define __ADMIN_SHOW_JOBS_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #adminShowJobs(const AdminShowJobsRequest&) const}.
     * <p>
     * Get a list of the current jobs in GPUdb.
     */
    struct AdminShowJobsRequest
    {

        /**
         * Constructs an AdminShowJobsRequest object with default parameter
         * values.
         */
        AdminShowJobsRequest() :
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AdminShowJobsRequest object with the specified
         * parameters.
         * 
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::admin_show_jobs_show_async_jobs: If @a
         *                      true, then the completed async jobs are also
         *                      included in the response. By default, once the
         *                      async jobs are completed they are no longer
         *                      included in the jobs list.
         *                      <ul>
         *                              <li> gpudb::admin_show_jobs_true
         *                              <li> gpudb::admin_show_jobs_false
         *                      </ul>
         *                      The default value is
         *                      gpudb::admin_show_jobs_false.
         *                      </ul>
         * 
         */
        AdminShowJobsRequest(const std::map<std::string, std::string>& options_):
            options( options_ )
        {
        }

        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AdminShowJobsRequest>
    {
        static void encode(Encoder& e, const gpudb::AdminShowJobsRequest& v)
        {
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AdminShowJobsRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #adminShowJobs(const AdminShowJobsRequest&) const}.
     * <p>
     * Get a list of the current jobs in GPUdb.
     */
    struct AdminShowJobsResponse
    {

        /**
         * Constructs an AdminShowJobsResponse object with default parameter
         * values.
         */
        AdminShowJobsResponse() :
            jobId(std::vector<int64_t>()),
            status(std::vector<std::string>()),
            endpointName(std::vector<std::string>()),
            timeReceived(std::vector<int64_t>()),
            authId(std::vector<std::string>()),
            sourceIp(std::vector<std::string>()),
            userData(std::vector<std::string>()),
            info(std::map<std::string, std::string>())
        {
        }

        std::vector<int64_t> jobId;
        std::vector<std::string> status;
        std::vector<std::string> endpointName;
        std::vector<int64_t> timeReceived;
        std::vector<std::string> authId;
        std::vector<std::string> sourceIp;
        std::vector<std::string> userData;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AdminShowJobsResponse>
    {
        static void encode(Encoder& e, const gpudb::AdminShowJobsResponse& v)
        {
            ::avro::encode(e, v.jobId);
            ::avro::encode(e, v.status);
            ::avro::encode(e, v.endpointName);
            ::avro::encode(e, v.timeReceived);
            ::avro::encode(e, v.authId);
            ::avro::encode(e, v.sourceIp);
            ::avro::encode(e, v.userData);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::AdminShowJobsResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.jobId);
                            break;

                        case 1:
                            ::avro::decode(d, v.status);
                            break;

                        case 2:
                            ::avro::decode(d, v.endpointName);
                            break;

                        case 3:
                            ::avro::decode(d, v.timeReceived);
                            break;

                        case 4:
                            ::avro::decode(d, v.authId);
                            break;

                        case 5:
                            ::avro::decode(d, v.sourceIp);
                            break;

                        case 6:
                            ::avro::decode(d, v.userData);
                            break;

                        case 7:
                            ::avro::decode(d, v.info);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.jobId);
                ::avro::decode(d, v.status);
                ::avro::decode(d, v.endpointName);
                ::avro::decode(d, v.timeReceived);
                ::avro::decode(d, v.authId);
                ::avro::decode(d, v.sourceIp);
                ::avro::decode(d, v.userData);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
