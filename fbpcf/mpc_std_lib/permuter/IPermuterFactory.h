/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once

#include "fbpcf/mpc_std_lib/permuter/IPermuter.h"

namespace fbpcf::mpc_std_lib::permuter {

template <typename T>
class IPermuterFactory {
 public:
  virtual ~IPermuterFactory() = default;
  virtual std::unique_ptr<IPermuter<T>> create() = 0;
};

} // namespace fbpcf::mpc_std_lib::permuter
