/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __ADMIN_GET_SHARD_ASSIGNMENTS_H__
#define __ADMIN_GET_SHARD_ASSIGNMENTS_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #adminGetShardAssignments(const AdminGetShardAssignmentsRequest&) const}.
     * <p>
     * Returns the list of shards and the corresponding rank and tom containing
     * the shard.  The response message contains arrays of 16384 (total number
     * of shards in the system) rank and tom numbers corresponding to each
     * shard.
     */
    struct AdminGetShardAssignmentsRequest
    {

        /**
         * Constructs an AdminGetShardAssignmentsRequest object with default
         * parameter values.
         */
        AdminGetShardAssignmentsRequest() :
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs an AdminGetShardAssignmentsRequest object with the
         * specified parameters.
         * 
         * @param[in] options  Optional parameters.  Default value is an empty
         *                     std::map.
         * 
         */
        AdminGetShardAssignmentsRequest(const std::map<std::string, std::string>& options):
            options(options)
        {
        }

        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AdminGetShardAssignmentsRequest>
    {
        static void encode(Encoder& e, const gpudb::AdminGetShardAssignmentsRequest& v)
        {
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::AdminGetShardAssignmentsRequest& v)
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
     * #adminGetShardAssignments(const AdminGetShardAssignmentsRequest&) const}.
     * <p>
     * Returns the list of shards and the corresponding rank and tom containing
     * the shard.  The response message contains arrays of 16384 (total number
     * of shards in the system) rank and tom numbers corresponding to each
     * shard.
     */
    struct AdminGetShardAssignmentsResponse
    {

        /**
         * Constructs an AdminGetShardAssignmentsResponse object with default
         * parameter values.
         */
        AdminGetShardAssignmentsResponse() :
            version(int64_t()),
            shardAssignmentsRank(std::vector<int32_t>()),
            shardAssignmentsTom(std::vector<int32_t>())
        {
        }

        int64_t version;
        std::vector<int32_t> shardAssignmentsRank;
        std::vector<int32_t> shardAssignmentsTom;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::AdminGetShardAssignmentsResponse>
    {
        static void encode(Encoder& e, const gpudb::AdminGetShardAssignmentsResponse& v)
        {
            ::avro::encode(e, v.version);
            ::avro::encode(e, v.shardAssignmentsRank);
            ::avro::encode(e, v.shardAssignmentsTom);
        }

        static void decode(Decoder& d, gpudb::AdminGetShardAssignmentsResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.version);
                            break;

                        case 1:
                            ::avro::decode(d, v.shardAssignmentsRank);
                            break;

                        case 2:
                            ::avro::decode(d, v.shardAssignmentsTom);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.version);
                ::avro::decode(d, v.shardAssignmentsRank);
                ::avro::decode(d, v.shardAssignmentsTom);
            }
        }
    };
}

#endif