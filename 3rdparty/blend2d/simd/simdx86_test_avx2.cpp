// This file is part of Blend2D project <https://blend2d.com>
//
// See blend2d.h or LICENSE.md for license and copyright information
// SPDX-License-Identifier: Zlib

#include "../api-build_test_p.h"
#if defined(BL_TEST) && defined(BL_TARGET_OPT_AVX2)

#include "../simd/simd_test_p.h"

// SIMD - Tests - X86 - AVX2
// =========================

namespace SIMDTests {

BL_HIDDEN void simd_test_x86_avx2() noexcept {
  const char ext[] = "AVX2";
  test_integer<16>(ext);
  test_integer<32>(ext);
}

} // {BLContextTests}

#endif // BL_TEST && BL_TARGET_OPT_AVX2
