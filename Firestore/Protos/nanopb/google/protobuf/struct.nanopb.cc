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

#include "struct.nanopb.h"

#include "absl/strings/str_cat.h"
#include "nanopb_pretty_printers.h"

namespace firebase {
namespace firestore {
/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t google_protobuf_Struct_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, POINTER , FIRST, google_protobuf_Struct, fields, fields, &google_protobuf_Struct_FieldsEntry_fields),
    PB_LAST_FIELD
};

const pb_field_t google_protobuf_Struct_FieldsEntry_fields[3] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_protobuf_Struct_FieldsEntry, key, key, 0),
    PB_FIELD(  2, MESSAGE , SINGULAR, STATIC  , OTHER, google_protobuf_Struct_FieldsEntry, value, key, &google_protobuf_Value_fields),
    PB_LAST_FIELD
};

const pb_field_t google_protobuf_Value_fields[7] = {
    PB_ANONYMOUS_ONEOF_FIELD(kind,   1, ENUM    , ONEOF, STATIC  , FIRST, google_protobuf_Value, null_value, null_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(kind,   2, DOUBLE  , ONEOF, STATIC  , UNION, google_protobuf_Value, number_value, number_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(kind,   3, BYTES   , ONEOF, POINTER , UNION, google_protobuf_Value, string_value, string_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(kind,   4, BOOL    , ONEOF, STATIC  , UNION, google_protobuf_Value, bool_value, bool_value, 0),
    PB_ANONYMOUS_ONEOF_FIELD(kind,   5, MESSAGE , ONEOF, STATIC  , UNION, google_protobuf_Value, struct_value, struct_value, &google_protobuf_Struct_fields),
    PB_ANONYMOUS_ONEOF_FIELD(kind,   6, MESSAGE , ONEOF, STATIC  , UNION, google_protobuf_Value, list_value, list_value, &google_protobuf_ListValue_fields),
    PB_LAST_FIELD
};

const pb_field_t google_protobuf_ListValue_fields[2] = {
    PB_FIELD(  1, MESSAGE , REPEATED, POINTER , FIRST, google_protobuf_ListValue, values, values, &google_protobuf_Value_fields),
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
PB_STATIC_ASSERT((pb_membersize(google_protobuf_Struct_FieldsEntry, value) < 65536 && pb_membersize(google_protobuf_Value, struct_value) < 65536 && pb_membersize(google_protobuf_Value, list_value) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_google_protobuf_Struct_google_protobuf_Struct_FieldsEntry_google_protobuf_Value_google_protobuf_ListValue)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_protobuf_Struct_FieldsEntry, value) < 256 && pb_membersize(google_protobuf_Value, struct_value) < 256 && pb_membersize(google_protobuf_Value, list_value) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_google_protobuf_Struct_google_protobuf_Struct_FieldsEntry_google_protobuf_Value_google_protobuf_ListValue)
#endif


const char* EnumToString(
  google_protobuf_NullValue value) {
    switch (value) {
    case google_protobuf_NullValue_NULL_VALUE:
        return "NULL_VALUE";

    }
    return "<unknown enum value>";
}

std::string google_protobuf_Struct::ToString(int indent) const {
    bool is_root = indent == 0;
    if (is_root) {
        indent = 1;
    }

    std::string header = PrintHeader(is_root, "Struct", this);
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

std::string google_protobuf_Struct_FieldsEntry::ToString(int indent) const {
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

std::string google_protobuf_Value::ToString(int indent) const {
    bool is_root = indent == 0;
    if (is_root) {
        indent = 1;
    }

    std::string header = PrintHeader(is_root, "Value", this);
    std::string result;

    switch (which_kind) {
    case google_protobuf_Value_null_value_tag:
        result += PrintEnumField("null_value: ", null_value, indent + 1, true);
        break;
    case google_protobuf_Value_number_value_tag:
        result += PrintPrimitiveField("number_value: ",
            number_value, indent + 1, true);
        break;
    case google_protobuf_Value_string_value_tag:
        result += PrintPrimitiveField("string_value: ",
            string_value, indent + 1, true);
        break;
    case google_protobuf_Value_bool_value_tag:
        result += PrintPrimitiveField("bool_value: ",
            bool_value, indent + 1, true);
        break;
    case google_protobuf_Value_struct_value_tag:
        result += PrintMessageField("struct_value ",
            struct_value, indent + 1, true);
        break;
    case google_protobuf_Value_list_value_tag:
        result += PrintMessageField("list_value ",
            list_value, indent + 1, true);
        break;
    }

    if (!result.empty() || is_root) {
      std::string tail = PrintTail(is_root, indent);
      return header + result + tail;
    } else {
      return "";
    }
}

std::string google_protobuf_ListValue::ToString(int indent) const {
    bool is_root = indent == 0;
    if (is_root) {
        indent = 1;
    }

    std::string header = PrintHeader(is_root, "ListValue", this);
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

}  // namespace firestore
}  // namespace firebase

/* @@protoc_insertion_point(eof) */
