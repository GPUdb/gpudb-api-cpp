/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __SHOW_CREDENTIAL_H__
#define __SHOW_CREDENTIAL_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #showCredential(const ShowCredentialRequest&) const}.
     * <p>
     * Shows information about a specified <a
     * href="../../../concepts/credentials/" target="_top">credential</a> or
     * all credentials.
     */
    struct ShowCredentialRequest
    {

        /**
         * Constructs a ShowCredentialRequest object with default parameter
         * values.
         */
        ShowCredentialRequest() :
            credentialName(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a ShowCredentialRequest object with the specified
         * parameters.
         * 
         * @param[in] credentialName_  Name of the credential on which to
         *                             retrieve information. The name must
         *                             refer to a currently existing
         *                             credential. If '*' is specified,
         *                             information about all credentials will
         *                             be returned.
         * @param[in] options_  Optional parameters.
         * 
         */
        ShowCredentialRequest(const std::string& credentialName_, const std::map<std::string, std::string>& options_):
            credentialName( credentialName_ ),
            options( options_ )
        {
        }

        std::string credentialName;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ShowCredentialRequest>
    {
        static void encode(Encoder& e, const gpudb::ShowCredentialRequest& v)
        {
            ::avro::encode(e, v.credentialName);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::ShowCredentialRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.credentialName);
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
     * #showCredential(const ShowCredentialRequest&) const}.
     * <p>
     * Shows information about a specified <a
     * href="../../../concepts/credentials/" target="_top">credential</a> or
     * all credentials.
     */
    struct ShowCredentialResponse
    {

        /**
         * Constructs a ShowCredentialResponse object with default parameter
         * values.
         */
        ShowCredentialResponse() :
            credentialNames(std::vector<std::string>()),
            credentialTypes(std::vector<std::string>()),
            credentialIdentities(std::vector<std::string>()),
            credentials(std::vector<std::string>()),
            additionalInfo(std::vector<std::map<std::string, std::string> >()),
            info(std::map<std::string, std::string>())
        {
        }

        std::vector<std::string> credentialNames;
        std::vector<std::string> credentialTypes;
        std::vector<std::string> credentialIdentities;
        std::vector<std::string> credentials;
        std::vector<std::map<std::string, std::string> > additionalInfo;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ShowCredentialResponse>
    {
        static void encode(Encoder& e, const gpudb::ShowCredentialResponse& v)
        {
            ::avro::encode(e, v.credentialNames);
            ::avro::encode(e, v.credentialTypes);
            ::avro::encode(e, v.credentialIdentities);
            ::avro::encode(e, v.credentials);
            ::avro::encode(e, v.additionalInfo);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::ShowCredentialResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.credentialNames);
                            break;

                        case 1:
                            ::avro::decode(d, v.credentialTypes);
                            break;

                        case 2:
                            ::avro::decode(d, v.credentialIdentities);
                            break;

                        case 3:
                            ::avro::decode(d, v.credentials);
                            break;

                        case 4:
                            ::avro::decode(d, v.additionalInfo);
                            break;

                        case 5:
                            ::avro::decode(d, v.info);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.credentialNames);
                ::avro::decode(d, v.credentialTypes);
                ::avro::decode(d, v.credentialIdentities);
                ::avro::decode(d, v.credentials);
                ::avro::decode(d, v.additionalInfo);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif