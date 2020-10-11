#include <lvgl.h>

/*******************************************************************************
 * Size: 21 px
 * Bpp: 4
 * Opts: 
 ******************************************************************************/

#ifndef FONT_GOTHIC_A1_MEDIUM_H21
#define FONT_GOTHIC_A1_MEDIUM_H21 1
#endif

#if FONT_GOTHIC_A1_MEDIUM_H21

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+2E "." */
    0x0, 0x92, 0x33, 0x3d, 0x2a, 0x20, 0x18, 0x8c,
    0xfe, 0x42, 0x30, 0xf, 0xfe, 0x20,

    /* U+30 "0" */
    0x0, 0xfe, 0x13, 0x69, 0xbd, 0xef, 0xfb, 0xb9,
    0x95, 0xa, 0x40, 0x1f, 0xfc, 0x41, 0x49, 0xcc,
    0x4b, 0x21, 0x99, 0x12, 0x20, 0x35, 0x7a, 0xdc,
    0x72, 0x0, 0xff, 0xe0, 0x24, 0x53, 0x10, 0x13,
    0x5f, 0xed, 0xdd, 0x9d, 0xb2, 0x80, 0x3, 0x8e,
    0x72, 0x0, 0xfc, 0x2b, 0xec, 0x20, 0x4, 0x88,
    0x20, 0x80, 0x78, 0x9a, 0x5c, 0x80, 0x7, 0x36,
    0x60, 0x1f, 0x27, 0xa0, 0x4, 0x9a, 0xa2, 0x1,
    0xfe, 0x2b, 0x52, 0x0, 0xa, 0x59, 0x80, 0x71,
    0x6b, 0x80, 0x44, 0x6a, 0x1, 0xff, 0xc1, 0x3d,
    0x70, 0x8, 0x8d, 0x40, 0x39, 0x88, 0x80, 0x13,
    0x71, 0x0, 0x7f, 0xf0, 0x98, 0x84, 0x2, 0x6e,
    0x20, 0xc, 0x20, 0x1e, 0x31, 0x0, 0xff, 0xe1,
    0xf, 0x98, 0x4, 0x60, 0x20, 0x1f, 0xfd, 0xc1,
    0x0, 0xf1, 0x88, 0x7, 0xff, 0x8, 0x7c, 0xc0,
    0x23, 0x1, 0x0, 0xcc, 0x44, 0x0, 0x9b, 0x8c,
    0x3, 0xff, 0x84, 0xc4, 0x20, 0x13, 0x71, 0x0,
    0x62, 0xd7, 0x0, 0x88, 0xdc, 0x3, 0xff, 0x82,
    0x7a, 0xe0, 0x11, 0x1a, 0x80, 0x79, 0x7d, 0x40,
    0x24, 0xe6, 0x10, 0xf, 0xf1, 0x22, 0x90, 0x0,
    0x56, 0xcc, 0x3, 0xe5, 0x96, 0x20, 0x2, 0x45,
    0xa9, 0x0, 0x78, 0x9a, 0x64, 0x40, 0x3, 0x9a,
    0x30, 0xf, 0xe3, 0x9e, 0x72, 0x1, 0x5a, 0xde,
    0xcb, 0xb6, 0x76, 0xca, 0x8, 0x1c, 0x73, 0x90,
    0x7, 0xff, 0x0, 0xe3, 0x72, 0x59, 0x8, 0xd,
    0x10, 0x60, 0x48, 0xd5, 0xb8, 0xe4, 0x1, 0xf0,

    /* U+31 "1" */
    0x0, 0xff, 0xe0, 0xa4, 0xf7, 0xfb, 0x60, 0x80,
    0x3f, 0xf8, 0x9, 0xa8, 0x20, 0x1f, 0x1b, 0x4c,
    0xea, 0xbc, 0xeb, 0x62, 0x0, 0xfc, 0xda, 0xcd,
    0x95, 0xc, 0x40, 0x3f, 0xe5, 0xbf, 0xff, 0xd8,
    0xe2, 0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80,
    0x7f, 0xff, 0xc0, 0x3f, 0xf8, 0x0,

    /* U+32 "2" */
    0x0, 0xfc, 0x26, 0xd3, 0x7b, 0xdf, 0xfd, 0xdb,
    0x95, 0xa, 0x40, 0x1f, 0xf0, 0xa4, 0xe6, 0x25,
    0x90, 0x80, 0xd1, 0x23, 0x31, 0x1a, 0xbd, 0x6e,
    0x39, 0x80, 0x78, 0x56, 0xec, 0xc4, 0x6, 0xf7,
    0xdc, 0xcb, 0xbb, 0x37, 0xad, 0x88, 0x0, 0x71,
    0xee, 0x40, 0x10, 0xbc, 0xa8, 0x0, 0xa3, 0xa1,
    0x4, 0x3, 0xe1, 0x49, 0x85, 0x0, 0x8e, 0xd0,
    0x40, 0x2, 0xfd, 0x75, 0x4e, 0x62, 0x0, 0xff,
    0xe0, 0xb1, 0x88, 0x6, 0x13, 0x0, 0x84, 0x91,
    0x54, 0x62, 0x1, 0xff, 0xc1, 0x15, 0x21, 0x0,
    0x98, 0x88, 0x1, 0xff, 0xca, 0x39, 0xb4, 0x0,
    0xa, 0xf2, 0x80, 0x7f, 0xf2, 0x5, 0x27, 0x9c,
    0x80, 0x9, 0x16, 0x80, 0x1f, 0xfc, 0x61, 0x49,
    0xcb, 0x62, 0x2, 0x7b, 0xa6, 0x10, 0xf, 0xfe,
    0x20, 0xad, 0x65, 0xb1, 0x1, 0x35, 0xe4, 0x20,
    0x80, 0x7f, 0xf0, 0xc5, 0x6b, 0x29, 0x48, 0xd,
    0xef, 0x25, 0x4, 0x3, 0xff, 0x88, 0x71, 0x94,
    0xa4, 0x6, 0xf9, 0xb0, 0x82, 0x1, 0xff, 0xc4,
    0x15, 0xad, 0x72, 0x1, 0x5a, 0xd8, 0x31, 0x0,
    0xff, 0xe3, 0x14, 0xc2, 0x88, 0xa, 0xd5, 0x14,
    0x40, 0x3f, 0xf9, 0x9, 0x6c, 0x40, 0x19, 0xbe,
    0xef, 0xff, 0x8b, 0x2a, 0x20, 0x2, 0x34, 0x10,
    0xc, 0x26, 0x89, 0xff, 0xc7, 0xd3,

    /* U+33 "3" */
    0x0, 0xfc, 0x48, 0xf5, 0x9b, 0xdc, 0xff, 0xdd,
    0xb7, 0x4e, 0x84, 0x1, 0xff, 0xc2, 0x37, 0xcd,
    0xb8, 0x53, 0x31, 0x2a, 0x20, 0xc8, 0x9, 0x16,
    0x2f, 0x71, 0xc8, 0x3, 0xf8, 0xa3, 0xa0, 0xc0,
    0x9a, 0xbb, 0x99, 0x77, 0x66, 0xf6, 0xca, 0x8,
    0x0, 0xe2, 0x58, 0x40, 0x3f, 0x65, 0x3b, 0x4f,
    0x4a, 0x88, 0x7, 0xe2, 0x69, 0x62, 0x0, 0x97,
    0xd4, 0x3, 0xe2, 0x47, 0x89, 0x63, 0x0, 0xff,
    0xe0, 0x88, 0x7, 0x18, 0xb0, 0x7, 0xff, 0x34,
    0x9a, 0x18, 0x80, 0x7, 0x54, 0x20, 0xf, 0xfe,
    0x19, 0x2c, 0x4c, 0xd5, 0x79, 0xdb, 0x28, 0x6,
    0xf7, 0xae, 0x40, 0x1f, 0xfc, 0x46, 0xc7, 0x66,
    0x95, 0xc, 0x40, 0x2, 0x4d, 0xe0, 0x1f, 0xfc,
    0x84, 0x9f, 0xfd, 0xdc, 0xcb, 0x85, 0x33, 0x2c,
    0x5f, 0xd2, 0x8, 0x7, 0xff, 0x24, 0x44, 0x68,
    0xf5, 0xb6, 0xc2, 0x2, 0xb5, 0x6, 0x1, 0xff,
    0xcf, 0x4a, 0x61, 0x0, 0xa, 0x20, 0x80, 0x3f,
    0xfa, 0xde, 0x20, 0x10, 0x9b, 0xd6, 0x62, 0x54,
    0x3, 0xff, 0x86, 0x28, 0x81, 0x0, 0x9b, 0x88,
    0x2, 0x11, 0x3, 0x99, 0x9a, 0xec, 0xe6, 0x20,
    0x1f, 0x85, 0x23, 0x60, 0xc0, 0x24, 0xe7, 0x10,
    0xc, 0x4f, 0xf4, 0xa2, 0x24, 0x8c, 0xee, 0x6e,
    0x5d, 0xb3, 0x7b, 0x96, 0xe6, 0x0, 0x25, 0xaa,
    0x28, 0x80, 0x7c, 0x4b, 0x5f, 0x94, 0xea, 0x67,
    0x12, 0x20, 0xc8, 0x8, 0xd5, 0xeb, 0x31, 0x4a,
    0x20, 0x1c,

    /* U+34 "4" */
    0x0, 0xff, 0xe4, 0x13, 0xe7, 0xfe, 0xa5, 0x0,
    0xff, 0xe6, 0x93, 0xf4, 0x18, 0x7, 0xff, 0x44,
    0x9f, 0xa0, 0xc0, 0x3f, 0xfa, 0x25, 0x1d, 0x6,
    0x2c, 0xea, 0x20, 0x1f, 0xfc, 0xc3, 0x8f, 0x73,
    0x16, 0xa9, 0xc0, 0x10, 0xf, 0xfe, 0x51, 0xc7,
    0x39, 0xa, 0xd4, 0x20, 0x8, 0x7, 0xff, 0x28,
    0xe7, 0x9c, 0x85, 0x6a, 0xd0, 0x40, 0x3f, 0xf9,
    0x69, 0x3c, 0xc4, 0x2d, 0x56, 0x82, 0x1, 0xff,
    0xcb, 0x49, 0xa6, 0x21, 0x6a, 0x94, 0x10, 0xf,
    0xfe, 0x5a, 0x4d, 0x30, 0x89, 0xaa, 0x50, 0x3,
    0xff, 0x98, 0x4f, 0x2c, 0x20, 0x3, 0x2f, 0xbb,
    0xff, 0xa5, 0x0, 0x32, 0x4d, 0xde, 0x85, 0x11,
    0x78, 0x7, 0x12, 0x27, 0xff, 0x4, 0xc4, 0x3,
    0x9, 0xa2, 0x65, 0x23, 0x34, 0x6f, 0xff, 0xff,
    0x1a, 0x94, 0x3, 0x2d, 0x7f, 0xed, 0x72, 0x0,
    0xff, 0xff, 0x80, 0x7f, 0xf5, 0x40,

    /* U+35 "5" */
    0x0, 0xe2, 0x8d, 0xff, 0xff, 0xe4, 0x63, 0x88,
    0x7, 0xf9, 0x84, 0x80, 0x21, 0x34, 0x4f, 0xfe,
    0x21, 0x80, 0x7f, 0xc2, 0x40, 0x19, 0xe2, 0xef,
    0xff, 0x87, 0x8, 0x20, 0x1f, 0xc4, 0x46, 0x0,
    0x8b, 0x98, 0x3, 0xff, 0x9e, 0xdc, 0x60, 0x13,
    0x11, 0x0, 0x3f, 0xf9, 0xe2, 0x62, 0x0, 0x12,
    0x2, 0x57, 0x89, 0x95, 0x52, 0x61, 0xd4, 0xc4,
    0x3, 0xff, 0x82, 0x44, 0x60, 0x8, 0x5a, 0xb6,
    0xa1, 0xd9, 0x8a, 0xa6, 0x78, 0xac, 0xfb, 0x73,
    0x0, 0xff, 0xf, 0x90, 0x4, 0x4b, 0x17, 0xbd,
    0xff, 0x76, 0x53, 0x98, 0x80, 0xa4, 0x6c, 0x98,
    0x7, 0xe3, 0x8c, 0xba, 0xcc, 0x53, 0xa1, 0x8,
    0x4, 0x26, 0xb1, 0xb4, 0xa2, 0x0, 0x16, 0x85,
    0x0, 0xfe, 0x24, 0x53, 0x10, 0xf, 0xfe, 0x0,
    0xa4, 0xb1, 0x0, 0x4b, 0x88, 0x1, 0xff, 0xcf,
    0x2e, 0x60, 0x8, 0x4c, 0x40, 0x3f, 0xf9, 0xe6,
    0x2e, 0x1, 0x8c, 0x40, 0x38, 0x4d, 0x5e, 0x64,
    0xa2, 0x1, 0xff, 0xc1, 0x15, 0xb3, 0x0, 0x93,
    0xd4, 0x3, 0xcb, 0xd0, 0xcc, 0xad, 0x84, 0x10,
    0xf, 0xc4, 0xd5, 0x26, 0x0, 0x15, 0xf6, 0x10,
    0xe, 0x16, 0xab, 0x62, 0x3, 0x7b, 0xee, 0x65,
    0xdd, 0x9b, 0xdb, 0x28, 0x20, 0x4d, 0x56, 0x80,
    0x1f, 0xc2, 0x93, 0x98, 0xa7, 0x53, 0x31, 0x22,
    0x46, 0x79, 0x5e, 0x73, 0x12, 0x82, 0x1, 0xe0,

    /* U+36 "6" */
    0x0, 0xff, 0x89, 0x1e, 0xb3, 0x7b, 0xfe, 0xee,
    0x6d, 0xcb, 0x18, 0x80, 0x7f, 0xf0, 0xcd, 0xf3,
    0x17, 0xa, 0x67, 0x91, 0x4, 0x66, 0x46, 0x9c,
    0xc5, 0x28, 0x80, 0x7f, 0x8e, 0x3a, 0xc, 0x49,
    0x6b, 0x7b, 0x72, 0xed, 0x9b, 0xdb, 0x4a, 0x44,
    0x58, 0x82, 0x0, 0x7c, 0x2b, 0xe, 0x40, 0x2d,
    0x34, 0xa4, 0x1, 0xf8, 0x96, 0xb7, 0xbf, 0x65,
    0x0, 0x3c, 0x2f, 0xc8, 0x0, 0x16, 0xa4, 0x0,
    0xff, 0xe1, 0x88, 0x7, 0xf9, 0x31, 0x0, 0x27,
    0xc2, 0x47, 0xac, 0xde, 0xff, 0xbb, 0x6e, 0x58,
    0xc4, 0x3, 0xfc, 0x5a, 0xe0, 0x11, 0x9b, 0xb2,
    0xe1, 0x44, 0x4a, 0x86, 0x40, 0x48, 0xd3, 0x98,
    0x94, 0x10, 0xf, 0x98, 0x48, 0x2, 0x35, 0x50,
    0x35, 0xf6, 0xe5, 0xdb, 0x37, 0xb6, 0x50, 0x40,
    0x9a, 0xad, 0x0, 0x3c, 0x26, 0x1, 0xc2, 0xd3,
    0x24, 0x10, 0xf, 0x89, 0xa6, 0x46, 0x0, 0x15,
    0xf6, 0x10, 0xc, 0x20, 0x1c, 0x2f, 0xa8, 0x1,
    0xff, 0xc0, 0x25, 0xb3, 0x0, 0x97, 0xd4, 0x3,
    0x39, 0x88, 0x4, 0x7c, 0xc0, 0x1f, 0xfc, 0x22,
    0x23, 0x80, 0x42, 0x62, 0x1, 0x8b, 0xd4, 0x2,
    0x3e, 0x60, 0xf, 0xfe, 0x11, 0x11, 0xc0, 0x21,
    0x31, 0x0, 0xc2, 0x98, 0x40, 0x1, 0x4d, 0x30,
    0xf, 0xfe, 0x0, 0xa5, 0x98, 0x4, 0xbe, 0xa0,
    0x1c, 0x4d, 0x66, 0x0, 0x26, 0xf8, 0x31, 0x0,
    0xf8, 0x9a, 0xa0, 0xc0, 0x2, 0xbe, 0xc2, 0x1,
    0xe1, 0x6e, 0x94, 0x10, 0x37, 0xce, 0xdc, 0xbb,
    0xb7, 0xb6, 0x50, 0x40, 0x9a, 0xad, 0x0, 0x3f,
    0xc4, 0xd7, 0xf7, 0xc, 0x84, 0x66, 0x44, 0x88,
    0x9, 0x1a, 0x73, 0x12, 0x82, 0x1, 0xc0,

    /* U+37 "7" */
    0x2, 0x7c, 0xff, 0xff, 0xe7, 0xd2, 0x81, 0x92,
    0x99, 0xff, 0xf2, 0x8, 0x40, 0x31, 0x11, 0x80,
    0x56, 0x73, 0x3f, 0xf8, 0xdb, 0x4c, 0x20, 0x12,
    0x44, 0x98, 0x7, 0xff, 0x25, 0x22, 0x8, 0x0,
    0x38, 0x95, 0x10, 0xf, 0xfe, 0x41, 0x34, 0x30,
    0x80, 0xb4, 0x39, 0x0, 0x7f, 0xf2, 0x52, 0xe0,
    0xc0, 0x7, 0x36, 0x80, 0x1f, 0xfc, 0x91, 0x5f,
    0x61, 0x0, 0x2c, 0xb9, 0x0, 0x7f, 0xf2, 0x49,
    0xa5, 0x0, 0x4, 0xf2, 0xa0, 0x1f, 0xfc, 0xa3,
    0xb9, 0x30, 0x1, 0xd5, 0xc, 0x3, 0xff, 0x94,
    0x94, 0xe2, 0x0, 0x3b, 0x62, 0x0, 0xff, 0xe5,
    0x26, 0xb8, 0x80, 0xe, 0xd8, 0x40, 0x3f, 0xf9,
    0x49, 0xce, 0x20, 0x3, 0xa6, 0x10, 0xf, 0xfe,
    0x52, 0x6a, 0x88, 0x0, 0xed, 0xc4, 0x3, 0xff,
    0x94, 0x78, 0xe0, 0x11, 0x22, 0x4, 0x3, 0xff,
    0x94, 0x48, 0x81, 0x0, 0xa, 0x61, 0x80, 0x7f,
    0xf2, 0xd3, 0xc, 0x2, 0x4c, 0x40, 0xf, 0xfe,
    0x20,

    /* U+38 "8" */
    0x0, 0xfc, 0x28, 0xf3, 0x7b, 0xdc, 0xff, 0xdd,
    0xb9, 0x50, 0xa4, 0x1, 0xff, 0xc2, 0x26, 0xbf,
    0xb8, 0x64, 0x20, 0x24, 0x48, 0xcf, 0x2b, 0xd6,
    0xea, 0x50, 0x40, 0x3f, 0xb, 0x4c, 0x90, 0x40,
    0x56, 0xb7, 0xb2, 0xee, 0xcd, 0xfc, 0x83, 0x0,
    0x13, 0x54, 0x20, 0x7, 0xc9, 0x88, 0x1, 0x1c,
    0xc2, 0x90, 0x7, 0xc2, 0x6f, 0xc, 0x20, 0x1,
    0x4c, 0x30, 0xf, 0x9, 0x88, 0x7, 0xff, 0x30,
    0x7c, 0x40, 0x3c, 0x94, 0xc2, 0x0, 0x39, 0x85,
    0x10, 0xf, 0xc4, 0xfe, 0xc2, 0x0, 0x3a, 0x52,
    0x0, 0xf8, 0xe3, 0x29, 0x88, 0x16, 0xbb, 0x99,
    0x77, 0xb7, 0xb6, 0x10, 0x4d, 0xef, 0x58, 0x80,
    0x3f, 0xc4, 0xde, 0x84, 0x20, 0x1, 0x34, 0x4c,
    0x42, 0x0, 0x25, 0x4c, 0x61, 0x0, 0xff, 0x1c,
    0x66, 0x25, 0x8c, 0xcb, 0x37, 0xbd, 0xfe, 0xec,
    0xa7, 0x43, 0x47, 0xbc, 0xb6, 0x20, 0xf, 0x13,
    0xfb, 0x98, 0x1, 0x27, 0x29, 0x90, 0x84, 0x0,
    0x26, 0xb1, 0x7a, 0xe4, 0x2, 0x93, 0x25, 0x10,
    0xc, 0x98, 0x60, 0x12, 0xf3, 0x8, 0x7, 0xff,
    0x0, 0xe6, 0xcc, 0x2, 0x4f, 0x50, 0x8, 0x85,
    0x80, 0x21, 0x31, 0x0, 0xff, 0xe1, 0x89, 0xb8,
    0x6, 0x12, 0x10, 0x1, 0x11, 0x80, 0x21, 0x4c,
    0x20, 0xf, 0xfe, 0x12, 0x62, 0x80, 0x42, 0x44,
    0x10, 0x9, 0x79, 0x44, 0x0, 0x4f, 0xd0, 0x82,
    0x1, 0xf8, 0x96, 0xa5, 0x84, 0x0, 0x4d, 0x48,
    0x1, 0xcb, 0x74, 0xc4, 0x0, 0x37, 0xbe, 0xe6,
    0xe5, 0xdb, 0x37, 0xb6, 0x94, 0x80, 0x4e, 0x3a,
    0xc, 0x3, 0xe1, 0x49, 0xdd, 0x5c, 0x32, 0x10,
    0x11, 0xa2, 0xc, 0xf2, 0x34, 0x5f, 0xe3, 0x98,
    0x7, 0x0,

    /* U+39 "9" */
    0x0, 0xfc, 0x48, 0xf5, 0x7b, 0xdf, 0xfb, 0xb7,
    0x29, 0xd0, 0x80, 0x3f, 0xf8, 0x66, 0xf9, 0xb7,
    0xa, 0x84, 0x66, 0x44, 0x19, 0xe5, 0x8b, 0xcb,
    0x62, 0x0, 0xff, 0x1c, 0x74, 0x18, 0x0, 0xdf,
    0x3b, 0x72, 0xed, 0x9b, 0xdb, 0x2a, 0x22, 0x49,
    0xe7, 0x20, 0xf, 0x92, 0x5c, 0x80, 0x5, 0x1d,
    0x6, 0x20, 0x1f, 0x13, 0x5d, 0x94, 0x0, 0x73,
    0x46, 0x1, 0xc4, 0x6c, 0x1, 0xa, 0x20, 0x80,
    0x3f, 0xf8, 0x2, 0x98, 0x60, 0x1, 0x5b, 0x20,
    0xf, 0xfe, 0x8b, 0x80, 0x44, 0x46, 0x0, 0xc4,
    0x46, 0x0, 0x85, 0x10, 0x40, 0x1f, 0xfc, 0x14,
    0xc4, 0x0, 0xc2, 0x20, 0xe, 0x5e, 0x61, 0x0,
    0x14, 0x74, 0x18, 0x80, 0x7c, 0x4b, 0x56, 0xa0,
    0x1e, 0x30, 0xf, 0x24, 0x53, 0x10, 0x0, 0xdf,
    0x3b, 0x99, 0x76, 0xcd, 0xed, 0xa5, 0x24, 0x30,
    0xc, 0x26, 0x1, 0xf0, 0xa4, 0xee, 0x4b, 0xa1,
    0x88, 0x8d, 0x10, 0x40, 0xad, 0x39, 0xbc, 0xc0,
    0x10, 0x98, 0x80, 0x7f, 0xc6, 0xd1, 0x79, 0xdf,
    0xfb, 0xb6, 0xe5, 0x8c, 0xc4, 0xe0, 0x11, 0x72,
    0x80, 0x7f, 0xf3, 0x85, 0x2c, 0x80, 0x2, 0x88,
    0x10, 0xf, 0x12, 0x33, 0xb2, 0x0, 0x7f, 0xf0,
    0x45, 0xe8, 0xc0, 0x2, 0xf6, 0x60, 0x1e, 0x25,
    0x89, 0x89, 0xab, 0x63, 0x0, 0xfc, 0x6f, 0x50,
    0x60, 0x3, 0x9b, 0x30, 0xf, 0x89, 0xfa, 0x94,
    0x44, 0x93, 0x9d, 0xb9, 0x76, 0xcd, 0xec, 0x84,
    0x11, 0x24, 0xf3, 0x90, 0x7, 0xf8, 0x96, 0xbf,
    0x25, 0x90, 0xcc, 0x48, 0x83, 0x3c, 0xb1, 0x79,
    0x6c, 0x40, 0x1f, 0x80,

    /* U+43 "C" */
    0x0, 0xff, 0xe0, 0x92, 0xbc, 0xde, 0x6f, 0x7f,
    0xee, 0xe6, 0xdc, 0xba, 0x8, 0x7, 0xff, 0x18,
    0x9a, 0xfb, 0x6a, 0x19, 0xc, 0xfc, 0x46, 0x4,
    0x8d, 0x17, 0xf6, 0xe6, 0x1, 0xff, 0xc0, 0x15,
    0xbc, 0x94, 0x10, 0x26, 0x9c, 0xee, 0x6e, 0x65,
    0xba, 0xee, 0x5c, 0x20, 0x89, 0x23, 0x69, 0x44,
    0x3, 0xe1, 0x5b, 0xa4, 0x10, 0x15, 0xac, 0x96,
    0x31, 0x0, 0xfc, 0x28, 0xf7, 0x90, 0x62, 0xd,
    0x88, 0x20, 0x1c, 0x2d, 0x2a, 0x1, 0x24, 0x5a,
    0x88, 0x7, 0xff, 0x10, 0x9f, 0x3b, 0x99, 0x2a,
    0x20, 0x1c, 0xf8, 0x60, 0x12, 0x6b, 0x88, 0x7,
    0xff, 0x4c, 0xfd, 0x40, 0x22, 0x34, 0x10, 0xf,
    0xfe, 0xa3, 0x98, 0x80, 0x43, 0xc6, 0x1, 0xff,
    0xff, 0x73, 0x10, 0x8, 0x78, 0xc0, 0x3f, 0xfa,
    0xa7, 0xea, 0x1, 0x11, 0xa0, 0x7, 0xff, 0x59,
    0x30, 0xc0, 0x24, 0xd6, 0x10, 0xf, 0xfe, 0x49,
    0x19, 0x8, 0x7, 0xc4, 0xd2, 0x80, 0x12, 0x45,
    0xa8, 0x80, 0x7f, 0xf1, 0x5, 0x27, 0xf3, 0x7b,
    0x1c, 0x80, 0x38, 0x56, 0xa8, 0x82, 0x2, 0xb5,
    0x94, 0xc6, 0x20, 0x1f, 0x84, 0xda, 0x72, 0xd8,
    0x80, 0x9a, 0x1c, 0x80, 0x3e, 0x15, 0xbd, 0x94,
    0x10, 0x25, 0x9c, 0xee, 0xb7, 0x31, 0xbd, 0xd6,
    0x4b, 0x10, 0x12, 0xd7, 0xca, 0x0, 0x7f, 0xf0,
    0xd, 0xaf, 0xb6, 0xa1, 0x90, 0xcc, 0x4, 0x66,
    0x21, 0x2, 0x45, 0x7a, 0xdd, 0x52, 0x90, 0x7,
    0x0,

    /* U+46 "F" */
    0x0, 0x25, 0x7f, 0xff, 0xf3, 0xed, 0x40, 0x3f,
    0xe1, 0x23, 0x3f, 0xfe, 0x50, 0x80, 0x7f, 0xcb,
    0x19, 0x9f, 0xfc, 0x98, 0x40, 0xf, 0xff, 0xf8,
    0x7, 0xff, 0xfc, 0x3, 0x92, 0xbf, 0xff, 0xf8,
    0xdd, 0x26, 0x1, 0xff, 0xc1, 0x12, 0x44, 0xff,
    0xe3, 0xf8, 0x80, 0x7f, 0xf0, 0x56, 0x2e, 0xff,
    0xf8, 0xd4, 0xc4, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xff, 0x80, 0x7f, 0xfe, 0xc0,

    /* U+4F "O" */
    0x0, 0xff, 0xe0, 0x9, 0xb4, 0x55, 0xef, 0x73,
    0xff, 0x76, 0xe5, 0xcb, 0xa1, 0x0, 0x7f, 0xf2,
    0x4d, 0xef, 0xf2, 0x5d, 0x50, 0x80, 0xcf, 0x11,
    0x9c, 0x8d, 0x17, 0xba, 0xa5, 0x20, 0xf, 0xfe,
    0x10, 0xb5, 0xe4, 0x20, 0x81, 0xb5, 0x6f, 0xf6,
    0xe6, 0x5b, 0xae, 0xe6, 0x4a, 0x90, 0x12, 0xd7,
    0xc1, 0x80, 0x7f, 0x85, 0x6a, 0x50, 0x0, 0x2d,
    0x7b, 0x2a, 0x40, 0x1f, 0xc2, 0x6d, 0x5f, 0x6,
    0x0, 0x27, 0xe8, 0x20, 0xf, 0x85, 0xa5, 0x0,
    0x24, 0x88, 0x20, 0x80, 0x7f, 0xf1, 0x9, 0xfd,
    0xc8, 0x0, 0x4d, 0x68, 0x1, 0xe7, 0xc3, 0x0,
    0x93, 0x98, 0x40, 0x3f, 0xf9, 0x7, 0x6a, 0x20,
    0x1, 0x4c, 0x30, 0xc, 0x7e, 0xa0, 0x11, 0x1b,
    0x80, 0x7f, 0xf2, 0xcf, 0x54, 0x2, 0x23, 0x50,
    0xc, 0xe6, 0x20, 0x10, 0xf1, 0x80, 0x7f, 0xf3,
    0x4, 0x80, 0x33, 0x88, 0x80, 0x3f, 0xfb, 0x42,
    0x1, 0xfc, 0xe6, 0x20, 0x10, 0x88, 0xc0, 0x3f,
    0xf9, 0x82, 0x62, 0x1, 0x38, 0x88, 0x2, 0x3f,
    0x50, 0x8, 0xb1, 0xc0, 0x3f, 0xf9, 0x67, 0xae,
    0x1, 0x9, 0xa8, 0x7, 0x26, 0x18, 0x4, 0x9c,
    0xc2, 0x1, 0xff, 0xc8, 0x3b, 0x52, 0x0, 0xb,
    0xe1, 0x80, 0x71, 0x34, 0xa0, 0x4, 0x91, 0x4,
    0x10, 0xf, 0xfe, 0x21, 0x37, 0xb9, 0x0, 0x9,
    0xa9, 0x0, 0x3e, 0x15, 0x99, 0x20, 0x0, 0x5a,
    0xf6, 0x54, 0x80, 0x3f, 0x84, 0xda, 0xfe, 0x4c,
    0x0, 0x4d, 0x30, 0x60, 0x1f, 0xe2, 0x6a, 0xc7,
    0x31, 0x3, 0x6a, 0xdf, 0xed, 0xcc, 0xb7, 0xbf,
    0xb2, 0x50, 0x80, 0x96, 0xbe, 0x50, 0x3, 0xff,
    0x84, 0x27, 0x19, 0xf9, 0x2e, 0xa6, 0x40, 0x67,
    0x88, 0x8, 0xd1, 0xa2, 0xb7, 0x54, 0xa4, 0x1,
    0xf8,

    /* U+B0 "°" */
    0x0, 0xff, 0xe6, 0x9b, 0x56, 0x77, 0xfd, 0xd9,
    0x4c, 0x62, 0x1, 0xc9, 0x3b, 0x2e, 0xd1, 0x77,
    0x43, 0x3c, 0xec, 0x20, 0x4, 0x46, 0x82, 0x75,
    0x6c, 0x89, 0x35, 0xd8, 0xc5, 0x30, 0x80, 0x4,
    0x47, 0x3, 0xb6, 0x31, 0x1, 0x36, 0xd3, 0x6,
    0xd2, 0x0, 0x96, 0x29, 0x86, 0x33, 0xbf, 0xb2,
    0x19, 0x95, 0x2a, 0x1, 0xc4, 0xb3, 0xbf, 0xdb,
    0xb7, 0x7e, 0xca, 0x90, 0x4};

/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 118, .box_w = 15, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 14, .adv_w = 190, .box_w = 36, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 222, .adv_w = 190, .box_w = 21, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 268, .adv_w = 190, .box_w = 33, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 450, .adv_w = 190, .box_w = 36, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 652, .adv_w = 190, .box_w = 36, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 190, .box_w = 36, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 970, .adv_w = 190, .box_w = 36, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1201, .adv_w = 190, .box_w = 33, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1338, .adv_w = 190, .box_w = 36, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1572, .adv_w = 190, .box_w = 36, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1792, .adv_w = 223, .box_w = 42, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1993, .adv_w = 191, .box_w = 36, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2054, .adv_w = 242, .box_w = 45, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2295, .adv_w = 144, .box_w = 21, .box_h = 7, .ofs_x = 1, .ofs_y = 10}};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8,
    0x9, 0xa, 0xb, 0x15, 0x18, 0x21, 0x82};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
    {
        {.range_start = 46, .range_length = 131, .glyph_id_start = 1, .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 15, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY}};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

/*Store all the custom data of the font*/
static lv_font_fmt_txt_dsc_t font_dsc = {
    .glyph_bitmap = gylph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 1};

/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t Font_Gothic_A1_Medium_h21 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt, /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt, /*Function pointer to get glyph's bitmap*/
    .line_height = 17,                              /*The maximum line height required by the font*/
    .base_line = 0,                                 /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_HOR,
#endif
    .dsc = &font_dsc /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};

#endif /*#if FONT_GOTHIC_A1_MEDIUM_H21*/
