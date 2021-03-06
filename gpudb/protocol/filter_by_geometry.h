/*
 *  This file was autogenerated by the GPUdb schema processor.
 *
 *  DO NOT EDIT DIRECTLY.
 */
#ifndef __FILTER_BY_GEOMETRY_H__
#define __FILTER_BY_GEOMETRY_H__

namespace gpudb
{

    /**
     * A set of input parameters for {@link
     * #filterByGeometry(const FilterByGeometryRequest&) const}.
     * <p>
     * Applies a geometry filter against a geospatial geometry column in a
     * given table or view. The filtering geometry is provided by @a inputWkt.
     */
    struct FilterByGeometryRequest
    {

        /**
         * Constructs a FilterByGeometryRequest object with default parameter
         * values.
         */
        FilterByGeometryRequest() :
            tableName(std::string()),
            viewName(std::string()),
            columnName(std::string()),
            inputWkt(std::string()),
            operation(std::string()),
            options(std::map<std::string, std::string>())
        {
        }

        /**
         * Constructs a FilterByGeometryRequest object with the specified
         * parameters.
         * 
         * @param[in] tableName_  Name of the table on which the filter by
         *                        geometry will be performed, in
         *                        [schema_name.]table_name format, using
         *                        standard <a
         *                        href="../../../concepts/tables/#table-name-resolution"
         *                        target="_top">name resolution rules</a>.
         *                        Must be an existing table or view containing
         *                        a geospatial geometry column.
         * @param[in] viewName_  If provided, then this will be the name of the
         *                       view containing the results, in
         *                       [schema_name.]view_name format, using standard
         *                       <a
         *                       href="../../../concepts/tables/#table-name-resolution"
         *                       target="_top">name resolution rules</a> and
         *                       meeting <a
         *                       href="../../../concepts/tables/#table-naming-criteria"
         *                       target="_top">table naming criteria</a>.  Must
         *                       not be an already existing table or view.
         * @param[in] columnName_  Name of the column to be used in the filter.
         *                         Must be a geospatial geometry column.
         * @param[in] inputWkt_  A geometry in WKT format that will be used to
         *                       filter the objects in @a tableName.
         * @param[in] operation_  The geometric filtering operation to perform
         *                        <ul>
         *                                <li>
         *                        gpudb::filter_by_geometry_contains: Matches
         *                        records that contain the given WKT in @a
         *                        inputWkt, i.e. the given WKT is within the
         *                        bounds of a record's geometry.
         *                                <li>
         *                        gpudb::filter_by_geometry_crosses: Matches
         *                        records that cross the given WKT.
         *                                <li>
         *                        gpudb::filter_by_geometry_disjoint: Matches
         *                        records that are disjoint from the given WKT.
         *                                <li>
         *                        gpudb::filter_by_geometry_equals: Matches
         *                        records that are the same as the given WKT.
         *                                <li>
         *                        gpudb::filter_by_geometry_intersects: Matches
         *                        records that intersect the given WKT.
         *                                <li>
         *                        gpudb::filter_by_geometry_overlaps: Matches
         *                        records that overlap the given WKT.
         *                                <li>
         *                        gpudb::filter_by_geometry_touches: Matches
         *                        records that touch the given WKT.
         *                                <li>
         *                        gpudb::filter_by_geometry_within: Matches
         *                        records that are within the given WKT.
         *                        </ul>
         * @param[in] options_  Optional parameters.
         *                      <ul>
         *                              <li>
         *                      gpudb::filter_by_geometry_collection_name:
         *                      [DEPRECATED--please specify the containing
         *                      schema for the view as part of @a viewName and
         *                      use /create/schema to create the schema if
         *                      non-existent]  Name of a schema for the newly
         *                      created view. If the schema provided is
         *                      non-existent, it will be automatically created.
         *                      </ul>
         * 
         */
        FilterByGeometryRequest(const std::string& tableName_, const std::string& viewName_, const std::string& columnName_, const std::string& inputWkt_, const std::string& operation_, const std::map<std::string, std::string>& options_):
            tableName( tableName_ ),
            viewName( viewName_ ),
            columnName( columnName_ ),
            inputWkt( inputWkt_ ),
            operation( operation_ ),
            options( options_ )
        {
        }

        std::string tableName;
        std::string viewName;
        std::string columnName;
        std::string inputWkt;
        std::string operation;
        std::map<std::string, std::string> options;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByGeometryRequest>
    {
        static void encode(Encoder& e, const gpudb::FilterByGeometryRequest& v)
        {
            ::avro::encode(e, v.tableName);
            ::avro::encode(e, v.viewName);
            ::avro::encode(e, v.columnName);
            ::avro::encode(e, v.inputWkt);
            ::avro::encode(e, v.operation);
            ::avro::encode(e, v.options);
        }

        static void decode(Decoder& d, gpudb::FilterByGeometryRequest& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.tableName);
                            break;

                        case 1:
                            ::avro::decode(d, v.viewName);
                            break;

                        case 2:
                            ::avro::decode(d, v.columnName);
                            break;

                        case 3:
                            ::avro::decode(d, v.inputWkt);
                            break;

                        case 4:
                            ::avro::decode(d, v.operation);
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
                ::avro::decode(d, v.tableName);
                ::avro::decode(d, v.viewName);
                ::avro::decode(d, v.columnName);
                ::avro::decode(d, v.inputWkt);
                ::avro::decode(d, v.operation);
                ::avro::decode(d, v.options);
            }
        }
    };
}

namespace gpudb
{

    /**
     * A set of output parameters for {@link
     * #filterByGeometry(const FilterByGeometryRequest&) const}.
     * <p>
     * Applies a geometry filter against a geospatial geometry column in a
     * given table or view. The filtering geometry is provided by @a inputWkt.
     */
    struct FilterByGeometryResponse
    {

        /**
         * Constructs a FilterByGeometryResponse object with default parameter
         * values.
         */
        FilterByGeometryResponse() :
            count(int64_t()),
            info(std::map<std::string, std::string>())
        {
        }

        int64_t count;
        std::map<std::string, std::string> info;
    };
}

namespace avro
{
    template<> struct codec_traits<gpudb::FilterByGeometryResponse>
    {
        static void encode(Encoder& e, const gpudb::FilterByGeometryResponse& v)
        {
            ::avro::encode(e, v.count);
            ::avro::encode(e, v.info);
        }

        static void decode(Decoder& d, gpudb::FilterByGeometryResponse& v)
        {
            if (::avro::ResolvingDecoder *rd = dynamic_cast< ::avro::ResolvingDecoder*>(&d))
            {
                const std::vector<size_t> fo = rd->fieldOrder();

                for (std::vector<size_t>::const_iterator it = fo.begin(); it != fo.end(); ++it)
                {
                    switch (*it)
                    {
                        case 0:
                            ::avro::decode(d, v.count);
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
                ::avro::decode(d, v.count);
                ::avro::decode(d, v.info);
            }
        }
    };
}

#endif
