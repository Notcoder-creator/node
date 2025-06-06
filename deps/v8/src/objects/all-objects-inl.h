// Copyright 2020 the V8 project authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef V8_OBJECTS_ALL_OBJECTS_INL_H_
#define V8_OBJECTS_ALL_OBJECTS_INL_H_

// This file includes all inline headers from src/objects, which is handy for
// compilation units that need it like object printing or verification.
// New inline headers should be added here.

#include "src/objects/allocation-site-inl.h"
#include "src/objects/allocation-site-scopes-inl.h"
#include "src/objects/api-callbacks-inl.h"
#include "src/objects/arguments-inl.h"
#include "src/objects/call-site-info-inl.h"
#include "src/objects/cell-inl.h"
#include "src/objects/code-inl.h"
#include "src/objects/compilation-cache-table-inl.h"
#include "src/objects/compressed-slots-inl.h"
#include "src/objects/contexts-inl.h"
#include "src/objects/cpp-heap-external-object-inl.h"
#include "src/objects/cpp-heap-object-wrapper-inl.h"
#include "src/objects/data-handler-inl.h"
#include "src/objects/debug-objects-inl.h"
#include "src/objects/descriptor-array-inl.h"
#include "src/objects/dictionary-inl.h"
#include "src/objects/elements-inl.h"
#include "src/objects/embedder-data-array-inl.h"
#include "src/objects/embedder-data-slot-inl.h"
#include "src/objects/feedback-cell-inl.h"
#include "src/objects/feedback-vector-inl.h"
#include "src/objects/field-index-inl.h"
#include "src/objects/fixed-array-inl.h"
#include "src/objects/foreign-inl.h"
#include "src/objects/free-space-inl.h"
#include "src/objects/hash-table-inl.h"
#include "src/objects/heap-number-inl.h"
#include "src/objects/heap-object-inl.h"
#include "src/objects/instance-type-inl.h"
#include "src/objects/js-array-buffer-inl.h"
#include "src/objects/js-array-inl.h"
#include "src/objects/js-atomics-synchronization-inl.h"
#include "src/objects/js-collection-inl.h"
#include "src/objects/js-disposable-stack-inl.h"
#include "src/objects/js-function-inl.h"
#include "src/objects/js-generator-inl.h"
#include "src/objects/js-iterator-helpers-inl.h"
#include "src/objects/js-objects-inl.h"
#include "src/objects/js-promise-inl.h"
#include "src/objects/js-proxy-inl.h"
#include "src/objects/js-raw-json-inl.h"
#include "src/objects/js-regexp-inl.h"
#include "src/objects/js-regexp-string-iterator-inl.h"
#include "src/objects/js-shadow-realm-inl.h"
#include "src/objects/js-shared-array-inl.h"
#include "src/objects/js-struct-inl.h"
#include "src/objects/js-temporal-objects-inl.h"
#include "src/objects/js-weak-refs-inl.h"
#include "src/objects/literal-objects-inl.h"
#include "src/objects/lookup-cache-inl.h"
#include "src/objects/lookup-inl.h"
#include "src/objects/map-inl.h"
#include "src/objects/maybe-object-inl.h"
#include "src/objects/megadom-handler-inl.h"
#include "src/objects/microtask-inl.h"
#include "src/objects/module-inl.h"
#include "src/objects/name-inl.h"
#include "src/objects/objects-inl.h"
#include "src/objects/oddball-inl.h"
#include "src/objects/ordered-hash-table-inl.h"
#include "src/objects/primitive-heap-object-inl.h"
#include "src/objects/promise-inl.h"
#include "src/objects/property-array-inl.h"
#include "src/objects/property-cell-inl.h"
#include "src/objects/property-descriptor-object-inl.h"
#include "src/objects/prototype-info-inl.h"
#include "src/objects/scope-info-inl.h"
#include "src/objects/script-inl.h"
#include "src/objects/shared-function-info-inl.h"
#include "src/objects/slots-atomic-inl.h"
#include "src/objects/slots-inl.h"
#include "src/objects/string-forwarding-table-inl.h"
#include "src/objects/string-inl.h"
#include "src/objects/string-set-inl.h"
#include "src/objects/string-table-inl.h"
#include "src/objects/struct-inl.h"
#include "src/objects/swiss-name-dictionary-inl.h"
#include "src/objects/synthetic-module-inl.h"
#include "src/objects/tagged-field-inl.h"
#include "src/objects/tagged-impl-inl.h"
#include "src/objects/tagged-value-inl.h"
#include "src/objects/template-objects-inl.h"
#include "src/objects/templates-inl.h"
#include "src/objects/torque-defined-classes-inl.h"
#include "src/objects/transitions-inl.h"
#include "src/objects/trusted-object-inl.h"
#include "src/objects/turbofan-types-inl.h"
#include "src/objects/turboshaft-types-inl.h"

#ifdef V8_INTL_SUPPORT
#include "src/objects/js-break-iterator-inl.h"
#include "src/objects/js-collator-inl.h"
#include "src/objects/js-date-time-format-inl.h"
#include "src/objects/js-display-names-inl.h"
#include "src/objects/js-duration-format-inl.h"
#include "src/objects/js-list-format-inl.h"
#include "src/objects/js-locale-inl.h"
#include "src/objects/js-number-format-inl.h"
#include "src/objects/js-plural-rules-inl.h"
#include "src/objects/js-relative-time-format-inl.h"
#include "src/objects/js-segment-iterator-inl.h"
#include "src/objects/js-segmenter-inl.h"
#include "src/objects/js-segments-inl.h"
#endif  // V8_INTL_SUPPORT

#endif  // V8_OBJECTS_ALL_OBJECTS_INL_H_
