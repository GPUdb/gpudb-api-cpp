/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __CREATE_RESOURCE_GROUP_H__
#define __CREATE_RESOURCE_GROUP_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #createResourceGroup(const CreateResourceGroupRequest&) const}.
     * <p>
     * Creates a new resource group to facilitate resource management.
     */
    struct CreateResourceGroupRequest
    {

        /**
         * Constructs a CreateResourceGroupRequest object with default
         * parameter values.
         */
        CreateResourceGroupRequest() :
            name(std::string()),
            tierAttributes(std::map<std::string, std::map<std::string, std::string> >()),
            ranking(std::string()),
            adjoiningResourceGroup(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a CreateResourceGroupRequest object with the specified
         * parameters.
         * 
         * @param[in] name_  Name of the group to be created. Must contain only
         *                   letters, digits, and underscores, and cannot begin
         *                   with a digit. Must not match existing resource
         *                   group name.
         * @param[in] tierAttributes_  Optional map containing tier names and
         *                             their respective attribute group limits.
         *                             The only valid attribute limit that can
         *                             be set is max_memory (in bytes) for the
         *                             VRAM & RAM tiers.
         *                             For instance, to set max VRAM capacity
         *                             to 1GB and max RAM capacity to 10GB,
         *                             use:
         *                             {'VRAM':{'max_memory':'1000000000'},
         *                             'RAM':{'max_memory':'10000000000'}}
         *                             <ul>
         *                                     <li>
         *                             gpudb::create_resource_group_max_memory:
         *                             Maximum amount of memory usable in the
         *                             given tier at one time for this group.
         *                             </ul>
         * @param[in] ranking_  Indicates the relative ranking among existing
         *                      resource groups where this new resource group
         *                      will be placed.  When using @a before or @a
         *                      after, specify which resource group this one
         *                      will be inserted before or after in @a
         *                      adjoiningResourceGroup.
         *                      <ul>
         *                              <li> gpudb::create_resource_group_first
         *                              <li> gpudb::create_resource_group_last
         *                              <li>
         *                      gpudb::create_resource_group_before
         *                              <li> gpudb::create_resource_group_after
         *                      </ul>
         * @param[in] adjoiningResourceGroup_  If @a ranking is @a before or @a
         *                                     after, this field indicates the
         *                                     resource group before or after
         *                                     which the current group will be
         *                                     placed; otherwise, leave blank.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::create_resource_group_max_cpu_concurrency:
         *                      Maximum number of simultaneous threads that
         *                      will be used to execute a request for this
         *                      group.
         *                              <li>
         *                      gpudb::create_resource_group_max_scheduling_priority:
         *                      Maximum priority of a scheduled task for this
         *                      group.
         *                              <li>
         *                      gpudb::create_resource_group_max_tier_priority:
         *                      Maximum priority of a tiered object for this
         *                      group.
         *                      </ul>
         * 
         */
        CreateResourceGroupRequest(const std::string& name_, const std::map<std::string, std::map<std::string, std::string> >& tierAttributes_, const std::string& ranking_, const std::string& adjoiningResourceGroup_, const std::map<std::string, std::string>& options_):
            name( name_ ),
            tierAttributes( tierAttributes_ ),
            ranking( ranking_ ),
            adjoiningResourceGroup( adjoiningResourceGroup_ ),
            options( options_ )
        {
        }

        std::string name;
        std::map<std::string, std::map<std::string, std::string> > tierAttributes;
        std::string ranking;
        std::string adjoiningResourceGroup;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateResourceGroupRequest>
    {
        static void encode(Encoder& e, const gpudb::CreateResourceGroupRequest& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.tierAttributes);
            ::avro::encode(e, v.ranking);
            ::avro::encode(e, v.adjoiningResourceGroup);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::CreateResourceGroupRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.name);
                            break;

                        case 1:
                            ::avro::decode(d, v.tierAttributes);
                            break;

                        case 2:
                            ::avro::decode(d, v.ranking);
                            break;

                        case 3:
                            ::avro::decode(d, v.adjoiningResourceGroup);
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
                ::avro::decode(d, v.name);
                ::avro::decode(d, v.tierAttributes);
                ::avro::decode(d, v.ranking);
                ::avro::decode(d, v.adjoiningResourceGroup);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #createResourceGroup(const CreateResourceGroupRequest&) const}.
     * <p>
     * Creates a new resource group to facilitate resource management.
     */
    struct CreateResourceGroupResponse
    {

        /**
         * Constructs a CreateResourceGroupResponse object with default
         * parameter values.
         */
        CreateResourceGroupResponse() :
            name(std::string()),
            info(std::map<std::string, std::string>())
        {
        }

        std::string name;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateResourceGroupResponse>
    {
        static void encode(Encoder& e, const gpudb::CreateResourceGroupResponse& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::CreateResourceGroupResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.name);
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
                ::avro::decode(d, v.name);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
