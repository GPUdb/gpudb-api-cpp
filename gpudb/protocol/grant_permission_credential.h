/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __GRANT_PERMISSION_CREDENTIAL_H__
#define __GRANT_PERMISSION_CREDENTIAL_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #grantPermissionCredential(const GrantPermissionCredentialRequest&) const}.
     * <p>
     * Grants a <a
     * href="../../../security/sec_concepts/#security-concepts-permissions-credential"
     * target="_top">credential-level permission</a> to a user or role.
     */
    struct GrantPermissionCredentialRequest
    {

        /**
         * Constructs a GrantPermissionCredentialRequest object with default
         * parameter values.
         */
        GrantPermissionCredentialRequest() :
            name(std::string()),
            permission(std::string()),
            credentialName(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a GrantPermissionCredentialRequest object with the
         * specified parameters.
         * 
         * @param[in] name_  Name of the user or role to which the permission
         *                   will be granted. Must be an existing user or role.
         * @param[in] permission_  Permission to grant to the user or role.
         *                         <ul>
         *                                 <li>
         *                         gpudb::grant_permission_credential_credential_admin:
         *                         Full read/write and administrative access on
         *                         the credential.
         *                                 <li>
         *                         gpudb::grant_permission_credential_credential_read:
         *                         Ability to read and use the credential.
         *                         </ul>
         * @param[in] credentialName_  Name of the credential on which the
         *                             permission will be granted. Must be an
         *                             existing credential, or an empty string
         *                             to grant access on all credentials.
         * @param[in] options_  Optional parameters.
         * 
         */
        GrantPermissionCredentialRequest(const std::string& name_, const std::string& permission_, const std::string& credentialName_, const std::map<std::string, std::string>& options_):
            name( name_ ),
            permission( permission_ ),
            credentialName( credentialName_ ),
            options( options_ )
        {
        }

        std::string name;
        std::string permission;
        std::string credentialName;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::GrantPermissionCredentialRequest>
    {
        static void encode(Encoder& e, const gpudb::GrantPermissionCredentialRequest& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.permission);
            ::avro::encode(e, v.credentialName);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::GrantPermissionCredentialRequest& v)
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
                            ::avro::decode(d, v.permission);
                            break;

                        case 2:
                            ::avro::decode(d, v.credentialName);
                            break;

                        case 3:
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
                ::avro::decode(d, v.permission);
                ::avro::decode(d, v.credentialName);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #grantPermissionCredential(const GrantPermissionCredentialRequest&) const}.
     * <p>
     * Grants a <a
     * href="../../../security/sec_concepts/#security-concepts-permissions-credential"
     * target="_top">credential-level permission</a> to a user or role.
     */
    struct GrantPermissionCredentialResponse
    {

        /**
         * Constructs a GrantPermissionCredentialResponse object with default
         * parameter values.
         */
        GrantPermissionCredentialResponse() :
            name(std::string()),
            permission(std::string()),
            credentialName(std::string()),
            info(std::map<std::string, std::string>())
        {
        }

        std::string name;
        std::string permission;
        std::string credentialName;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::GrantPermissionCredentialResponse>
    {
        static void encode(Encoder& e, const gpudb::GrantPermissionCredentialResponse& v)
        {
            ::avro::encode(e, v.name);
            ::avro::encode(e, v.permission);
            ::avro::encode(e, v.credentialName);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::GrantPermissionCredentialResponse& v)
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
                            ::avro::decode(d, v.permission);
                            break;

                        case 2:
                            ::avro::decode(d, v.credentialName);
                            break;

                        case 3:
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
                ::avro::decode(d, v.permission);
                ::avro::decode(d, v.credentialName);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
