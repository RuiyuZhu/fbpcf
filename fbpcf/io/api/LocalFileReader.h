/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 */

#pragma once
#include <cstddef>
#include <string>
#include "fbpcf/io/api/IReaderCloser.h"

namespace fbpcf::io {

/*
This class is the API for reading a file from local
storage. It must be on disk and cannot be a file in
cloud storage.
*/
class LocalFileReader : public IReaderCloser {
 public:
  explicit LocalFileReader(std::string filePath);

  int close() override;
  int read(char buf[], size_t nBytes) override;
  ~LocalFileReader() override;
};

} // namespace fbpcf::io
