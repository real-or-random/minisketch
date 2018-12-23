/**********************************************************************
 * Copyright (c) 2018 Pieter Wuille, Greg Maxwell, Gleb Naumenko      *
 * Distributed under the MIT software license, see the accompanying   *
 * file LICENSE or http://www.opensource.org/licenses/mit-license.php.*
 **********************************************************************/

/* This file was substantially auto-generated by doc/gen_params.sage. */

#include <stdint.h>

#include "generic_common_impl.h"

#include "../lintrans.h"
#include "../sketch_impl.h"
#include "../sketch.h"

namespace {

// 49 bit field
typedef RecLinTrans<uint64_t, 6, 6, 6, 6, 5, 5, 5, 5, 5> StatTable49;
typedef RecLinTrans<uint64_t, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3> DynTable49;
constexpr StatTable49 SQR_TABLE_49({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x1000000, 0x4000000, 0x10000000, 0x40000000, 0x100000000, 0x400000000, 0x1000000000, 0x4000000000, 0x10000000000, 0x40000000000, 0x100000000000, 0x400000000000, 0x1000000000000, 0x402, 0x1008, 0x4020, 0x10080, 0x40200, 0x100800, 0x402000, 0x1008000, 0x4020000, 0x10080000, 0x40200000, 0x100800000, 0x402000000, 0x1008000000, 0x4020000000, 0x10080000000, 0x40200000000, 0x100800000000, 0x402000000000, 0x1008000000000, 0x20000000402, 0x80000001008, 0x200000004020, 0x800000010080});
constexpr StatTable49 QRT_TABLE_49({0, 0x10004196, 0x10004194, 0x5099461f080, 0x10004190, 0x40840600c20, 0x5099461f088, 0x58a56349cfde, 0x10004180, 0x48641a0c03fe, 0x40840600c00, 0x10084002848, 0x5099461f0c8, 0x4002048, 0x58a56349cf5e, 0x5088460a048, 0x10004080, 0x4c2852624dde, 0x48641a0c01fe, 0x14893129c280, 0x40840600800, 0x1eb23c323ace8, 0x10084002048, 0x48740a09417e, 0x5099461e0c8, 0x40852604d96, 0x4000048, 0x5cad2b29c37e, 0x58a563498f5e, 0x20000200, 0x50884602048, 0x10000000000, 0x10014080, 0x4c2a56624d96, 0x4c2852604dde, 0x1ee2347438ca0, 0x48641a0801fe, 0x480000000048, 0x14893121c280, 0x14091121c080, 0x40840700800, 0x1a5099561e17e, 0x1eb23c303ace8, 0x8740a894136, 0x10084402048, 0x18101c501ace8, 0x48740a89417e, 0x15dace6286f96, 0x5099561e0c8});
typedef Field<uint64_t, 49, 513, StatTable49, DynTable49, &SQR_TABLE_49, &QRT_TABLE_49> Field49;

// 50 bit field
typedef RecLinTrans<uint64_t, 6, 6, 6, 6, 6, 5, 5, 5, 5> StatTable50;
typedef RecLinTrans<uint64_t, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3> DynTable50;
constexpr StatTable50 SQR_TABLE_50({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x1000000, 0x4000000, 0x10000000, 0x40000000, 0x100000000, 0x400000000, 0x1000000000, 0x4000000000, 0x10000000000, 0x40000000000, 0x100000000000, 0x400000000000, 0x1000000000000, 0x1d, 0x74, 0x1d0, 0x740, 0x1d00, 0x7400, 0x1d000, 0x74000, 0x1d0000, 0x740000, 0x1d00000, 0x7400000, 0x1d000000, 0x74000000, 0x1d0000000, 0x740000000, 0x1d00000000, 0x7400000000, 0x1d000000000, 0x74000000000, 0x1d0000000000, 0x740000000000, 0x1d00000000000, 0x340000000001d, 0x1000000000053});
constexpr StatTable50 QRT_TABLE_50({0xfbdfa3ae9d4c, 0x38143245a4878, 0x38143245a487a, 0x38527487e7492, 0x38143245a487e, 0x3124c61f56d2a, 0x38527487e749a, 0xfa8c91b087c0, 0x38143245a486e, 0x3eca48c6196be, 0x3124c61f56d0a, 0x380000040080a, 0x38527487e74da, 0x976b2d8b39b4, 0xfa8c91b08740, 0xfa8cd5b02724, 0x38143245a496e, 0x316291dd013fe, 0x3eca48c6194be, 0x10344122064, 0x3124c61f5690a, 0x68c5f006ee40, 0x380000040000a, 0x852749fe64d0, 0x38527487e64da, 0x37ef8e9d0e9da, 0x976b2d8b19b4, 0x37fabd1cef34a, 0xfa8c91b0c740, 0x96282d9159b4, 0xfa8cd5b0a724, 0x464a8249dd0, 0x38143245b496e, 0x37eaa8ddc94be, 0x316291dd213fe, 0x392446035690a, 0x3eca48c6594be, 0x974b258b4964, 0x103441a2064, 0x385a7c87fb4da, 0x3124c61e5690a, 0xeb8ad5d9a724, 0x68c5f026ee40, 0x3724c61e5690a, 0x380000000000a, 0x3a8c5f026ee4a, 0x8527497e64d0, 0, 0x38527497e64da, 0x2fbdfa2ae8d0a});
typedef Field<uint64_t, 50, 29, StatTable50, DynTable50, &SQR_TABLE_50, &QRT_TABLE_50> Field50;

// 51 bit field
typedef RecLinTrans<uint64_t, 6, 6, 6, 6, 6, 6, 5, 5, 5> StatTable51;
typedef RecLinTrans<uint64_t, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3> DynTable51;
constexpr StatTable51 SQR_TABLE_51({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x1000000, 0x4000000, 0x10000000, 0x40000000, 0x100000000, 0x400000000, 0x1000000000, 0x4000000000, 0x10000000000, 0x40000000000, 0x100000000000, 0x400000000000, 0x1000000000000, 0x4000000000000, 0x96, 0x258, 0x960, 0x2580, 0x9600, 0x25800, 0x96000, 0x258000, 0x960000, 0x2580000, 0x9600000, 0x25800000, 0x96000000, 0x258000000, 0x960000000, 0x2580000000, 0x9600000000, 0x25800000000, 0x96000000000, 0x258000000000, 0x960000000000, 0x2580000000000, 0x160000000004b, 0x580000000012c, 0x6000000000426});
constexpr StatTable51 QRT_TABLE_51({0x778bf2703d152, 0x2aaaafbff2092, 0x2aaaafbff2090, 0x4d2119c7e7780, 0x2aaaafbff2094, 0x65de1df8ae194, 0x4d2119c7e7788, 0x67d63d7ba262c, 0x2aaaafbff2084, 0x28ff003f4167c, 0x65de1df8ae1b4, 0x658397fb1d034, 0x4d2119c7e77c8, 0x4d7c9284526ba, 0x67d63d7ba26ac, 0x6666333fc0cbe, 0x2aaaafbff2184, 0x295b807ab55ee, 0x28ff003f4147c, 0x2aaabfffe0016, 0x65de1df8ae5b4, 0x209210349d60, 0x658397fb1d834, 0x4d215dc7cf1c8, 0x4d2119c7e67c8, 0x662b2b3d7b4be, 0x4d7c9284506ba, 0x255af00b36e0, 0x67d63d7ba66ac, 0x65de1fb8ac1a6, 0x6666333fc8cbe, 0x662f3b3ded4be, 0x2aaaafbfe2184, 0x663a9dbc3a426, 0x295b807a955ee, 0x4cdc9ec128928, 0x28ff003f0147c, 0x28a0c93cd511c, 0x2aaabfff60016, 0x65d73cf8e78d4, 0x65de1df9ae5b4, 0x4d5eddc44f1c8, 0x209210149d60, 0x357fcc506c8a, 0x658397ff1d834, 0, 0x4d215dcfcf1c8, 0x63f536f5d4554, 0x4d2119d7e67c8, 0x4000000000022, 0x662b2b1d7b4be});
typedef Field<uint64_t, 51, 75, StatTable51, DynTable51, &SQR_TABLE_51, &QRT_TABLE_51> Field51;

// 52 bit field
typedef RecLinTrans<uint64_t, 6, 6, 6, 6, 6, 6, 6, 5, 5> StatTable52;
typedef RecLinTrans<uint64_t, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4> DynTable52;
constexpr StatTable52 SQR_TABLE_52({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x1000000, 0x4000000, 0x10000000, 0x40000000, 0x100000000, 0x400000000, 0x1000000000, 0x4000000000, 0x10000000000, 0x40000000000, 0x100000000000, 0x400000000000, 0x1000000000000, 0x4000000000000, 0x9, 0x24, 0x90, 0x240, 0x900, 0x2400, 0x9000, 0x24000, 0x90000, 0x240000, 0x900000, 0x2400000, 0x9000000, 0x24000000, 0x90000000, 0x240000000, 0x900000000, 0x2400000000, 0x9000000000, 0x24000000000, 0x90000000000, 0x240000000000, 0x900000000000, 0x2400000000000, 0x9000000000000, 0x4000000000012});
constexpr StatTable52 QRT_TABLE_52({0xc108165459b0e, 0x10004086, 0x10004084, 0xc00000100104e, 0x10004080, 0x2041810a545b0, 0xc000001001046, 0x1181e055efc0, 0x10004090, 0x40810214390, 0x2041810a54590, 0xc000141019106, 0xc000001001006, 0x10816045ab40, 0x1181e055ef40, 0xc000111015196, 0x10004190, 0xe045c19af44a2, 0x40810214190, 0xe045809ad0532, 0x2041810a54190, 0xdb387a03fe646, 0xc000141019906, 0x2000000800000, 0xc000001000006, 0x2486548199c34, 0x108160458b40, 0x2041808a50534, 0x1181e055af40, 0xc0408312153d6, 0xc00011101d196, 0x21499f0e0eed0, 0x10014190, 0xe15dff9faabe2, 0xe045c19ad44a2, 0xdb787b01ea7d6, 0x40810254190, 0xe484409180532, 0xe045809a50532, 0xc14095164d896, 0x2041810b54190, 0x217dee8fb7a74, 0xdb387a01fe646, 0x441810b54190, 0xc000141419906, 0xc3386e15e7f46, 0x2000000000000, 0x1000141419900, 0xc000000000006, 0, 0x248654a199c34, 0xa48654a199c32});
typedef Field<uint64_t, 52, 9, StatTable52, DynTable52, &SQR_TABLE_52, &QRT_TABLE_52> Field52;

// 53 bit field
typedef RecLinTrans<uint64_t, 6, 6, 6, 6, 6, 6, 6, 6, 5> StatTable53;
typedef RecLinTrans<uint64_t, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3, 3> DynTable53;
constexpr StatTable53 SQR_TABLE_53({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x1000000, 0x4000000, 0x10000000, 0x40000000, 0x100000000, 0x400000000, 0x1000000000, 0x4000000000, 0x10000000000, 0x40000000000, 0x100000000000, 0x400000000000, 0x1000000000000, 0x4000000000000, 0x10000000000000, 0x8e, 0x238, 0x8e0, 0x2380, 0x8e00, 0x23800, 0x8e000, 0x238000, 0x8e0000, 0x2380000, 0x8e00000, 0x23800000, 0x8e000000, 0x238000000, 0x8e0000000, 0x2380000000, 0x8e00000000, 0x23800000000, 0x8e000000000, 0x238000000000, 0x8e0000000000, 0x2380000000000, 0x8e00000000000, 0x3800000000047, 0xe00000000011c, 0x18000000000437});
constexpr StatTable53 QRT_TABLE_53({0xf940b90844076, 0x1f940b90844052, 0x1f940b90844050, 0x9d2a063b43e64, 0x1f940b90844054, 0x936f69323ec14, 0x9d2a063b43e6c, 0xe12270a88898, 0x1f940b90844044, 0x1f917f00bb5a3c, 0x936f69323ec34, 0x1f622df85b46ee, 0x9d2a063b43e2c, 0x9bc65ab040b66, 0xe12270a88818, 0x958330b931986, 0x1f940b90844144, 0x98e2a06e32e0, 0x1f917f00bb583c, 0x1f877970dc1024, 0x936f69323e834, 0x16cc3c9b1558c2, 0x1f622df85b4eee, 0x16de1c3351dae8, 0x9d2a063b42e2c, 0x1fecdc7855f8ee, 0x9bc65ab042b66, 0x933821b1cb6fe, 0xe12270a8c818, 0x1f675958641c0e, 0x958330b939986, 0x9d97e050e960, 0x1f940b90854144, 0x1f820fa0e38adc, 0x98e2a06c32e0, 0x1650f0e358a010, 0x1f917f00bf583c, 0x1643af4b037a3a, 0x1f877970d41024, 0x1ffe2c281d8c16, 0x936f69333e834, 0xf00d50ffccf8, 0x16cc3c9b3558c2, 0x16bc31cbca943a, 0x1f622df81b4eee, 0xa6cbd8007232, 0x16de1c33d1dae8, 0x15d2a062b42e10, 0x9d2a062b42e2c, 0x1aa77896586ca, 0x1fecdc7a55f8ee, 0, 0x9bc65af042b66});
typedef Field<uint64_t, 53, 71, StatTable53, DynTable53, &SQR_TABLE_53, &QRT_TABLE_53> Field53;

// 54 bit field
typedef RecLinTrans<uint64_t, 6, 6, 6, 6, 6, 6, 6, 6, 6> StatTable54;
typedef RecLinTrans<uint64_t, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3, 3> DynTable54;
constexpr StatTable54 SQR_TABLE_54({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x1000000, 0x4000000, 0x10000000, 0x40000000, 0x100000000, 0x400000000, 0x1000000000, 0x4000000000, 0x10000000000, 0x40000000000, 0x100000000000, 0x400000000000, 0x1000000000000, 0x4000000000000, 0x10000000000000, 0x201, 0x804, 0x2010, 0x8040, 0x20100, 0x80400, 0x201000, 0x804000, 0x2010000, 0x8040000, 0x20100000, 0x80400000, 0x201000000, 0x804000000, 0x2010000000, 0x8040000000, 0x20100000000, 0x80400000000, 0x201000000000, 0x804000000000, 0x2010000000000, 0x8040000000000, 0x20100000000000, 0x400000000402, 0x1000000001008, 0x4000000004020, 0x10000000010080});
constexpr StatTable54 QRT_TABLE_54({0x201008000200, 0x26c10916494994, 0x26c10916494996, 0x40008008, 0x26c10916494992, 0x141a2434c12d12, 0x40008000, 0x36c00110594c22, 0x26c10916494982, 0x200000040200, 0x141a2434c12d32, 0x10010816104534, 0x40008040, 0x36da60b01308b2, 0x36c00110594ca2, 0x48200209000, 0x26c10916494882, 0x41b6da2d86106, 0x200000040000, 0x32db2c228965b0, 0x141a2434c12932, 0x9000000200048, 0x10010816104d34, 0x32db68b2832da4, 0x40009040, 0x40045928b4902, 0x36da60b01328b2, 0x1000040000, 0x36c00110590ca2, 0x101b69865a4120, 0x48200201000, 0x22da6434912884, 0x26c10916484882, 0x9000240208008, 0x41b6da2da6106, 0x22c14484c20180, 0x200000000000, 0x4016db29b6812, 0x32db2c228165b0, 0x9008200201048, 0x141a2434d12932, 0x32c36ca2c264b0, 0x9000000000048, 0x140a65b48a2c32, 0x10010816504d34, 0, 0x32db68b2032da4, 0x404490824814, 0x41009040, 0x14da60a4536126, 0x40045908b4902, 0x8000041009008, 0x36da60b41328b2, 0x6db68b2032c12});
typedef Field<uint64_t, 54, 513, StatTable54, DynTable54, &SQR_TABLE_54, &QRT_TABLE_54> Field54;

// 55 bit field
typedef RecLinTrans<uint64_t, 6, 6, 6, 6, 6, 5, 5, 5, 5, 5> StatTable55;
typedef RecLinTrans<uint64_t, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 3> DynTable55;
constexpr StatTable55 SQR_TABLE_55({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x1000000, 0x4000000, 0x10000000, 0x40000000, 0x100000000, 0x400000000, 0x1000000000, 0x4000000000, 0x10000000000, 0x40000000000, 0x100000000000, 0x400000000000, 0x1000000000000, 0x4000000000000, 0x10000000000000, 0x40000000000000, 0x102, 0x408, 0x1020, 0x4080, 0x10200, 0x40800, 0x102000, 0x408000, 0x1020000, 0x4080000, 0x10200000, 0x40800000, 0x102000000, 0x408000000, 0x1020000000, 0x4080000000, 0x10200000000, 0x40800000000, 0x102000000000, 0x408000000000, 0x1020000000000, 0x4080000000000, 0x10200000000000, 0x40800000000000, 0x2000000000102, 0x8000000000408, 0x20000000001020});
constexpr StatTable55 QRT_TABLE_55({0, 0x121d57b6623fde, 0x121d57b6623fdc, 0x68908340d10e00, 0x121d57b6623fd8, 0x100300510e20, 0x68908340d10e08, 0x10004096, 0x121d57b6623fc8, 0x100010000, 0x100300510e00, 0x7ea8c890a088e8, 0x68908340d10e48, 0x68809540871648, 0x10004016, 0x68808000808068, 0x121d57b6623ec8, 0x68909240d41c48, 0x100010200, 0x6884c170ad0216, 0x100300510a00, 0x68848160a50200, 0x7ea8c890a080e8, 0x7eecbca04ab4b6, 0x68908340d11e48, 0x120c54b62234c8, 0x68809540873648, 0x69929240d61c48, 0x10000016, 0x68808060800000, 0x68808000800068, 0x80000080, 0x121d57b6633ec8, 0x7ea8cb90a18ae8, 0x68909240d61c48, 0x16284090200080, 0x100050200, 0x474302a345e, 0x6884c170a50216, 0x166cbca0cab4de, 0x100300410a00, 0x1000000000000, 0x68848160850200, 0x688cc1f0a50296, 0x7ea8c890e080e8, 0x7e8cc1f0a50280, 0x7eecbca0cab4b6, 0x68000000000068, 0x68908341d11e48, 0x7880954487365e, 0x120c54b42234c8, 0x9929248d61c20, 0x68809544873648, 0x41121208561c20, 0x69929248d61c48});
typedef Field<uint64_t, 55, 129, StatTable55, DynTable55, &SQR_TABLE_55, &QRT_TABLE_55> Field55;

// 56 bit field
typedef RecLinTrans<uint64_t, 6, 6, 6, 6, 6, 6, 5, 5, 5, 5> StatTable56;
typedef RecLinTrans<uint64_t, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4> DynTable56;
constexpr StatTable56 SQR_TABLE_56({0x1, 0x4, 0x10, 0x40, 0x100, 0x400, 0x1000, 0x4000, 0x10000, 0x40000, 0x100000, 0x400000, 0x1000000, 0x4000000, 0x10000000, 0x40000000, 0x100000000, 0x400000000, 0x1000000000, 0x4000000000, 0x10000000000, 0x40000000000, 0x100000000000, 0x400000000000, 0x1000000000000, 0x4000000000000, 0x10000000000000, 0x40000000000000, 0x95, 0x254, 0x950, 0x2540, 0x9500, 0x25400, 0x95000, 0x254000, 0x950000, 0x2540000, 0x9500000, 0x25400000, 0x95000000, 0x254000000, 0x950000000, 0x2540000000, 0x9500000000, 0x25400000000, 0x95000000000, 0x254000000000, 0x950000000000, 0x2540000000000, 0x9500000000000, 0x25400000000000, 0x95000000000000, 0x5400000000012a, 0x5000000000043d, 0x40000000001061});
constexpr StatTable56 QRT_TABLE_56({0x10004084, 0xd058f12fd5925e, 0xd058f12fd5925c, 0x41a60b5566d9f0, 0xd058f12fd59258, 0xbda60a142740ba, 0x41a60b5566d9f8, 0xd059f1afc5e688, 0xd058f12fd59248, 0xfc040841615a22, 0xbda60a1427409a, 0xbda60b5426c1ca, 0x41a60b5566d9b8, 0x1a60b4166b950, 0xd059f1afc5e608, 0xfc000041409822, 0xd058f12fd59348, 0xd1ee7a4ef4185c, 0xfc040841615822, 0x9049759b80b4a4, 0xbda60a1427449a, 0xd258e06f301e18, 0xbda60b5426c9ca, 0x6dfeeb3bf6d7d2, 0x41a60b5566c9b8, 0xbdef3ed4ae398a, 0x1a60b41669950, 0xd1ef3f8eeff04c, 0xd059f1afc5a608, 0xbda203340783de, 0xfc000041401822, 0x2dfefbaff2b27a, 0xd058f12fd49348, 0xfdb788a0706776, 0xd1ee7a4ef6185c, 0x2e5de0ae41337a, 0xfc040841655822, 0x41eb17d5ceecf8, 0x9049759b88b4a4, 0x40048874211afc, 0xbda60a1437449a, 0xd04a720f93400c, 0xd258e06f101e18, 0xbc559cf5ac7fce, 0xbda60b5466c9ca, 0x6dc9759b88b4d6, 0x6dfeeb3b76d7d2, 0x92feea7b275af0, 0x41a60b5466c9b8, 0, 0xbdef3ed6ae398a, 0x2811d5edd8ee2a, 0x1a60b45669950, 0xb1a60b5466c9ca, 0xd1ef3f86eff04c, 0xec493582c8f032});
typedef Field<uint64_t, 56, 149, StatTable56, DynTable56, &SQR_TABLE_56, &QRT_TABLE_56> Field56;

}

Sketch* ConstructGeneric7Bytes(int bits, int implementation)
{
    switch (bits) {
    case 49: return new SketchImpl<Field49>(implementation);
    case 50: return new SketchImpl<Field50>(implementation);
    case 51: return new SketchImpl<Field51>(implementation);
    case 52: return new SketchImpl<Field52>(implementation);
    case 53: return new SketchImpl<Field53>(implementation);
    case 54: return new SketchImpl<Field54>(implementation);
    case 55: return new SketchImpl<Field55>(implementation);
    case 56: return new SketchImpl<Field56>(implementation);
    default: return nullptr;
    }
}
