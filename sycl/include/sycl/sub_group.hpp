//==----------- sub_group.hpp --- SYCL sub-group ---------------------------==//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#pragma once

#include <sycl/exception.hpp>
#include <sycl/ext/oneapi/sub_group.hpp>
#include <sycl/group.hpp>

namespace sycl {
__SYCL_INLINE_VER_NAMESPACE(_V1) {
using ext::oneapi::sub_group;
// TODO move the entire sub_group class implementation to this file once
// breaking changes are allowed.

namespace ext::oneapi::experimental {
inline sub_group this_sub_group() {
#ifdef __SYCL_DEVICE_ONLY__
  return sub_group();
#else
  throw sycl::exception(make_error_code(errc::feature_not_supported),
                        "Sub-groups are not supported on host.");
#endif
}
} // namespace ext::oneapi::experimental
} // __SYCL_INLINE_VER_NAMESPACE(_V1)
} // namespace sycl
