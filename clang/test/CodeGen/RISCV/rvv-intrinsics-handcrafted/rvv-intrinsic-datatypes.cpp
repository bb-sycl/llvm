// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py UTC_ARGS: --version 2
// REQUIRES: riscv-registered-target
// RUN: %clang_cc1 -triple riscv64 -target-feature +zve32x -O0 -emit-llvm %s -o - | FileCheck %s

#include <riscv_vector.h>

// This test case tests the typedef generated under riscv_vector.h

// CHECK-LABEL: define dso_local void @_Z3foov
// CHECK-SAME: () #[[ATTR0:[0-9]+]] {
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[B64:%.*]] = alloca <vscale x 1 x i1>, align 1
// CHECK-NEXT:    [[B32:%.*]] = alloca <vscale x 2 x i1>, align 1
// CHECK-NEXT:    [[B16:%.*]] = alloca <vscale x 4 x i1>, align 1
// CHECK-NEXT:    [[B8:%.*]] = alloca <vscale x 8 x i1>, align 1
// CHECK-NEXT:    [[I8MF8:%.*]] = alloca <vscale x 1 x i8>, align 1
// CHECK-NEXT:    [[I8MF4:%.*]] = alloca <vscale x 2 x i8>, align 1
// CHECK-NEXT:    [[I8MF2:%.*]] = alloca <vscale x 4 x i8>, align 1
// CHECK-NEXT:    [[I8M1:%.*]] = alloca <vscale x 8 x i8>, align 1
// CHECK-NEXT:    [[I8M2:%.*]] = alloca <vscale x 16 x i8>, align 1
// CHECK-NEXT:    [[I8M4:%.*]] = alloca <vscale x 32 x i8>, align 1
// CHECK-NEXT:    [[I8M8:%.*]] = alloca <vscale x 64 x i8>, align 1
// CHECK-NEXT:    [[U8MF8:%.*]] = alloca <vscale x 1 x i8>, align 1
// CHECK-NEXT:    [[U8MF4:%.*]] = alloca <vscale x 2 x i8>, align 1
// CHECK-NEXT:    [[U8MF2:%.*]] = alloca <vscale x 4 x i8>, align 1
// CHECK-NEXT:    [[U8M1:%.*]] = alloca <vscale x 8 x i8>, align 1
// CHECK-NEXT:    [[U8M2:%.*]] = alloca <vscale x 16 x i8>, align 1
// CHECK-NEXT:    [[U8M4:%.*]] = alloca <vscale x 32 x i8>, align 1
// CHECK-NEXT:    [[U8M8:%.*]] = alloca <vscale x 64 x i8>, align 1
// CHECK-NEXT:    [[I16MF4:%.*]] = alloca <vscale x 1 x i16>, align 2
// CHECK-NEXT:    [[I16MF2:%.*]] = alloca <vscale x 2 x i16>, align 2
// CHECK-NEXT:    [[I16M1:%.*]] = alloca <vscale x 4 x i16>, align 2
// CHECK-NEXT:    [[I16M2:%.*]] = alloca <vscale x 8 x i16>, align 2
// CHECK-NEXT:    [[I16M4:%.*]] = alloca <vscale x 16 x i16>, align 2
// CHECK-NEXT:    [[I16M8:%.*]] = alloca <vscale x 32 x i16>, align 2
// CHECK-NEXT:    [[U16MF4:%.*]] = alloca <vscale x 1 x i16>, align 2
// CHECK-NEXT:    [[U16MF2:%.*]] = alloca <vscale x 2 x i16>, align 2
// CHECK-NEXT:    [[U16M1:%.*]] = alloca <vscale x 4 x i16>, align 2
// CHECK-NEXT:    [[U16M2:%.*]] = alloca <vscale x 8 x i16>, align 2
// CHECK-NEXT:    [[U16M4:%.*]] = alloca <vscale x 16 x i16>, align 2
// CHECK-NEXT:    [[U16M8:%.*]] = alloca <vscale x 32 x i16>, align 2
// CHECK-NEXT:    [[I32MF2:%.*]] = alloca <vscale x 1 x i32>, align 4
// CHECK-NEXT:    [[I32M1:%.*]] = alloca <vscale x 2 x i32>, align 4
// CHECK-NEXT:    [[I32M2:%.*]] = alloca <vscale x 4 x i32>, align 4
// CHECK-NEXT:    [[I32M4:%.*]] = alloca <vscale x 8 x i32>, align 4
// CHECK-NEXT:    [[I32M8:%.*]] = alloca <vscale x 16 x i32>, align 4
// CHECK-NEXT:    [[U32MF2:%.*]] = alloca <vscale x 1 x i32>, align 4
// CHECK-NEXT:    [[U32M1:%.*]] = alloca <vscale x 2 x i32>, align 4
// CHECK-NEXT:    [[U32M2:%.*]] = alloca <vscale x 4 x i32>, align 4
// CHECK-NEXT:    [[U32M4:%.*]] = alloca <vscale x 8 x i32>, align 4
// CHECK-NEXT:    [[U32M8:%.*]] = alloca <vscale x 16 x i32>, align 4
// CHECK-NEXT:    [[I64M1:%.*]] = alloca <vscale x 1 x i64>, align 8
// CHECK-NEXT:    [[I64M2:%.*]] = alloca <vscale x 2 x i64>, align 8
// CHECK-NEXT:    [[I64M4:%.*]] = alloca <vscale x 4 x i64>, align 8
// CHECK-NEXT:    [[I64M8:%.*]] = alloca <vscale x 8 x i64>, align 8
// CHECK-NEXT:    [[U64M1:%.*]] = alloca <vscale x 1 x i64>, align 8
// CHECK-NEXT:    [[U64M2:%.*]] = alloca <vscale x 2 x i64>, align 8
// CHECK-NEXT:    [[U64M4:%.*]] = alloca <vscale x 4 x i64>, align 8
// CHECK-NEXT:    [[U64M8:%.*]] = alloca <vscale x 8 x i64>, align 8
// CHECK-NEXT:    [[F16MF4:%.*]] = alloca <vscale x 1 x half>, align 2
// CHECK-NEXT:    [[F16MF2:%.*]] = alloca <vscale x 2 x half>, align 2
// CHECK-NEXT:    [[F16M1:%.*]] = alloca <vscale x 4 x half>, align 2
// CHECK-NEXT:    [[F16M2:%.*]] = alloca <vscale x 8 x half>, align 2
// CHECK-NEXT:    [[F16M4:%.*]] = alloca <vscale x 16 x half>, align 2
// CHECK-NEXT:    [[F16M8:%.*]] = alloca <vscale x 32 x half>, align 2
// CHECK-NEXT:    [[F32MF2:%.*]] = alloca <vscale x 1 x float>, align 4
// CHECK-NEXT:    [[F32M1:%.*]] = alloca <vscale x 2 x float>, align 4
// CHECK-NEXT:    [[F32M2:%.*]] = alloca <vscale x 4 x float>, align 4
// CHECK-NEXT:    [[F32M4:%.*]] = alloca <vscale x 8 x float>, align 4
// CHECK-NEXT:    [[F32M8:%.*]] = alloca <vscale x 16 x float>, align 4
// CHECK-NEXT:    [[F64M1:%.*]] = alloca <vscale x 1 x double>, align 8
// CHECK-NEXT:    [[F64M2:%.*]] = alloca <vscale x 2 x double>, align 8
// CHECK-NEXT:    [[F64M4:%.*]] = alloca <vscale x 4 x double>, align 8
// CHECK-NEXT:    [[F64M8:%.*]] = alloca <vscale x 8 x double>, align 8
// CHECK-NEXT:    [[I32M1X2:%.*]] = alloca { <vscale x 2 x i32>, <vscale x 2 x i32> }, align 4
// CHECK-NEXT:    ret void
//
void foo () {
  vbool64_t b64;
  vbool32_t b32;
  vbool16_t b16;
  vbool8_t b8;

  vint8mf8_t i8mf8;
  vint8mf4_t i8mf4;
  vint8mf2_t i8mf2;
  vint8m1_t i8m1;
  vint8m2_t i8m2;
  vint8m4_t i8m4;
  vint8m8_t i8m8;

  vuint8mf8_t u8mf8;
  vuint8mf4_t u8mf4;
  vuint8mf2_t u8mf2;
  vuint8m1_t u8m1;
  vuint8m2_t u8m2;
  vuint8m4_t u8m4;
  vuint8m8_t u8m8;

  vint16mf4_t i16mf4;
  vint16mf2_t i16mf2;
  vint16m1_t i16m1;
  vint16m2_t i16m2;
  vint16m4_t i16m4;
  vint16m8_t i16m8;

  vuint16mf4_t u16mf4;
  vuint16mf2_t u16mf2;
  vuint16m1_t u16m1;
  vuint16m2_t u16m2;
  vuint16m4_t u16m4;
  vuint16m8_t u16m8;

  vint32mf2_t i32mf2;
  vint32m1_t i32m1;
  vint32m2_t i32m2;
  vint32m4_t i32m4;
  vint32m8_t i32m8;

  vuint32mf2_t u32mf2;
  vuint32m1_t u32m1;
  vuint32m2_t u32m2;
  vuint32m4_t u32m4;
  vuint32m8_t u32m8;

  vint64m1_t i64m1;
  vint64m2_t i64m2;
  vint64m4_t i64m4;
  vint64m8_t i64m8;

  vuint64m1_t u64m1;
  vuint64m2_t u64m2;
  vuint64m4_t u64m4;
  vuint64m8_t u64m8;

  vfloat16mf4_t f16mf4;
  vfloat16mf2_t f16mf2;
  vfloat16m1_t f16m1;
  vfloat16m2_t f16m2;
  vfloat16m4_t f16m4;
  vfloat16m8_t f16m8;

  vfloat32mf2_t f32mf2;
  vfloat32m1_t f32m1;
  vfloat32m2_t f32m2;
  vfloat32m4_t f32m4;
  vfloat32m8_t f32m8;

  vfloat64m1_t f64m1;
  vfloat64m2_t f64m2;
  vfloat64m4_t f64m4;
  vfloat64m8_t f64m8;

  vint32m1x2_t i32m1x2;
}
