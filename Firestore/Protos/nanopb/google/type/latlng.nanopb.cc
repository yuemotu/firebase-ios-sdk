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

#include "latlng.nanopb.h"

#include "Firestore/core/src/firebase/firestore/nanopb/pretty_printing.h"

namespace firebase {
namespace firestore {

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t google_type_LatLng_fields[3] = {
    PB_FIELD(  1, DOUBLE  , SINGULAR, STATIC  , FIRST, google_type_LatLng, latitude, latitude, 0),
    PB_FIELD(  2, DOUBLE  , SINGULAR, STATIC  , OTHER, google_type_LatLng, longitude, latitude, 0),
    PB_LAST_FIELD
};


/* On some platforms (such as AVR), double is really float.
 * These are not directly supported by nanopb, but see example_avr_double.
 * To get rid of this error, remove any double fields from your .proto.
 */
PB_STATIC_ASSERT(sizeof(double) == 8, DOUBLE_MUST_BE_8_BYTES)

std::string google_type_LatLng::ToString(int indent) const {
    std::string header = PrintHeader(indent, "LatLng", this);
    std::string result;

    result += PrintPrimitiveField("latitude: ", latitude, indent + 1, false);
    result += PrintPrimitiveField("longitude: ", longitude, indent + 1, false);

    bool is_root = indent == 0;
    if (!result.empty() || is_root) {
      std::string tail = PrintTail(indent);
      return header + result + tail;
    } else {
      return "";
    }
}

}  // namespace firestore
}  // namespace firebase

/* @@protoc_insertion_point(eof) */
