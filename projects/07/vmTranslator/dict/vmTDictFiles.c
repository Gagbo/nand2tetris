#include "vmTDictFiles.h"
const char add_asm[] = {
  0x2f, 0x2f, 0x20, 0x61, 0x64, 0x64, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d,
  0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x4d,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41,
  0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x2b, 0x4d, 0x0a, 0x40, 0x53, 0x50,
  0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int add_asm_len = 55;
const char and_asm[] = {
  0x2f, 0x2f, 0x20, 0x61, 0x6e, 0x64, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d,
  0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x4d,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41,
  0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x44, 0x2b, 0x4d, 0x0a, 0x40, 0x54, 0x52,
  0x55, 0x45, 0x2e, 0x4a, 0x0a, 0x44, 0x3b, 0x4a, 0x45, 0x51, 0x0a, 0x44,
  0x3d, 0x2d, 0x31, 0x0a, 0x28, 0x54, 0x52, 0x55, 0x45, 0x2e, 0x4a, 0x29,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int and_asm_len = 95;
const char eq_asm[] = {
  0x2f, 0x2f, 0x20, 0x65, 0x71, 0x0a, 0x2f, 0x2f, 0x20, 0x4c, 0x61, 0x62,
  0x65, 0x6c, 0x20, 0x69, 0x73, 0x73, 0x75, 0x65, 0x20, 0x77, 0x69, 0x74,
  0x68, 0x20, 0x74, 0x68, 0x65, 0x20, 0x67, 0x6f, 0x74, 0x6f, 0x0a, 0x40,
  0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d,
  0x0a, 0x44, 0x3d, 0x4d, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d,
  0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x2d, 0x4d,
  0x0a, 0x40, 0x45, 0x4e, 0x44, 0x5f, 0x45, 0x51, 0x2e, 0x4a, 0x0a, 0x44,
  0x3b, 0x4a, 0x45, 0x51, 0x0a, 0x44, 0x3d, 0x2d, 0x31, 0x0a, 0x28, 0x45,
  0x4e, 0x44, 0x5f, 0x45, 0x51, 0x2e, 0x4a, 0x29, 0x0a, 0x40, 0x53, 0x50,
  0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x0a, 0x40, 0x53, 0x50,
  0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int eq_asm_len = 127;
const char gt_asm[] = {
  0x2f, 0x2f, 0x20, 0x67, 0x74, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d,
  0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x4d, 0x0a,
  0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d,
  0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x2d, 0x4d, 0x0a, 0x40, 0x47, 0x54, 0x5f,
  0x54, 0x52, 0x55, 0x45, 0x2e, 0x4a, 0x0a, 0x44, 0x3b, 0x4a, 0x47, 0x54,
  0x0a, 0x44, 0x3d, 0x2d, 0x31, 0x0a, 0x40, 0x45, 0x4e, 0x44, 0x5f, 0x47,
  0x54, 0x2e, 0x4a, 0x0a, 0x30, 0x3b, 0x4a, 0x4d, 0x50, 0x0a, 0x28, 0x47,
  0x54, 0x5f, 0x54, 0x52, 0x55, 0x45, 0x2e, 0x4a, 0x29, 0x0a, 0x44, 0x3d,
  0x30, 0x0a, 0x28, 0x45, 0x4e, 0x44, 0x5f, 0x47, 0x54, 0x2e, 0x4a, 0x29,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int gt_asm_len = 131;
const char lt_asm[] = {
  0x2f, 0x2f, 0x20, 0x6c, 0x74, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d,
  0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x4d, 0x0a,
  0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d,
  0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x2d, 0x4d, 0x0a, 0x40, 0x4c, 0x54, 0x5f,
  0x54, 0x52, 0x55, 0x45, 0x2e, 0x4a, 0x0a, 0x44, 0x3b, 0x4a, 0x4c, 0x54,
  0x0a, 0x44, 0x3d, 0x2d, 0x31, 0x0a, 0x40, 0x45, 0x4e, 0x44, 0x5f, 0x4c,
  0x54, 0x2e, 0x4a, 0x0a, 0x30, 0x3b, 0x4a, 0x4d, 0x50, 0x0a, 0x28, 0x4c,
  0x54, 0x5f, 0x54, 0x52, 0x55, 0x45, 0x2e, 0x4a, 0x29, 0x0a, 0x44, 0x3d,
  0x30, 0x0a, 0x28, 0x45, 0x4e, 0x44, 0x5f, 0x4c, 0x54, 0x2e, 0x4a, 0x29,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int lt_asm_len = 131;
const char neg_asm[] = {
  0x2f, 0x2f, 0x20, 0x6e, 0x65, 0x67, 0x0a, 0x40, 0x33, 0x32, 0x37, 0x36,
  0x38, 0x0a, 0x44, 0x3d, 0x41, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d,
  0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x2b,
  0x4d, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int neg_asm_len = 48;
const char not_asm[] = {
  0x2f, 0x2f, 0x20, 0x6e, 0x6f, 0x74, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d,
  0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x4d,
  0x0a, 0x40, 0x47, 0x4f, 0x54, 0x4f, 0x46, 0x41, 0x4c, 0x53, 0x45, 0x2e,
  0x4a, 0x0a, 0x44, 0x3b, 0x4a, 0x45, 0x51, 0x0a, 0x44, 0x3d, 0x30, 0x0a,
  0x40, 0x45, 0x4e, 0x44, 0x5f, 0x4e, 0x4f, 0x54, 0x2e, 0x4a, 0x0a, 0x30,
  0x3b, 0x4a, 0x4d, 0x50, 0x0a, 0x28, 0x47, 0x4f, 0x54, 0x4f, 0x46, 0x41,
  0x4c, 0x53, 0x45, 0x2e, 0x4a, 0x29, 0x0a, 0x44, 0x3d, 0x2d, 0x31, 0x0a,
  0x28, 0x45, 0x4e, 0x44, 0x5f, 0x4e, 0x4f, 0x54, 0x2e, 0x4a, 0x29, 0x0a,
  0x40, 0x53, 0x50, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x0a,
  0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int not_asm_len = 118;
const char or_asm[] = {
  0x2f, 0x2f, 0x20, 0x6f, 0x72, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d,
  0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x4d, 0x0a,
  0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d,
  0x4d, 0x0a, 0x44, 0x3d, 0x44, 0x2b, 0x4d, 0x0a, 0x40, 0x54, 0x52, 0x55,
  0x45, 0x2e, 0x4a, 0x0a, 0x44, 0x2b, 0x31, 0x3b, 0x4a, 0x47, 0x45, 0x0a,
  0x44, 0x3d, 0x2d, 0x31, 0x0a, 0x40, 0x45, 0x4e, 0x44, 0x5f, 0x4f, 0x52,
  0x2e, 0x4a, 0x0a, 0x30, 0x3b, 0x4a, 0x4d, 0x50, 0x0a, 0x28, 0x54, 0x52,
  0x55, 0x45, 0x2e, 0x4a, 0x29, 0x0a, 0x44, 0x3d, 0x30, 0x0a, 0x28, 0x45,
  0x4e, 0x44, 0x5f, 0x4f, 0x52, 0x2e, 0x4a, 0x29, 0x0a, 0x40, 0x53, 0x50,
  0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x0a, 0x40, 0x53, 0x50,
  0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int or_asm_len = 127;
const char pop_classic_i_asm[] = {
  0x2f, 0x2f, 0x20, 0x70, 0x6f, 0x70, 0x20, 0x43, 0x4c, 0x41, 0x53, 0x53,
  0x49, 0x43, 0x20, 0x49, 0x0a, 0x40, 0x49, 0x0a, 0x44, 0x3d, 0x41, 0x0a,
  0x40, 0x43, 0x4c, 0x41, 0x53, 0x53, 0x49, 0x43, 0x0a, 0x44, 0x3d, 0x4d,
  0x2b, 0x44, 0x0a, 0x40, 0x52, 0x31, 0x33, 0x0a, 0x4d, 0x3d, 0x44, 0x0a,
  0x2f, 0x2f, 0x20, 0x44, 0x20, 0x3d, 0x20, 0x52, 0x41, 0x4d, 0x5b, 0x2d,
  0x2d, 0x53, 0x50, 0x5d, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d,
  0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x4d, 0x0a, 0x2f,
  0x2f, 0x20, 0x52, 0x41, 0x4d, 0x5b, 0x43, 0x4c, 0x41, 0x53, 0x53, 0x49,
  0x43, 0x2b, 0x49, 0x5d, 0x20, 0x3d, 0x20, 0x44, 0x0a, 0x40, 0x52, 0x31,
  0x33, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x0a
, 0x00};
unsigned int pop_classic_i_asm_len = 118;
const char pop_pointer_b_asm[] = {
  0x2f, 0x2f, 0x20, 0x50, 0x6f, 0x70, 0x20, 0x70, 0x6f, 0x69, 0x6e, 0x74,
  0x65, 0x72, 0x20, 0x42, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d,
  0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x4d, 0x0a, 0x40,
  0x42, 0x0a, 0x4d, 0x3d, 0x44, 0x0a
, 0x00};
unsigned int pop_pointer_b_asm_len = 42;
const char pop_static_i_asm[] = {
  0x2f, 0x2f, 0x20, 0x70, 0x6f, 0x70, 0x20, 0x73, 0x74, 0x61, 0x74, 0x69,
  0x63, 0x20, 0x69, 0x20, 0x3a, 0x20, 0x6e, 0x65, 0x65, 0x64, 0x73, 0x20,
  0x42, 0x41, 0x53, 0x45, 0x4e, 0x41, 0x4d, 0x45, 0x20, 0x61, 0x6e, 0x64,
  0x20, 0x27, 0x2e, 0x27, 0x20, 0x61, 0x73, 0x20, 0x74, 0x6f, 0x6b, 0x65,
  0x6e, 0x20, 0x73, 0x65, 0x70, 0x61, 0x72, 0x61, 0x74, 0x6f, 0x72, 0x0a,
  0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x31, 0x0a, 0x41, 0x3d, 0x4d,
  0x0a, 0x44, 0x3d, 0x4d, 0x0a, 0x40, 0x42, 0x41, 0x53, 0x45, 0x4e, 0x41,
  0x4d, 0x45, 0x2e, 0x49, 0x0a, 0x4d, 0x3d, 0x44, 0x0a
, 0x00};
unsigned int pop_static_i_asm_len = 93;
const char push_classic_i_asm[] = {
  0x2f, 0x2f, 0x20, 0x50, 0x75, 0x73, 0x68, 0x20, 0x43, 0x4c, 0x41, 0x53,
  0x53, 0x49, 0x43, 0x20, 0x49, 0x0a, 0x40, 0x49, 0x0a, 0x44, 0x3d, 0x41,
  0x0a, 0x40, 0x43, 0x4c, 0x41, 0x53, 0x53, 0x49, 0x43, 0x0a, 0x44, 0x3d,
  0x4d, 0x2b, 0x44, 0x0a, 0x41, 0x3d, 0x44, 0x0a, 0x44, 0x3d, 0x4d, 0x0a,
  0x40, 0x53, 0x50, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x0a,
  0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int push_classic_i_asm_len = 70;
const char push_constant_i_asm[] = {
  0x2f, 0x2f, 0x20, 0x50, 0x75, 0x73, 0x68, 0x20, 0x63, 0x6f, 0x6e, 0x73,
  0x74, 0x61, 0x6e, 0x74, 0x20, 0x49, 0x0a, 0x40, 0x49, 0x0a, 0x44, 0x3d,
  0x41, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d,
  0x44, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int push_constant_i_asm_len = 48;
const char push_pointer_b_asm[] = {
  0x2f, 0x2f, 0x20, 0x50, 0x75, 0x73, 0x68, 0x20, 0x70, 0x6f, 0x69, 0x6e,
  0x74, 0x65, 0x72, 0x20, 0x42, 0x0a, 0x40, 0x42, 0x0a, 0x44, 0x3d, 0x4d,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int push_pointer_b_asm_len = 47;
const char push_static_i_asm[] = {
  0x2f, 0x2f, 0x20, 0x70, 0x75, 0x73, 0x68, 0x20, 0x73, 0x74, 0x61, 0x74,
  0x69, 0x63, 0x20, 0x49, 0x20, 0x3a, 0x20, 0x6e, 0x65, 0x65, 0x64, 0x73,
  0x20, 0x61, 0x6c, 0x73, 0x6f, 0x20, 0x42, 0x41, 0x53, 0x45, 0x4e, 0x41,
  0x4d, 0x45, 0x2c, 0x20, 0x61, 0x6e, 0x64, 0x20, 0x27, 0x2e, 0x27, 0x20,
  0x61, 0x73, 0x20, 0x61, 0x20, 0x74, 0x6f, 0x6b, 0x65, 0x6e, 0x20, 0x73,
  0x65, 0x70, 0x61, 0x72, 0x61, 0x74, 0x6f, 0x72, 0x0a, 0x40, 0x42, 0x41,
  0x53, 0x45, 0x4e, 0x41, 0x4d, 0x45, 0x2e, 0x49, 0x0a, 0x44, 0x3d, 0x4d,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int push_static_i_asm_len = 107;
const char sub_asm[] = {
  0x2f, 0x2f, 0x20, 0x73, 0x75, 0x62, 0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d,
  0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41, 0x3d, 0x4d, 0x0a, 0x44, 0x3d, 0x4d,
  0x0a, 0x40, 0x53, 0x50, 0x0a, 0x4d, 0x3d, 0x4d, 0x2d, 0x31, 0x0a, 0x41,
  0x3d, 0x4d, 0x0a, 0x4d, 0x3d, 0x44, 0x2d, 0x4d, 0x0a, 0x40, 0x53, 0x50,
  0x0a, 0x4d, 0x3d, 0x4d, 0x2b, 0x31, 0x0a
, 0x00};
unsigned int sub_asm_len = 55;
