/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __CREATE_JOIN_TABLE_H__
#define __CREATE_JOIN_TABLE_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #createJoinTable(const CreateJoinTableRequest&) const}.
     * <p>
     * Creates a table that is the result of a SQL JOIN.  For details see: <a
     * href="../../concepts/index.html#joins" target="_top">join concept
     * documentation</a>.
     */
    struct CreateJoinTableRequest
    {

        /**
         * Constructs a CreateJoinTableRequest object with default parameter
         * values.
         */
        CreateJoinTableRequest() :
            joinTableName(std::string()),
            tableNames(std::vector<std::string>()),
            aliases(std::vector<std::string>()),
            expression(std::string()),
            expressions(std::vector<std::string>()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a CreateJoinTableRequest object with the specified
         * parameters.
         * 
         * @param[in] joinTableName  Name of the join table to be created. Must
         *                           not be the name of a currently existing
         *                           GPUdb table or join table. Cannot be an
         *                           empty string.
         * @param[in] tableNames  The list of table names making up the joined
         *                        set.  Corresponds to a SQL statement FROM
         *                        clause
         * @param[in] aliases  The list of aliases for each of the
         *                     corresponding tables.
         * @param[in] expression  An optional expression GPUdb uses to combine
         *                        and filter the joined set.  Corresponds to a
         *                        SQL statement WHERE clause. For details see:
         *                        <a
         *                        href="../../concepts/index.html#expressions"
         *                        target="_top">expressions</a>.  Default value
         *                        is an empty string.
         * @param[in] expressions  An optional list of expressions GPUdb uses
         *                         to combine and filter the joined set.
         *                         Corresponds to a SQL statement WHERE clause.
         *                         For details see: <a
         *                         href="../../concepts/index.html#expressions"
         *                         target="_top">expressions</a>.  Default
         *                         value is an empty std::vector.
         * @param[in] options  Optional parameters.
         *                     <ul>
         *                             <li> collection_name: Name of a
         *                     collection in GPUdb to which the join table is
         *                     to be assigned as a child table. If empty, then
         *                     the join table will be a top level table.
         *                             <li> max_query_dimensions: The maximum
         *                     number of tables in a joined table that can be
         *                     accessed by a query and are not equated by a
         *                     foreign-key to primary-key equality predicate
         *                             <li> optimize_lookups: Use the applied
         *                     filters to precalculate the lookup table to get
         *                     data from the primary key sets
         *                             <li> refresh_method: Method by which the
         *                     join table can be refreshed when underlying
         *                     member tables have changed. Values: 'manual',
         *                     'on_query', 'on_insert'.
         *                             <li> refresh: Do a manual refresh of the
         *                     join table if it exists - throws an error
         *                     otherwise Values: 'no_refresh', 'refresh',
         *                     'full_refresh'.
         *                     </ul>
         *                       Default value is an empty std::map.
         * 
         */
        CreateJoinTableRequest(const std::string& joinTableName, const std::vector<std::string>& tableNames, const std::vector<std::string>& aliases, const std::string& expression, const std::vector<std::string>& expressions, const std::map<std::string, std::string>& options):
            joinTableName(joinTableName),
            tableNames(tableNames),
            aliases(aliases),
            expression(expression),
            expressions(expressions),
            options(options)
        {
        }

        std::string joinTableName;
        std::vector<std::string> tableNames;
        std::vector<std::string> aliases;
        std::string expression;
        std::vector<std::string> expressions;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateJoinTableRequest>
    {
        static void encode(Encoder& e, const gpudb::CreateJoinTableRequest& v)
        {
            ::avro::encode(e, v.joinTableName);
            ::avro::encode(e, v.tableNames);
            ::avro::encode(e, v.aliases);
            ::avro::encode(e, v.expression);
            ::avro::encode(e, v.expressions);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::CreateJoinTableRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.joinTableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.tableNames);
                            break;

                        case 2:
                            ::avro::decode(d, v.aliases);
                            break;

                        case 3:
                            ::avro::decode(d, v.expression);
                            break;

                        case 4:
                            ::avro::decode(d, v.expressions);
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
                ::avro::decode(d, v.joinTableName);
                ::avro::decode(d, v.tableNames);
                ::avro::decode(d, v.aliases);
                ::avro::decode(d, v.expression);
                ::avro::decode(d, v.expressions);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #createJoinTable(const CreateJoinTableRequest&) const}.
     * <p>
     * Creates a table that is the result of a SQL JOIN.  For details see: <a
     * href="../../concepts/index.html#joins" target="_top">join concept
     * documentation</a>.
     */
    struct CreateJoinTableResponse
    {

        /**
         * Constructs a CreateJoinTableResponse object with default parameter
         * values.
         */
        CreateJoinTableResponse() :
            joinTableName(std::string()),
            count(int64_t())
        {
        }

        std::string joinTableName;
        int64_t count;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::CreateJoinTableResponse>
    {
        static void encode(Encoder& e, const gpudb::CreateJoinTableResponse& v)
        {
            ::avro::encode(e, v.joinTableName);
            ::avro::encode(e, v.count);
        }

        static void decode(Decoder& d, gpudb::CreateJoinTableResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.joinTableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.count);
                            break;

                        default:
                            break;
                    }
                }
            }
            else
            {
                ::avro::decode(d, v.joinTableName);
                ::avro::decode(d, v.count);
            }
        }
    };
}

#endif
