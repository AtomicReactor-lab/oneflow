/*
Copyright 2020 The OneFlow Authors. All rights reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/
#ifndef ONEFLOW_CORE_JOB_COMPLETER_AUTO_MIXED_PRECISION_LISTS_H_
#define ONEFLOW_CORE_JOB_COMPLETER_AUTO_MIXED_PRECISION_LISTS_H_

#include "oneflow/core/common/util.h"
#include "oneflow/core/operator/op_conf_util.h"

namespace oneflow {

typedef HashSet<std::string> AMPList;

class AutoMixedPrecisionLists final {
 public:
  // TODO(niuchong): list include grad
  static const AMPList& WhiteList();
  static const AMPList& BlackList();
  static const AMPList& GrayList();
  static const AMPList& ClearList();
};

}  // namespace oneflow

#endif  // ONEFLOW_CORE_JOB_COMPLETER_AUTO_MIXED_PRECISION_LISTS_H_
