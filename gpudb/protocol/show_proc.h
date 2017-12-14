/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __SHOW_PROC_H__
#define __SHOW_PROC_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #showProc(const ShowProcRequest&) const}.
     * <p>
     * Shows information about a proc.
     */
    struct ShowProcRequest
    {

        /**
         * Constructs a ShowProcRequest object with default parameter values.
         */
        ShowProcRequest() :
            procName(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a ShowProcRequest object with the specified parameters.
         * 
         * @param[in] procName_  Name of the proc to show information about. If
         *                       specified, must be the name of a currently
         *                       existing proc. If not specified, information
         *                       about all procs will be returned.
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li> gpudb::show_proc_include_files: If
         *                      set to @a true, the files that make up the proc
         *                      will be returned. If set to @a false, the files
         *                      will not be returned.
         *                      <ul>
         *                              <li> gpudb::show_proc_true
         *                              <li> gpudb::show_proc_false
         *                      </ul>
         *                      </ul>
         * 
         */
        ShowProcRequest(const std::string& procName_, const std::map<std::string, std::string>& options_):
            procName( procName_ ),
            options( options_ )
        {
        }

        std::string procName;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ShowProcRequest>
    {
        static void encode(Encoder& e, const gpudb::ShowProcRequest& v)
        {
            ::avro::encode(e, v.procName);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::ShowProcRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.procName);
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
                ::avro::decode(d, v.procName);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #showProc(const ShowProcRequest&) const}.
     * <p>
     * Shows information about a proc.
     */
    struct ShowProcResponse
    {

        /**
         * Constructs a ShowProcResponse object with default parameter values.
         */
        ShowProcResponse() :
            procNames(std::vector<std::string>()),
            executionModes(std::vector<std::string>()),
            files(std::vector<std::map<std::string, std::vector<uint8_t> > >()),
            commands(std::vector<std::string>()),
            args(std::vector<std::vector<std::string> >()),
            options(std::vector<std::map<std::string, std::string> >())
        {
        }

        std::vector<std::string> procNames;
        std::vector<std::string> executionModes;
        std::vector<std::map<std::string, std::vector<uint8_t> > > files;
        std::vector<std::string> commands;
        std::vector<std::vector<std::string> > args;
        std::vector<std::map<std::string, std::string> > options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::ShowProcResponse>
    {
        static void encode(Encoder& e, const gpudb::ShowProcResponse& v)
        {
            ::avro::encode(e, v.procNames);
            ::avro::encode(e, v.executionModes);
            ::avro::encode(e, v.files);
            ::avro::encode(e, v.commands);
            ::avro::encode(e, v.args);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::ShowProcResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.procNames);
                            break;

                        case 1:
                            ::avro::decode(d, v.executionModes);
                            break;

                        case 2:
                            ::avro::decode(d, v.files);
                            break;

                        case 3:
                            ::avro::decode(d, v.commands);
                            break;

                        case 4:
                            ::avro::decode(d, v.args);
                            break;

                        case 5:
                            ::avro::decode(d, v.options);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.procNames);
                ::avro::decode(d, v.executionModes);
                ::avro::decode(d, v.files);
                ::avro::decode(d, v.commands);
                ::avro::decode(d, v.args);
                ::avro::decode(d, v.options);
            }
        }
    };
}

#endif
