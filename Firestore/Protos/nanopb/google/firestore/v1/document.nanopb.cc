/*
 * Copyright 2018 Google
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.2 */

#include "document.nanopb.h"

#include "absl/strings/str_cat.h"
#include "nanopb_pretty_printers.h"

namespace firebase {
namespace firestore {
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t google_firestore_v1_Document_fields[5] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_firestore_v1_Document, name, name, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, POINTER , OTHER, google_firestore_v1_Document, fields, name, &google_firestore_v1_Document_FieldsEntry_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_Document, create_time, fields, &google_protobuf_Timestamp_fields),
    PB_FIELD(  4, MESSAGE , OPTIONAL, STATIC  , OTHER, google_firestore_v1_Document, update_time, create_time, &google_protobuf_Timestamp_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_Document_FieldsEntry_fields[3] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_firestore_v1_Document_FieldsEntry, key, key, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_Document_FieldsEntry, value, key, &google_firestore_v1_Value_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_Value_fields[12] = {
    PB_ANONYMOUS_ONEOF_FIELD(value_type,   1, BOOL    , ONEOF, STATIC  , FIRST, google_firestore_v1_Value, boolean_value, boolean_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,   2, INT64   , ONEOF, STATIC  , UNION, google_firestore_v1_Value, integer_value, integer_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,   3, DOUBLE  , ONEOF, STATIC  , UNION, google_firestore_v1_Value, double_value, double_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,   5, BYTES   , ONEOF, POINTER , UNION, google_firestore_v1_Value, reference_value, reference_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,   6, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_Value, map_value, map_value, &google_firestore_v1_MapValue_fields),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,   8, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_Value, geo_point_value, geo_point_value, &google_type_LatLng_fields),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,   9, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_Value, array_value, array_value, &google_firestore_v1_ArrayValue_fields),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,  10, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_Value, timestamp_value, timestamp_value, &google_protobuf_Timestamp_fields),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,  11, ENUM    , ONEOF, STATIC  , UNION, google_firestore_v1_Value, null_value, null_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,  17, BYTES   , ONEOF, POINTER , UNION, google_firestore_v1_Value, string_value, string_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(value_type,  18, BYTES   , ONEOF, POINTER , UNION, google_firestore_v1_Value, bytes_value, bytes_value, 0),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_ArrayValue_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, POINTER , FIRST, google_firestore_v1_ArrayValue, values, values, &google_firestore_v1_Value_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_MapValue_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, POINTER , FIRST, google_firestore_v1_MapValue, fields, fields, &google_firestore_v1_MapValue_FieldsEntry_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_MapValue_FieldsEntry_fields[3] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_firestore_v1_MapValue_FieldsEntry, key, key, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_MapValue_FieldsEntry, value, key, &google_firestore_v1_Value_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_firestore_v1_Document, create_time) < 65536 && pb_membersize(google_firestore_v1_Document, update_time) < 65536 && pb_membersize(google_firestore_v1_Document_FieldsEntry, value) < 65536 && pb_membersize(google_firestore_v1_Value, map_value) < 65536 && pb_membersize(google_firestore_v1_Value, geo_point_value) < 65536 && pb_membersize(google_firestore_v1_Value, array_value) < 65536 && pb_membersize(google_firestore_v1_Value, timestamp_value) < 65536 && pb_membersize(google_firestore_v1_MapValue_FieldsEntry, value) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_google_firestore_v1_Document_google_firestore_v1_Document_FieldsEntry_google_firestore_v1_Value_google_firestore_v1_ArrayValue_google_firestore_v1_MapValue_google_firestore_v1_MapValue_FieldsEntry)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_firestore_v1_Document, create_time) < 256 && pb_membersize(google_firestore_v1_Document, update_time) < 256 && pb_membersize(google_firestore_v1_Document_FieldsEntry, value) < 256 && pb_membersize(google_firestore_v1_Value, map_value) < 256 && pb_membersize(google_firestore_v1_Value, geo_point_value) < 256 && pb_membersize(google_firestore_v1_Value, array_value) < 256 && pb_membersize(google_firestore_v1_Value, timestamp_value) < 256 && pb_membersize(google_firestore_v1_MapValue_FieldsEntry, value) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_google_firestore_v1_Document_google_firestore_v1_Document_FieldsEntry_google_firestore_v1_Value_google_firestore_v1_ArrayValue_google_firestore_v1_MapValue_google_firestore_v1_MapValue_FieldsEntry)
#endif


std::string google_firestore_v1_Document::ToString(int indent) const {
    bool is_root = indent == 0;
    if (is_root) {
        indent = 1;
    }

    std::string header = PrintHeader(is_root, "Document", this);
    std::string result;

    result += PrintPrimitiveField("name: ", name, indent + 1, false);
    for (pb_size_t i = 0; i != fields_count; ++i) {
        result += PrintMessageField("fields ", fields[i], indent + 1, true);
    }
    result += PrintMessageField("create_time ",
        create_time, indent + 1, false);
    if (has_update_time) {
        result += PrintMessageField("update_time ",
            update_time, indent + 1, true);
    }

    std::string tail = PrintTail(is_root, indent);
    return header + result + tail;
}

std::string google_firestore_v1_Document_FieldsEntry::ToString(int indent) const {
    bool is_root = indent == 0;
    if (is_root) {
        indent = 1;
    }

    std::string header = PrintHeader(is_root, "FieldsEntry", this);
    std::string result;

    result += PrintPrimitiveField("key: ", key, indent + 1, false);
    result += PrintMessageField("value ", value, indent + 1, false);

    std::string tail = PrintTail(is_root, indent);
    return header + result + tail;
}

std::string google_firestore_v1_Value::ToString(int indent) const {
    bool is_root = indent == 0;
    if (is_root) {
        indent = 1;
    }

    std::string header = PrintHeader(is_root, "Value", this);
    std::string result;

    switch (which_value_type) {
    case google_firestore_v1_Value_boolean_value_tag:
        result += PrintPrimitiveField("boolean_value: ",
            boolean_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_integer_value_tag:
        result += PrintPrimitiveField("integer_value: ",
            integer_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_double_value_tag:
        result += PrintPrimitiveField("double_value: ",
            double_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_reference_value_tag:
        result += PrintPrimitiveField("reference_value: ",
            reference_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_map_value_tag:
        result += PrintMessageField("map_value ", map_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_geo_point_value_tag:
        result += PrintMessageField("geo_point_value ",
            geo_point_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_array_value_tag:
        result += PrintMessageField("array_value ",
            array_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_timestamp_value_tag:
        result += PrintMessageField("timestamp_value ",
            timestamp_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_null_value_tag:
        result += PrintEnumField("null_value: ", null_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_string_value_tag:
        result += PrintPrimitiveField("string_value: ",
            string_value, indent + 1, true);
        break;
    case google_firestore_v1_Value_bytes_value_tag:
        result += PrintPrimitiveField("bytes_value: ",
            bytes_value, indent + 1, true);
        break;
    }

    if (!result.empty() || is_root) {
      std::string tail = PrintTail(is_root, indent);
      return header + result + tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_ArrayValue::ToString(int indent) const {
    bool is_root = indent == 0;
    if (is_root) {
        indent = 1;
    }

    std::string header = PrintHeader(is_root, "ArrayValue", this);
    std::string result;

    for (pb_size_t i = 0; i != values_count; ++i) {
        result += PrintMessageField("values ", values[i], indent + 1, true);
    }

    if (!result.empty() || is_root) {
      std::string tail = PrintTail(is_root, indent);
      return header + result + tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_MapValue::ToString(int indent) const {
    bool is_root = indent == 0;
    if (is_root) {
        indent = 1;
    }

    std::string header = PrintHeader(is_root, "MapValue", this);
    std::string result;

    for (pb_size_t i = 0; i != fields_count; ++i) {
        result += PrintMessageField("fields ", fields[i], indent + 1, true);
    }

    if (!result.empty() || is_root) {
      std::string tail = PrintTail(is_root, indent);
      return header + result + tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_MapValue_FieldsEntry::ToString(int indent) const {
    bool is_root = indent == 0;
    if (is_root) {
        indent = 1;
    }

    std::string header = PrintHeader(is_root, "FieldsEntry", this);
    std::string result;

    result += PrintPrimitiveField("key: ", key, indent + 1, false);
    result += PrintMessageField("value ", value, indent + 1, false);

    std::string tail = PrintTail(is_root, indent);
    return header + result + tail;
}

}  // namespace firestore
}  // namespace firebase

/* @@protoc_insertion_point(eof) */
