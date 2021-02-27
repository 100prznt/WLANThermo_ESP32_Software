/*******************************************************************************
 * Size: 80 px
 * Bpp: 4
 * Opts: --font ../fonts/Roboto/Roboto-Medium.ttf --symbols 0123456789.+- --size 80 --format lvgl --bpp 4 -o Font_Roboto_Medium_h80.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef FONT_ROBOTO_MEDIUM_H80
#define FONT_ROBOTO_MEDIUM_H80 1
#endif

#if FONT_ROBOTO_MEDIUM_H80

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t gylph_bitmap[] = {
    /* U+002B "+" */
    0x0, 0xff, 0xe1, 0x92, 0xaf, 0xe4, 0x0, 0xff,
    0xe9, 0x25, 0x57, 0xe8, 0x0, 0xff, 0xff, 0x80,
    0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff,
    0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3,
    0xff, 0xfe, 0x1, 0xff, 0xe6, 0x3a, 0xaf, 0xfe,
    0x18, 0x7, 0xe2, 0xaa, 0xff, 0xe1, 0x33, 0x15,
    0x7f, 0xf8, 0x46, 0x1, 0xf8, 0x55, 0x7f, 0xf8,
    0x58, 0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80,
    0x7f, 0xff, 0xc0, 0x3f, 0xfd, 0x6b, 0xff, 0xff,
    0xc2, 0x90, 0xf, 0xc7, 0xff, 0xff, 0xc2, 0xa0,
    0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3, 0xff,
    0xfe, 0x1, 0xff, 0xff, 0x0, 0xff, 0xff, 0x80,
    0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f, 0xff,
    0xf0, 0xf, 0xfe, 0xe0,

    /* U+002D "-" */
    0x2a, 0xaf, 0xfe, 0x41, 0xa, 0xaf, 0xff, 0x21,
    0x80, 0x3f, 0xff, 0xe0, 0x1f, 0xfe, 0xd0,

    /* U+002E "." */
    0x0, 0xc8, 0xca, 0x60, 0x1e, 0x8f, 0xb9, 0xac,
    0xd3, 0x0, 0xa5, 0xc0, 0x38, 0xb0, 0xc0, 0xd8,
    0x3, 0xf7, 0x85, 0x80, 0x7f, 0x19, 0x18, 0x7,
    0xf9, 0x84, 0x3, 0xfe, 0xd0, 0xf, 0xf2, 0xb0,
    0x7, 0xf2, 0x88, 0xac, 0x3, 0xe3, 0xa0, 0x2,
    0x6b, 0x8, 0x0, 0xe3, 0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0xff, 0xe1, 0x1b, 0x44, 0x26, 0x50, 0xe8,
    0x40, 0x1f, 0xfc, 0xc1, 0x7c, 0xfc, 0x97, 0x73,
    0x31, 0xe2, 0xf7, 0xa4, 0xc0, 0x3f, 0xf8, 0xe3,
    0x1d, 0x6, 0x1, 0xff, 0xb, 0x66, 0x10, 0x3,
    0xff, 0x88, 0x9e, 0xe0, 0x1f, 0xfc, 0x53, 0xb9,
    0x0, 0xff, 0xe1, 0x35, 0x88, 0x7, 0xff, 0x21,
    0xb0, 0x40, 0x3f, 0xe6, 0x90, 0xf, 0xfe, 0x59,
    0xe8, 0x7, 0xf9, 0x24, 0x3, 0xff, 0x9a, 0x74,
    0x1, 0xfd, 0x40, 0x1f, 0xfc, 0xf5, 0x60, 0xf,
    0xa0, 0x40, 0x3f, 0x85, 0xaf, 0x7f, 0xb2, 0x8,
    0x3, 0xfd, 0x0, 0x1e, 0x17, 0x0, 0xfe, 0x4f,
    0x94, 0x20, 0x13, 0x7d, 0x80, 0xf, 0xe1, 0x80,
    0xe, 0x90, 0xf, 0xe4, 0xb1, 0x0, 0xfc, 0xf6,
    0x1, 0xfc, 0xc0, 0x1c, 0xc0, 0x1f, 0x8a, 0xc0,
    0x3f, 0xe4, 0x70, 0xf, 0xc2, 0xa0, 0x11, 0x88,
    0x7, 0xeb, 0x0, 0xff, 0xe0, 0xc0, 0x80, 0x7e,
    0xf0, 0xa, 0xc0, 0x3f, 0xb, 0x0, 0x7f, 0xf0,
    0x98, 0x3, 0xf2, 0x80, 0x48, 0x1, 0xf9, 0x0,
    0x3f, 0xf8, 0x76, 0x1, 0xfc, 0x60, 0x3, 0x0,
    0xfd, 0xe0, 0x1f, 0xfc, 0x33, 0x10, 0xf, 0xc8,
    0x6, 0x1, 0xfc, 0xe0, 0x1f, 0xfc, 0x45, 0x0,
    0xfd, 0xa0, 0xc0, 0x1f, 0xc4, 0x1, 0xff, 0xc4,
    0x20, 0xf, 0xcc, 0x1a, 0x1, 0xf8, 0x80, 0x3f,
    0xf8, 0xbe, 0x1, 0xf8, 0xc0, 0x80, 0x3f, 0x30,
    0x7, 0xff, 0x14, 0xc0, 0x3f, 0xc2, 0x1, 0xf8,
    0x40, 0x3f, 0xf8, 0xa2, 0x1, 0xfc, 0x4e, 0x1,
    0xf8, 0xc0, 0x3f, 0xf8, 0xae, 0x1, 0xfc, 0x22,
    0x0, 0xff, 0xe7, 0x8, 0x7, 0xf3, 0x80, 0x7f,
    0xf6, 0x8c, 0x3, 0xff, 0xb0, 0x20, 0x1f, 0xff,
    0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc, 0x3,
    0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0xe3, 0x0,
    0xff, 0xec, 0x8, 0x7, 0xff, 0x68, 0x40, 0x3f,
    0xf9, 0xc2, 0x1, 0xfc, 0xee, 0x0, 0xfc, 0x60,
    0x1f, 0xfc, 0xf1, 0x10, 0x7, 0xe1, 0x0, 0xff,
    0xe2, 0xb8, 0x7, 0xf1, 0x90, 0x7, 0xe6, 0x0,
    0xff, 0xe2, 0x90, 0x7, 0xf0, 0xf0, 0x7, 0xe2,
    0x0, 0xff, 0xe2, 0xf0, 0x7, 0xe2, 0x5, 0x0,
    0xfe, 0x10, 0xf, 0xfe, 0x21, 0x80, 0x7e, 0x70,
    0x20, 0xf, 0xe4, 0x0, 0xff, 0xe2, 0x28, 0x7,
    0xed, 0x1, 0x20, 0xf, 0xd8, 0x1, 0xff, 0xc3,
    0x21, 0x0, 0xfc, 0x60, 0x4, 0x0, 0xfc, 0xe0,
    0x1f, 0xfc, 0x35, 0x0, 0xfe, 0x40, 0x6, 0x80,
    0x7e, 0x14, 0x0, 0xff, 0xe1, 0x50, 0x7, 0xe4,
    0x0, 0x90, 0x3, 0xfa, 0x0, 0x3f, 0xf8, 0x2a,
    0x40, 0x1f, 0xb4, 0x3, 0x30, 0x7, 0xe3, 0x80,
    0xf, 0xf8, 0x6c, 0x3, 0xf9, 0xc0, 0x35, 0x80,
    0x7f, 0x3b, 0x80, 0x3f, 0x87, 0x44, 0x3, 0xf3,
    0x8, 0x6, 0x25, 0x0, 0xfe, 0x8b, 0x30, 0xf,
    0x37, 0x98, 0x7, 0xf5, 0x80, 0x7a, 0xc0, 0x3f,
    0xc9, 0x9b, 0x73, 0x59, 0xf2, 0x20, 0x1f, 0xce,
    0x40, 0x1e, 0x19, 0x0, 0xff, 0x89, 0x19, 0x4c,
    0x3, 0xfe, 0x28, 0x0, 0xfc, 0xcc, 0x0, 0xff,
    0xe7, 0x78, 0x7, 0xfa, 0x54, 0x3, 0xff, 0x99,
    0x64, 0x1, 0xff, 0x53, 0x80, 0x7f, 0xf2, 0x47,
    0x10, 0x3, 0xff, 0x83, 0x16, 0x40, 0x1f, 0xfc,
    0x66, 0xe3, 0x0, 0xff, 0xe1, 0xa6, 0xd1, 0x80,
    0x7f, 0xf0, 0x9b, 0x64, 0x3, 0xff, 0x8e, 0xb9,
    0xb2, 0xc6, 0x20, 0x10, 0x92, 0x3d, 0xfc, 0x90,
    0x7, 0xf8,

    /* U+0031 "1" */
    0x0, 0xff, 0xf0, 0x1c, 0x77, 0x80, 0x7f, 0xf1,
    0x45, 0xf7, 0x1c, 0x40, 0x3f, 0xf8, 0x8b, 0x7d,
    0x4, 0x1, 0xff, 0xc4, 0x39, 0xfa, 0x40, 0xf,
    0xfe, 0x21, 0x46, 0xe3, 0x0, 0x7f, 0xf1, 0x5,
    0xb3, 0x5c, 0x80, 0x3f, 0xf8, 0x89, 0x5d, 0x26,
    0x1, 0xff, 0xc4, 0x39, 0xeb, 0x50, 0xf, 0xfe,
    0x33, 0x63, 0x8, 0x7, 0xff, 0x20, 0x40, 0x3f,
    0xfe, 0x8, 0x80, 0xf, 0xfe, 0x3a, 0x4f, 0x5e,
    0x0, 0x7f, 0xf1, 0xe, 0x7a, 0xd8, 0x40, 0x3f,
    0xf8, 0x67, 0x1d, 0x8c, 0x20, 0x1f, 0xfc, 0x21,
    0x28, 0xdc, 0x71, 0x0, 0xff, 0xe2, 0xb6, 0xb9,
    0x0, 0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0, 0x1f,
    0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff, 0xfc,
    0x3, 0xff, 0xfe, 0x1, 0xff, 0xff, 0x0, 0xff,
    0xff, 0x80, 0x7f, 0xff, 0xc0, 0x3f, 0xff, 0xe0,
    0x1f, 0xff, 0xf0, 0xf, 0xff, 0xf8, 0x7, 0xff,
    0xfc, 0x3, 0x80,

    /* U+0032 "2" */
    0x0, 0xff, 0xe1, 0xa, 0x34, 0x42, 0x65, 0xc,
    0xa4, 0x1, 0xff, 0xce, 0x49, 0xee, 0x5c, 0xbb,
    0x99, 0x8f, 0x35, 0xbd, 0x4a, 0x1, 0xff, 0xc9,
    0x6d, 0xb6, 0x10, 0xf, 0xf8, 0x56, 0xb9, 0xc0,
    0x3f, 0xf8, 0xa7, 0x92, 0x40, 0x1f, 0xfc, 0x51,
    0x8d, 0x30, 0xf, 0xfe, 0x13, 0xe1, 0x80, 0x7f,
    0xf2, 0x4b, 0x18, 0x3, 0xff, 0x81, 0x30, 0x1,
    0xff, 0xcd, 0x97, 0x0, 0xff, 0x43, 0x0, 0x7f,
    0xf3, 0xe1, 0x40, 0x3f, 0x2b, 0x80, 0x7f, 0xf4,
    0x6c, 0x40, 0x3c, 0x36, 0x1, 0xff, 0x2d, 0x6f,
    0x7f, 0x5b, 0x88, 0x7, 0xf8, 0x60, 0x3, 0xd6,
    0x20, 0x1f, 0xcb, 0xb4, 0xa4, 0x20, 0x29, 0x1e,
    0xa0, 0x1f, 0xe6, 0x10, 0xc, 0x4a, 0x1, 0xfc,
    0xf4, 0x40, 0x1f, 0x86, 0x9c, 0x3, 0xfc, 0xe0,
    0x1a, 0x80, 0x3f, 0x92, 0x0, 0x3f, 0xf8, 0x10,
    0x60, 0x1f, 0xda, 0x1, 0x98, 0x3, 0xfa, 0x80,
    0x3f, 0xf8, 0x5e, 0x1, 0xfc, 0x80, 0x11, 0x88,
    0x7, 0xe6, 0x10, 0xf, 0xfe, 0x11, 0x98, 0x3,
    0xf8, 0x40, 0xa, 0x1, 0xfd, 0x40, 0x1f, 0xfc,
    0x44, 0x0, 0xfe, 0x20, 0x7, 0x80, 0x7f, 0x18,
    0x7, 0xff, 0x13, 0x40, 0x3f, 0x9c, 0x0, 0x40,
    0x1f, 0x8c, 0x3, 0xff, 0x8a, 0x20, 0x1f, 0xce,
    0x0, 0x70, 0xf, 0xce, 0x1, 0xff, 0xcf, 0x10,
    0x5, 0x3b, 0xfe, 0xe0, 0xf, 0xfe, 0x28, 0x80,
    0x7f, 0x18, 0x1, 0xa2, 0x3f, 0x28, 0x7, 0xff,
    0x17, 0x40, 0x3f, 0x10, 0x80, 0x7f, 0xf4, 0x50,
    0x3, 0xf3, 0x80, 0x7f, 0xf4, 0x48, 0xc0, 0x3f,
    0x70, 0x7, 0xff, 0x46, 0xc0, 0x3f, 0x90, 0x3,
    0xff, 0xa0, 0x4c, 0x1, 0xf9, 0xc0, 0x3f, 0xfa,
    0x3c, 0x1, 0xfd, 0x20, 0x1f, 0xfd, 0x7, 0x30,
    0xf, 0xcc, 0x20, 0x1f, 0xfc, 0xf3, 0x80, 0xf,
    0xc3, 0x0, 0x1f, 0xfc, 0xf1, 0xd0, 0xf, 0xe8,
    0x10, 0xf, 0xfe, 0x7e, 0x88, 0x7, 0xe4, 0x60,
    0xf, 0xfe, 0x7d, 0x18, 0x7, 0xe1, 0xa0, 0xf,
    0xfe, 0x7c, 0x28, 0x7, 0xf5, 0x8, 0x7, 0xff,
    0x39, 0x9c, 0x3, 0xfa, 0x10, 0x3, 0xff, 0x9c,
    0xb2, 0x1, 0xfc, 0xae, 0x1, 0xff, 0xce, 0x4a,
    0x0, 0xfe, 0x3a, 0x0, 0xff, 0xe7, 0x1d, 0x80,
    0x7f, 0x16, 0x80, 0x7f, 0xf3, 0x8b, 0x40, 0x3f,
    0x87, 0xc4, 0x3, 0xff, 0x9a, 0x38, 0x20, 0x1f,
    0x87, 0x8, 0x3, 0xff, 0x9a, 0x38, 0x20, 0x1f,
    0xda, 0x40, 0x1f, 0xfc, 0xed, 0x20, 0xf, 0xeb,
    0x30, 0xf, 0xfe, 0x75, 0x98, 0x7, 0xf5, 0x20,
    0x7, 0xff, 0x3a, 0x90, 0x3, 0xfa, 0x54, 0x3,
    0xff, 0x9d, 0x2a, 0x1, 0xfd, 0xc, 0x1, 0xff,
    0xce, 0x76, 0x0, 0xfe, 0x77, 0x0, 0x7f, 0xf3,
    0x9a, 0x0, 0x3f, 0x9a, 0x0, 0x3f, 0xf9, 0xcb,
    0x20, 0x1f, 0xcb, 0x20, 0x1f, 0xfc, 0xe4, 0xa0,
    0xf, 0xe4, 0xa0, 0xf, 0xfe, 0x71, 0xd8, 0x7,
    0xf2, 0x58, 0x7, 0xff, 0x38, 0xb4, 0x3, 0xf8,
    0xec, 0x3, 0xff, 0x9c, 0x38, 0x20, 0x1f, 0x8b,
    0x40, 0x3f, 0xf9, 0xc3, 0x82, 0x1, 0xf8, 0xb0,
    0x40, 0x3f, 0xf9, 0xda, 0x40, 0x1f, 0xcd, 0x13,
    0x3f, 0xfc, 0xc4, 0xa, 0x30, 0xf, 0xf2, 0x33,
    0x7f, 0xf3, 0x70, 0x4, 0x3, 0xff, 0xfe, 0x1,
    0xff, 0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xf0,
    0x40,

    /* U+0033 "3" */
    0x0, 0xff, 0xe1, 0x1a, 0xbc, 0x4c, 0xa1, 0xd4,
    0xc0, 0x3f, 0xf9, 0xad, 0x7f, 0x95, 0xe, 0xcc,
    0x78, 0xac, 0xfc, 0x71, 0x0, 0xff, 0xe3, 0xc,
    0xfc, 0xa0, 0x7, 0xff, 0x0, 0xe3, 0xa8, 0x80,
    0x3f, 0xf8, 0x6f, 0xcc, 0x1, 0xff, 0xc6, 0x5d,
    0x80, 0xf, 0xfe, 0x0, 0xdc, 0x0, 0x7f, 0xf2,
    0x9f, 0x4, 0x3, 0xf8, 0x71, 0x0, 0x3f, 0xf9,
    0x87, 0x82, 0x1, 0xfb, 0x8, 0x3, 0xff, 0x9c,
    0x5a, 0x1, 0xf5, 0x10, 0x7, 0xff, 0x40, 0xe0,
    0x3, 0x91, 0x40, 0x3f, 0xc2, 0xf7, 0xdf, 0xee,
    0xb7, 0x10, 0xf, 0xf3, 0x90, 0x6, 0x90, 0xf,
    0xf3, 0xf4, 0x20, 0x80, 0x5, 0x23, 0x98, 0x3,
    0xfd, 0x60, 0x12, 0x10, 0x7, 0xf5, 0x40, 0x7,
    0xfa, 0x60, 0x3, 0xf9, 0x80, 0x2e, 0x0, 0xfe,
    0x75, 0x0, 0xff, 0xe0, 0x3a, 0x0, 0x7f, 0x28,
    0x1, 0x0, 0x3f, 0xc, 0x0, 0x7f, 0xf0, 0xbc,
    0x3, 0xfb, 0x40, 0x44, 0x1, 0xf9, 0x80, 0x3f,
    0xf8, 0x68, 0x20, 0x1f, 0x8c, 0x14, 0x3, 0xfb,
    0x0, 0x3f, 0xf8, 0x88, 0x1, 0xf9, 0x40, 0x40,
    0x3f, 0x98, 0x3, 0xff, 0x88, 0x60, 0x1f, 0x84,
    0x17, 0xbb, 0xf8, 0x80, 0x3f, 0xf8, 0x82, 0x1,
    0xff, 0x8, 0xff, 0x0, 0x7f, 0xf3, 0x84, 0x3,
    0xff, 0xa0, 0x40, 0x1f, 0x8c, 0x3, 0xff, 0xa0,
    0xe0, 0x1f, 0x90, 0x3, 0xff, 0x9e, 0x44, 0x0,
    0xfd, 0x80, 0x1f, 0xfc, 0xf8, 0x0, 0xfc, 0x2a,
    0x1, 0xff, 0xce, 0x55, 0x0, 0x7e, 0x90, 0xf,
    0xfe, 0x73, 0x50, 0x7, 0xe2, 0x70, 0xf, 0xfe,
    0x62, 0x5c, 0x80, 0x7f, 0x78, 0x7, 0xff, 0xd,
    0x5d, 0xfa, 0x26, 0xfe, 0xd0, 0x3, 0xfa, 0xc8,
    0x3, 0xff, 0x87, 0x31, 0x1c, 0xec, 0x80, 0x1f,
    0xf5, 0xa0, 0x7, 0xff, 0x58, 0xb5, 0x0, 0x3f,
    0xfa, 0xa3, 0x1a, 0x40, 0x1f, 0xfd, 0x62, 0x20,
    0x7, 0xff, 0x60, 0xeb, 0x94, 0x3, 0xff, 0xb0,
    0x35, 0x60, 0x1f, 0xfd, 0x94, 0xd1, 0x0, 0xff,
    0xe1, 0xe7, 0xff, 0xbb, 0x25, 0x40, 0x3f, 0xc5,
    0xa0, 0x1f, 0xfc, 0xa1, 0x36, 0xae, 0x60, 0xf,
    0xe3, 0x90, 0xf, 0xfe, 0x68, 0xcd, 0x80, 0x7f,
    0x31, 0x80, 0x7f, 0xf3, 0x92, 0x80, 0x3f, 0xa4,
    0x3, 0xff, 0x9e, 0xa8, 0x1, 0xf9, 0x44, 0x3,
    0xff, 0x9f, 0xe0, 0x1f, 0xc8, 0x1, 0xff, 0xcf,
    0x40, 0xf, 0xed, 0x0, 0xff, 0xe8, 0x18, 0x7,
    0xe3, 0x0, 0xff, 0xe8, 0x38, 0x7, 0xe7, 0x0,
    0xff, 0xe8, 0x8, 0x7, 0xf6, 0xff, 0xfe, 0x90,
    0xf, 0xfe, 0x30, 0x80, 0x7f, 0xf1, 0x88, 0x3,
    0xff, 0x8c, 0xc0, 0x1f, 0x9d, 0x80, 0x3f, 0x28,
    0x7, 0xff, 0x14, 0x48, 0x3, 0xf1, 0x98, 0x3,
    0xf0, 0xa0, 0x7, 0xff, 0x11, 0xc0, 0x3f, 0xb7,
    0x40, 0x1f, 0xd0, 0x1, 0xff, 0xc4, 0x80, 0xf,
    0xe4, 0x50, 0xf, 0xe3, 0x90, 0xf, 0xfe, 0x15,
    0x8, 0x7, 0xe3, 0x10, 0x60, 0xf, 0xe6, 0x90,
    0xf, 0xfe, 0x5, 0x28, 0x7, 0xf4, 0x80, 0x2c,
    0x3, 0xfc, 0xda, 0xc0, 0x1f, 0xb, 0xf2, 0x80,
    0x7f, 0x12, 0x80, 0x9, 0xc0, 0x3f, 0xc5, 0x3f,
    0x95, 0x32, 0xbd, 0xe8, 0x10, 0xf, 0xf7, 0x0,
    0x68, 0x30, 0xf, 0xfe, 0x1, 0xab, 0x31, 0x8,
    0x3, 0xff, 0x81, 0x6, 0x1, 0xda, 0x40, 0x1f,
    0xfd, 0x6, 0x70, 0xf, 0xe, 0x20, 0x7, 0xff,
    0x39, 0xe4, 0x3, 0xf0, 0xdb, 0x80, 0x7f, 0xf2,
    0xc6, 0xe0, 0x3, 0xfe, 0x8d, 0x40, 0xf, 0xfe,
    0x43, 0x7a, 0x0, 0x7f, 0xf0, 0x4a, 0xf1, 0x80,
    0x3f, 0xf8, 0x65, 0x1d, 0x22, 0x1, 0xff, 0xc4,
    0x39, 0xfc, 0x85, 0x31, 0x0, 0xc4, 0x6d, 0x3b,
    0xa7, 0x10, 0xf, 0xe0,

    /* U+0034 "4" */
    0x0, 0xff, 0xe6, 0x67, 0xff, 0xf3, 0x0, 0x7f,
    0xf4, 0x98, 0xc0, 0x3f, 0xfb, 0x63, 0x20, 0x1f,
    0xfd, 0xcb, 0x0, 0xff, 0xee, 0x2a, 0x80, 0x3f,
    0xfb, 0x63, 0x60, 0x1f, 0xfd, 0xc8, 0x10, 0xf,
    0xfe, 0xda, 0x30, 0x7, 0xff, 0x72, 0x40, 0x3f,
    0xfb, 0x90, 0x40, 0x1f, 0xfd, 0xb3, 0x70, 0xf,
    0xfe, 0xe7, 0x80, 0x7f, 0xf7, 0x1c, 0xc0, 0x3f,
    0xfb, 0x65, 0x0, 0x1f, 0x30, 0x7, 0xff, 0x52,
    0x40, 0x3e, 0x2b, 0x0, 0xff, 0xe9, 0xb2, 0x0,
    0x7d, 0xc0, 0x1f, 0xfd, 0x31, 0x80, 0xf, 0x98,
    0xc0, 0x3f, 0xfa, 0x76, 0x20, 0x1e, 0x18, 0x0,
    0xff, 0xe9, 0xaa, 0x80, 0x3e, 0xb1, 0x0, 0xff,
    0xe9, 0xd8, 0x7, 0xc8, 0xa0, 0x1f, 0xfd, 0x39,
    0x10, 0xf, 0xa8, 0x3, 0xff, 0xa6, 0x6c, 0x1,
    0xf4, 0x88, 0x7, 0xff, 0x4f, 0x80, 0x3e, 0x36,
    0x0, 0xff, 0xe9, 0xc1, 0x0, 0x7d, 0xc0, 0x1f,
    0xfd, 0x32, 0x70, 0xf, 0x9c, 0x80, 0x3f, 0xfa,
    0x7c, 0x1, 0xf1, 0x40, 0x7, 0xff, 0x4d, 0xcc,
    0x3, 0xe9, 0x0, 0xff, 0xe9, 0x94, 0x0, 0x7c,
    0xa8, 0x1, 0xff, 0xd3, 0x90, 0xf, 0x86, 0xc0,
    0x3f, 0xfa, 0x6c, 0x80, 0x1f, 0x58, 0x80, 0x7f,
    0xf4, 0x86, 0x0, 0x3e, 0x45, 0x0, 0xff, 0xe9,
    0xd8, 0x80, 0x7d, 0x20, 0x1f, 0xfd, 0x34, 0x50,
    0xf, 0xa0, 0x80, 0x3f, 0xfa, 0x74, 0x1, 0xf1,
    0xb8, 0x7, 0xff, 0x4e, 0x44, 0x3, 0xef, 0x0,
    0xff, 0xe9, 0x9b, 0x0, 0x7c, 0xc6, 0x1, 0xff,
    0xd3, 0xe0, 0xf, 0xc7, 0x33, 0xff, 0xc1, 0x80,
    0xf, 0xea, 0x99, 0xf2, 0x41, 0x0, 0x7e, 0x56,
    0x6f, 0xfe, 0xa, 0x80, 0x7f, 0x1b, 0x37, 0x8d,
    0xc0, 0x3f, 0xfb, 0xa2, 0x1, 0xff, 0xdd, 0x30,
    0xf, 0xfe, 0xe8, 0x80, 0x7f, 0xff, 0xc0, 0x3f,
    0x38, 0x7, 0xff, 0x76, 0xff, 0xff, 0xf9, 0x7a,
    0x1, 0xfd, 0x3f, 0xfe, 0x70, 0xf, 0xff, 0xf8,
    0x7, 0xff, 0xfc, 0x3, 0xff, 0xfe, 0x1, 0xff,
    0xff, 0x0, 0xff, 0xff, 0x80, 0x7f, 0xff, 0xc0,
    0x3f, 0xfb, 0x6, 0xef, 0xfc, 0xa0, 0x1f, 0x0,

    /* U+0035 "5" */
    0x0, 0xc5, 0xff, 0xff, 0xd2, 0x70, 0xf, 0x30,
    0x7, 0xff, 0x64, 0x80, 0x3f, 0xfb, 0x22, 0x1,
    0xff, 0xd9, 0xe0, 0xf, 0xfe, 0xc9, 0x0, 0x7f,
    0xf6, 0x5c, 0x3, 0xff, 0xb2, 0x40, 0x1f, 0xfd,
    0x91, 0x0, 0xf8, 0xf3, 0x3f, 0xf9, 0x4c, 0x1,
    0xc2, 0x1, 0xf9, 0x8c, 0xff, 0xf9, 0x42, 0x1,
    0xc4, 0x1, 0xf8, 0x80, 0x3f, 0xfa, 0xc, 0x1,
    0xfb, 0x80, 0x3f, 0xfa, 0x4, 0x1, 0xf8, 0x80,
    0x3f, 0xfa, 0x1e, 0x1, 0xf9, 0xc0, 0x3f, 0xfa,
    0x4, 0x1, 0xf8, 0x80, 0x3f, 0xfa, 0xc, 0x1,
    0xf8, 0x40, 0x3f, 0xfa, 0x2, 0x1, 0xf1, 0x0,
    0x7f, 0xf4, 0x48, 0x3, 0xe6, 0x0, 0xff, 0xe8,
    0x8, 0x7, 0xe1, 0x0, 0xff, 0xe8, 0x18, 0x7,
    0xe2, 0x0, 0xff, 0xe8, 0x30, 0x7, 0xee, 0x0,
    0x13, 0x56, 0x77, 0xfd, 0xb7, 0x8, 0x1, 0xff,
    0xc2, 0x20, 0xf, 0xc6, 0xb9, 0xb2, 0xa6, 0x20,
    0x11, 0x23, 0xdf, 0xc9, 0x0, 0x7f, 0xdc, 0x1,
    0xfa, 0xe8, 0xc0, 0x3f, 0xf8, 0x2d, 0xb2, 0x1,
    0xfe, 0x10, 0xf, 0xc2, 0x1, 0xff, 0xc5, 0x6d,
    0x20, 0xf, 0xc4, 0x1, 0xff, 0xcf, 0x2c, 0x20,
    0xf, 0x98, 0x3, 0xff, 0xa0, 0x38, 0x20, 0x1e,
    0x30, 0xf, 0xfe, 0x88, 0xe8, 0x7, 0x84, 0x3,
    0xff, 0x80, 0x68, 0xa8, 0x60, 0x1f, 0xfc, 0x13,
    0x60, 0xc, 0x40, 0x1f, 0xe4, 0xbf, 0xcb, 0xab,
    0xcf, 0xb4, 0x0, 0xff, 0xa0, 0x3, 0x15, 0xb9,
    0x80, 0x70, 0xdd, 0x90, 0x3, 0xe4, 0xbb, 0x0,
    0x7f, 0x85, 0xc0, 0x32, 0x46, 0x7d, 0xb9, 0x9b,
    0xd0, 0x3, 0xfe, 0x4c, 0x10, 0xf, 0xea, 0x0,
    0xfc, 0x91, 0x98, 0x10, 0xf, 0xfe, 0x9, 0xd8,
    0x7, 0xf1, 0x18, 0x7, 0xff, 0x39, 0x54, 0x1,
    0xfc, 0x80, 0x1f, 0xfc, 0xf9, 0x0, 0xfe, 0xc0,
    0xf, 0xfe, 0x79, 0x90, 0x7, 0xe5, 0x0, 0xff,
    0xe8, 0x20, 0x7, 0xe1, 0x0, 0xff, 0xe8, 0x78,
    0x7, 0xf1, 0x0, 0x7f, 0xf3, 0xcc, 0x3, 0xf8,
    0x40, 0x3f, 0xf9, 0xec, 0x1, 0xff, 0xd9, 0x70,
    0xf, 0xfe, 0xc8, 0x80, 0x7f, 0x84, 0x7f, 0x80,
    0x3f, 0xf8, 0xc6, 0x1, 0xfc, 0x3f, 0xdd, 0xf9,
    0x40, 0x3f, 0xf8, 0xbe, 0x1, 0xfc, 0x44, 0x0,
    0xfd, 0xa0, 0x1f, 0xfc, 0x54, 0x0, 0xfc, 0x20,
    0xa0, 0x1f, 0x94, 0x3, 0xff, 0x88, 0x44, 0x0,
    0xfc, 0x81, 0xe0, 0x1f, 0x88, 0xc0, 0x3f, 0xf8,
    0x76, 0x1, 0xfd, 0x80, 0xe0, 0x1f, 0xde, 0x1,
    0xff, 0xc2, 0x26, 0x0, 0xfe, 0x40, 0x13, 0x0,
    0xfc, 0x70, 0x1, 0xff, 0xc1, 0xe0, 0xf, 0xe3,
    0x20, 0x4, 0x80, 0x7f, 0x3c, 0x0, 0x7f, 0x87,
    0xc, 0x3, 0xfa, 0x40, 0x25, 0x30, 0xf, 0xe7,
    0xd5, 0x0, 0xf0, 0xb7, 0x98, 0x7, 0xf1, 0xa8,
    0x6, 0xe0, 0xf, 0xf1, 0x57, 0xe5, 0x4d, 0x67,
    0x48, 0x80, 0x7f, 0xbc, 0x3, 0x8a, 0x40, 0x3f,
    0xf8, 0x6, 0xac, 0xa6, 0x1, 0xff, 0xc0, 0x83,
    0x0, 0xf3, 0x38, 0x7, 0xff, 0x3d, 0x9c, 0x3,
    0xf4, 0x40, 0x3, 0xff, 0x9a, 0xd2, 0x1, 0xfe,
    0x7b, 0x10, 0xf, 0xfe, 0x54, 0xc8, 0x3, 0xff,
    0x80, 0x9e, 0xc0, 0x1f, 0xfc, 0x74, 0xd6, 0x0,
    0xff, 0xe1, 0xc, 0xeb, 0x88, 0x7, 0xff, 0x9,
    0x72, 0xc8, 0x3, 0xff, 0x8a, 0x51, 0xd9, 0xa,
    0x62, 0x1, 0x9, 0x23, 0xdf, 0xd1, 0x80, 0x7f,
    0x80,

    /* U+0036 "6" */
    0x0, 0xff, 0xe4, 0x9b, 0x45, 0x66, 0xeb, 0xac,
    0x3, 0xff, 0x9c, 0x2d, 0x7f, 0x92, 0xea, 0x64,
    0x41, 0x70, 0xf, 0xfe, 0x61, 0xd7, 0x4a, 0x0,
    0x7f, 0xf5, 0xa, 0xf1, 0x40, 0x3f, 0xfa, 0xd1,
    0xa8, 0x1, 0xff, 0xd6, 0x1c, 0x70, 0xf, 0xfe,
    0xb9, 0xf9, 0x80, 0x7f, 0xf5, 0xcb, 0x44, 0x3,
    0xff, 0xae, 0x58, 0x20, 0x1f, 0xfc, 0x3, 0x7a,
    0xce, 0xff, 0x60, 0x7, 0xff, 0x13, 0xc4, 0x3,
    0xfc, 0x53, 0xd9, 0xa, 0x62, 0x1, 0xff, 0xc6,
    0xa2, 0x0, 0xfe, 0x19, 0xd6, 0x10, 0xf, 0xfe,
    0x52, 0x28, 0x7, 0xf2, 0x7b, 0x0, 0x7f, 0xf3,
    0x64, 0x3, 0xf9, 0x6c, 0x40, 0x3f, 0xf9, 0xae,
    0x40, 0x1f, 0x92, 0x80, 0x3f, 0xf9, 0xf2, 0x1,
    0xf8, 0xec, 0x3, 0xff, 0x9e, 0xc2, 0x1, 0xfb,
    0x80, 0x3f, 0xfa, 0x16, 0x1, 0xf9, 0x88, 0x3,
    0xff, 0x9e, 0x44, 0x0, 0xfd, 0x0, 0x1f, 0xfd,
    0xa, 0x0, 0xfc, 0xa2, 0x1, 0xff, 0xd0, 0x50,
    0xf, 0xdc, 0x1, 0xc2, 0xaf, 0x33, 0x43, 0xa0,
    0x7, 0xff, 0x8, 0x48, 0x3, 0xe1, 0x40, 0x9,
    0xf7, 0xaa, 0x19, 0xa7, 0x8b, 0xfb, 0x50, 0xf,
    0xf9, 0x0, 0x3f, 0x28, 0x1, 0xfe, 0x8, 0x3,
    0xfc, 0x95, 0xa8, 0x1, 0xfd, 0xa0, 0x1f, 0x8c,
    0x72, 0x0, 0x3f, 0xf8, 0x65, 0x70, 0x1, 0xf8,
    0xc0, 0x3f, 0xbc, 0xc0, 0x3f, 0xf8, 0xcf, 0x40,
    0x1f, 0x28, 0x7, 0xe7, 0x10, 0xf, 0xfe, 0x42,
    0xc8, 0x7, 0x84, 0x3, 0xff, 0xa6, 0xcc, 0x0,
    0xc4, 0x1, 0xff, 0xd5, 0x91, 0x0, 0x84, 0x3,
    0xff, 0x84, 0x2f, 0x9d, 0xfd, 0x8e, 0x20, 0x1f,
    0xf5, 0x80, 0x4e, 0x1, 0xff, 0xc1, 0x9e, 0x83,
    0x10, 0x13, 0x8e, 0x60, 0xf, 0xf2, 0x90, 0x0,
    0x40, 0x3f, 0xe2, 0xd6, 0x0, 0xfe, 0x97, 0x0,
    0xff, 0x58, 0x0, 0xc0, 0x3f, 0xc5, 0x84, 0x1,
    0xff, 0x42, 0x80, 0x7f, 0x38, 0x7, 0xff, 0x7,
    0x84, 0x3, 0xff, 0x83, 0x62, 0x1, 0xf8, 0x4c,
    0x3, 0xfe, 0x73, 0x0, 0xff, 0xe1, 0xc, 0x80,
    0x7f, 0x58, 0x7, 0xfd, 0x20, 0x1f, 0xfc, 0x46,
    0x0, 0xfe, 0x30, 0xf, 0xfe, 0x80, 0x98, 0x7,
    0xe5, 0x0, 0xff, 0xe8, 0xa8, 0x7, 0xe1, 0x0,
    0xff, 0xe8, 0xf8, 0x7, 0xf0, 0x98, 0x7, 0xff,
    0x3c, 0xc0, 0x3f, 0xc2, 0x1, 0xfc, 0x60, 0x1f,
    0xfc, 0x51, 0x0, 0xfe, 0x36, 0x0, 0xfe, 0x10,
    0xf, 0xfe, 0x28, 0x80, 0x7f, 0x19, 0x0, 0x7f,
    0x28, 0x7, 0xff, 0x14, 0xc0, 0x3f, 0xe2, 0x0,
    0xfd, 0xe0, 0x1f, 0xfc, 0x51, 0x0, 0xfe, 0x10,
    0x70, 0xf, 0xc8, 0x1, 0xff, 0xc5, 0xd0, 0xf,
    0xc4, 0x0, 0xf0, 0xf, 0xc4, 0x60, 0x1f, 0xfc,
    0x44, 0x0, 0xfc, 0xe0, 0x4, 0x0, 0xfe, 0xa0,
    0xf, 0xfe, 0x1a, 0x8, 0x7, 0xec, 0x0, 0xa,
    0x0, 0x7e, 0x62, 0x0, 0xff, 0xe1, 0x78, 0x7,
    0xf2, 0x0, 0x5c, 0x1, 0xfd, 0x20, 0x1f, 0xfc,
    0x15, 0x40, 0xf, 0xc4, 0x40, 0x9, 0x48, 0x3,
    0xf2, 0x40, 0x7, 0xfc, 0x56, 0x1, 0xfd, 0x60,
    0x1d, 0x0, 0x1f, 0xcf, 0x0, 0x1f, 0xc7, 0x82,
    0x1, 0xf8, 0x58, 0x3, 0x95, 0x0, 0x3f, 0x9f,
    0x10, 0x3, 0x8a, 0x30, 0x40, 0x3f, 0xa0, 0x3,
    0xe9, 0x10, 0xf, 0xe3, 0xbe, 0xca, 0xbd, 0xd3,
    0x80, 0x7f, 0x91, 0x80, 0x3e, 0x2a, 0x0, 0xff,
    0x84, 0xd5, 0x8, 0x3, 0xfe, 0x1a, 0x0, 0xfe,
    0x49, 0x0, 0xff, 0xe7, 0x60, 0x80, 0x7f, 0x9a,
    0x40, 0x3f, 0xf9, 0x63, 0x84, 0x1, 0xff, 0xc0,
    0x6b, 0x10, 0xf, 0xfe, 0x41, 0xf9, 0x80, 0x7f,
    0xf0, 0x93, 0xd4, 0x3, 0xff, 0x8d, 0x18, 0x20,
    0x1f, 0xfc, 0x41, 0xac, 0x50, 0xf, 0xfe, 0x9,
    0x47, 0x38, 0x7, 0xff, 0x20, 0xeb, 0xe9, 0x90,
    0x40, 0x21, 0x25, 0x8c, 0xd7, 0x10, 0xf, 0xf0,

    /* U+0037 "7" */
    0x29, 0x9f, 0xfe, 0xd8, 0xb3, 0x7f, 0xf7, 0x0,
    0x3f, 0xff, 0xe0, 0x1f, 0xff, 0xf0, 0xf, 0xff,
    0x52, 0x8, 0x7, 0xff, 0x6f, 0xc1, 0x3f, 0xff,
    0xfa, 0x1a, 0x1, 0xf8, 0x90, 0x3, 0xff, 0xa5,
    0x60, 0x1f, 0xac, 0x3, 0xff, 0xa4, 0x2c, 0x1,
    0xf0, 0xb0, 0x7, 0xff, 0x4a, 0x40, 0x3f, 0x30,
    0x7, 0xff, 0x4d, 0x80, 0x3f, 0x48, 0x7, 0xff,
    0x49, 0xc4, 0x3, 0xe5, 0x10, 0xf, 0xfe, 0x94,
    0x80, 0x7e, 0x90, 0xf, 0xfe, 0x92, 0x88, 0x7,
    0xc8, 0x60, 0x1f, 0xfd, 0x28, 0x0, 0xfd, 0xe0,
    0x1f, 0xfd, 0x24, 0x20, 0xf, 0x89, 0x0, 0x3f,
    0xfa, 0x50, 0x1, 0xfa, 0xc0, 0x3f, 0xfa, 0x46,
    0x60, 0xf, 0x85, 0x80, 0x3f, 0xfa, 0x52, 0x1,
    0xf9, 0x80, 0x3f, 0xfa, 0x44, 0xa0, 0x1f, 0xa4,
    0x3, 0xff, 0xa5, 0x60, 0x1f, 0x94, 0x40, 0x3f,
    0xfa, 0x22, 0xc0, 0x1f, 0xa4, 0x3, 0xff, 0xa5,
    0x20, 0x1f, 0x8c, 0xc0, 0x1f, 0xfd, 0x27, 0x0,
    0xfd, 0x20, 0x1f, 0xfd, 0x27, 0x0, 0xfc, 0x4a,
    0x1, 0xff, 0xd2, 0x90, 0xf, 0xd6, 0x1, 0xff,
    0xd2, 0x61, 0x0, 0xfc, 0xc0, 0x1f, 0xfd, 0x2b,
    0x0, 0xfc, 0xe0, 0x1f, 0xfd, 0x24, 0x20, 0xf,
    0xd2, 0x1, 0xff, 0xd2, 0x80, 0xf, 0xca, 0x20,
    0x1f, 0xfd, 0x13, 0x30, 0x7, 0xe9, 0x0, 0xff,
    0xe9, 0x40, 0x7, 0xe3, 0x30, 0x7, 0xff, 0x44,
    0x90, 0x3, 0xf4, 0x80, 0x7f, 0xf4, 0xa0, 0x3,
    0xf0, 0xa8, 0x7, 0xff, 0x44, 0x54, 0x3, 0xf4,
    0x80, 0x7f, 0xf4, 0xa4, 0x3, 0xf9, 0xc0, 0x3f,
    0xfa, 0x22, 0xe0, 0x1f, 0x98, 0x3, 0xff, 0xa4,
    0xc0, 0x1f, 0xd6, 0x1, 0xff, 0xd2, 0x90, 0xf,
    0xca, 0x40, 0x1f, 0xfd, 0x16, 0x10, 0xf, 0xd2,
    0x1, 0xff, 0xd2, 0xb0, 0xf, 0xc6, 0x60, 0xf,
    0xfe, 0x8a, 0x90, 0x7, 0xe9, 0x0, 0xff, 0xe9,
    0x48, 0x7, 0xe1, 0x50, 0xf, 0xfe, 0x8a, 0x18,
    0x7, 0xe9, 0x0, 0xff, 0xe9, 0x78, 0x7, 0xf3,
    0x0, 0x7f, 0xf4, 0x49, 0x0, 0x3f, 0x30, 0x80,
    0x7f, 0xf4, 0x60, 0x3, 0xfa, 0xc0, 0x3f, 0xfa,
    0x22, 0xa0, 0x1f, 0x90, 0x80, 0x3f, 0xfa, 0x30,
    0x1, 0xfd, 0xe0, 0x1f, 0xfd, 0x11, 0x60, 0xf,
    0xc6, 0x80, 0x1f, 0xfd, 0x16, 0x0, 0xfe, 0x90,
    0xf, 0xfe, 0x94, 0x80, 0x7e, 0x15, 0x0, 0xff,
    0xe8, 0xb0, 0x80, 0x7e, 0x90, 0xf, 0xfe, 0x95,
    0x80, 0x7f, 0x30, 0x7, 0xff, 0x45, 0x48, 0x3,
    0xf3, 0x8, 0x7, 0xff, 0x28,

    /* U+0038 "8" */
    0x0, 0xff, 0xe0, 0x8a, 0x34, 0x4c, 0xd0, 0xea,
    0x40, 0x1f, 0xfc, 0xc1, 0x7c, 0xeb, 0x97, 0x66,
    0x9e, 0x2b, 0x7a, 0x90, 0x3, 0xff, 0x8e, 0x55,
    0xd0, 0x60, 0x1f, 0xf0, 0xad, 0xea, 0x80, 0x7f,
    0xf1, 0x1f, 0x54, 0x3, 0xff, 0x8a, 0x55, 0x62,
    0x1, 0xff, 0xc1, 0xa8, 0x0, 0xff, 0xe4, 0xa7,
    0x98, 0x7, 0xfd, 0x6a, 0x1, 0xff, 0xcb, 0x1c,
    0x30, 0xf, 0xe9, 0x40, 0xf, 0xfe, 0x76, 0x88,
    0x7, 0xc8, 0xc0, 0x1f, 0xfc, 0xf1, 0xa0, 0xf,
    0xa4, 0x3, 0xfe, 0x6b, 0xef, 0xec, 0x81, 0x0,
    0xff, 0x22, 0x0, 0x39, 0x48, 0x3, 0xf8, 0xf6,
    0x50, 0x40, 0x4d, 0xf9, 0x80, 0x3f, 0xd0, 0x1,
    0xdc, 0x1, 0xfc, 0x78, 0x40, 0x1f, 0xa5, 0xc0,
    0x3f, 0x8c, 0x80, 0x32, 0x0, 0x7f, 0x70, 0x7,
    0xfd, 0x6, 0x1, 0xfc, 0xa0, 0x12, 0x0, 0x7f,
    0x29, 0x0, 0x7f, 0xf0, 0x20, 0x3, 0xfb, 0x0,
    0x22, 0x0, 0xfe, 0xe0, 0xf, 0xfe, 0xa, 0x10,
    0x7, 0xe6, 0x0, 0xb8, 0x3, 0xf9, 0x0, 0x3f,
    0xf8, 0x48, 0x1, 0xf8, 0x80, 0x21, 0x0, 0xfc,
    0x20, 0x1f, 0xfc, 0x3e, 0x0, 0xff, 0xe0, 0x18,
    0x7, 0xe3, 0x0, 0xff, 0xe1, 0x88, 0x7, 0xff,
    0x0, 0xc0, 0x3f, 0x18, 0x7, 0xff, 0x43, 0x80,
    0x3f, 0x8, 0x7, 0xff, 0xf, 0x80, 0x3f, 0x8,
    0x4, 0x60, 0x1f, 0xc6, 0x1, 0xff, 0xc2, 0x30,
    0xf, 0xca, 0x1, 0x28, 0x7, 0xf2, 0x0, 0x7f,
    0xf0, 0x90, 0x3, 0xf6, 0x0, 0x42, 0x80, 0x1f,
    0xa4, 0x3, 0xff, 0x82, 0xe0, 0x1f, 0xcc, 0x1,
    0xbc, 0x3, 0xf0, 0xc8, 0x7, 0xfc, 0x50, 0x1,
    0xf9, 0x44, 0x3, 0x22, 0x0, 0x3f, 0x33, 0x80,
    0x7f, 0x17, 0x80, 0x7f, 0x40, 0x7, 0xa4, 0x3,
    0xfa, 0x2c, 0xc0, 0x38, 0x5f, 0x48, 0x3, 0xf4,
    0x10, 0x7, 0x8a, 0xc0, 0x3f, 0x93, 0x3a, 0xea,
    0x99, 0xd0, 0x1, 0xfc, 0xae, 0x1, 0xf9, 0x28,
    0x3, 0xfc, 0x28, 0xaa, 0x30, 0xf, 0xf2, 0x50,
    0x7, 0xf9, 0x6c, 0x40, 0x3f, 0xf9, 0x4f, 0x60,
    0x1f, 0xfc, 0x4, 0xf5, 0x0, 0xff, 0xe3, 0x95,
    0xc0, 0x7, 0xff, 0x8, 0x74, 0x3, 0xff, 0x8e,
    0xcc, 0x0, 0xff, 0xe1, 0x2f, 0x40, 0x7, 0xff,
    0x1d, 0x36, 0x0, 0x3f, 0xf8, 0x13, 0x42, 0x1,
    0xff, 0xca, 0x7d, 0x20, 0xf, 0xeb, 0x60, 0xf,
    0xfe, 0x69, 0x61, 0x0, 0x7d, 0x28, 0x1, 0xfc,
    0x51, 0x9d, 0xfd, 0xb2, 0x80, 0x1f, 0xc3, 0x82,
    0x1, 0xcc, 0xc0, 0xf, 0xe9, 0xd7, 0x31, 0x1,
    0x26, 0xbc, 0x20, 0xf, 0xc3, 0x40, 0x18, 0x60,
    0x3, 0xfb, 0x18, 0x3, 0xf8, 0xf4, 0xc0, 0x3f,
    0x22, 0x80, 0x52, 0x20, 0x1f, 0xac, 0xc0, 0x3f,
    0xf8, 0x1a, 0x40, 0x1f, 0xac, 0x2, 0x60, 0xf,
    0xca, 0x80, 0x1f, 0xfc, 0x11, 0x80, 0xf, 0xc2,
    0xa0, 0xa2, 0x1, 0xfa, 0x40, 0x3f, 0xf8, 0x6a,
    0x40, 0x1f, 0xb8, 0x34, 0x3, 0xf0, 0x98, 0x7,
    0xff, 0x11, 0x40, 0x3f, 0x28, 0x20, 0x7, 0xe5,
    0x0, 0xff, 0xe2, 0xe8, 0x7, 0xe1, 0x21, 0x0,
    0xfc, 0x40, 0x1f, 0xfc, 0x56, 0x0, 0xfe, 0x13,
    0x0, 0xff, 0xe7, 0x8, 0x7, 0xf3, 0x80, 0x7f,
    0x18, 0x7, 0xff, 0x14, 0x40, 0x3f, 0xc6, 0x1,
    0xf9, 0x80, 0x3f, 0xf8, 0xac, 0x1, 0xfc, 0xec,
    0x1, 0xf8, 0xc0, 0x3f, 0xf8, 0xb8, 0x1, 0xfc,
    0x44, 0x0, 0xfe, 0x60, 0xf, 0xfe, 0x23, 0x80,
    0x7f, 0xe, 0x0, 0x7f, 0x58, 0x7, 0xff, 0xd,
    0x84, 0x3, 0xf2, 0x2, 0x80, 0x7f, 0x15, 0x0,
    0x7f, 0xf0, 0x4a, 0x40, 0x3f, 0xb4, 0x0, 0xa0,
    0x1f, 0xcb, 0x40, 0x1f, 0xf1, 0xe0, 0x7, 0xf9,
    0xc0, 0x10, 0x1, 0xfe, 0x5d, 0x60, 0xf, 0x8a,
    0xb0, 0x40, 0x3f, 0x9c, 0x40, 0x4, 0xc0, 0x1f,
    0xe2, 0x9f, 0xca, 0x9a, 0xbe, 0xd5, 0x0, 0xff,
    0xc, 0x80, 0x69, 0x20, 0xf, 0xfe, 0x1, 0xab,
    0x2a, 0x8, 0x7, 0xff, 0x2, 0x84, 0x3, 0xb0,
    0x40, 0x3f, 0xfa, 0x12, 0x80, 0x1e, 0x1f, 0x20,
    0xf, 0xfe, 0x74, 0xb0, 0x7, 0xe1, 0xd5, 0x0,
    0xff, 0xe5, 0x8e, 0x30, 0x7, 0xfd, 0x56, 0x40,
    0x1f, 0xfc, 0x87, 0xe3, 0x0, 0xff, 0xe0, 0xa6,
    0xda, 0x80, 0x7f, 0xf0, 0xca, 0x3a, 0x0, 0x3f,
    0xf8, 0xa9, 0x5f, 0x6e, 0xa6, 0x20, 0x18, 0x8d,
    0xa7, 0x74, 0xe2, 0x1, 0xfc,

    /* U+0039 "9" */
    0x0, 0xff, 0xe1, 0x12, 0xbc, 0x4c, 0xce, 0xa4,
    0x1, 0xff, 0xcd, 0x28, 0xed, 0xa8, 0x76, 0x6a,
    0x2b, 0x75, 0x4, 0x1, 0xff, 0xc8, 0x3b, 0xd7,
    0x10, 0xf, 0xf1, 0x3e, 0xc8, 0x80, 0x7f, 0xf1,
    0x63, 0x10, 0x3, 0xff, 0x88, 0xde, 0xa0, 0x1f,
    0xfc, 0x21, 0xc7, 0x0, 0xff, 0xe3, 0x8d, 0x40,
    0x7, 0xff, 0x0, 0x70, 0xc0, 0x3f, 0xf9, 0x4f,
    0x0, 0x1f, 0xf6, 0x90, 0x7, 0xff, 0x31, 0xd8,
    0x3, 0xfa, 0x4c, 0x3, 0xff, 0x9d, 0x26, 0x1,
    0xf1, 0xb0, 0x7, 0xf8, 0xe7, 0x7f, 0xb6, 0x8,
    0x3, 0xfd, 0xc0, 0x1f, 0x70, 0x7, 0xfa, 0x71,
    0x88, 0x4, 0x9f, 0x5c, 0x3, 0xf8, 0x9c, 0x3,
    0x94, 0x80, 0x3f, 0xad, 0x80, 0x3f, 0x44, 0x80,
    0x7f, 0x48, 0x7, 0x48, 0x7, 0xf4, 0xa0, 0x7,
    0xf9, 0x98, 0x1, 0xf8, 0x58, 0x2, 0x23, 0x0,
    0xfc, 0x6c, 0x1, 0xff, 0xc0, 0x91, 0x0, 0xfd,
    0x60, 0x12, 0x0, 0x7f, 0x40, 0x7, 0xff, 0xa,
    0x0, 0x3f, 0x11, 0x80, 0x34, 0x3, 0xf1, 0x20,
    0x7, 0xff, 0x9, 0x80, 0x3f, 0xac, 0x0, 0xa0,
    0x1f, 0x94, 0x3, 0xff, 0x88, 0xa0, 0x1f, 0x90,
    0x4, 0x40, 0x1f, 0xb4, 0x3, 0xff, 0x89, 0xe0,
    0x1f, 0x8c, 0x8, 0x3, 0xf9, 0xc0, 0x3f, 0xf8,
    0x8e, 0x1, 0xfc, 0x4e, 0x1, 0xfc, 0x60, 0x1f,
    0xfc, 0x42, 0x0, 0xfe, 0x71, 0x0, 0xfe, 0x10,
    0xf, 0xfe, 0x28, 0x80, 0x7e, 0x20, 0xf, 0xfe,
    0x81, 0x80, 0x7e, 0xf0, 0xf, 0xf0, 0x80, 0x7f,
    0xf1, 0x44, 0x3, 0xf1, 0x8, 0x7, 0xf1, 0x0,
    0x7f, 0xf3, 0xd8, 0x3, 0xf9, 0x40, 0x3f, 0xf9,
    0xc2, 0x40, 0x1f, 0xd8, 0x1, 0xff, 0xd0, 0x20,
    0xf, 0xca, 0x1, 0xff, 0xc5, 0x10, 0xf, 0xf2,
    0x0, 0x7f, 0x30, 0x7, 0xff, 0xd, 0x48, 0x3,
    0xfd, 0x80, 0x1f, 0xd0, 0x1, 0xff, 0xc2, 0x1b,
    0x0, 0xfe, 0x10, 0x51, 0x0, 0xfc, 0x34, 0x1,
    0xff, 0xc0, 0x1d, 0x10, 0xf, 0xfe, 0x3, 0x80,
    0x7f, 0x2c, 0x0, 0x7f, 0x8b, 0xc, 0x3, 0xfc,
    0x60, 0x8, 0x0, 0xff, 0x3e, 0x10, 0x7, 0x86,
    0x34, 0x80, 0x3f, 0xf8, 0x42, 0xe0, 0x1f, 0xe3,
    0xdd, 0x4b, 0xba, 0x2f, 0x9c, 0x3, 0xff, 0x83,
    0xc0, 0x14, 0x10, 0x7, 0xfc, 0x4d, 0x10, 0x74,
    0x0, 0xff, 0xe1, 0x88, 0x6, 0xf0, 0xf, 0xfe,
    0xa1, 0x0, 0x62, 0xb0, 0xf, 0xfe, 0x4b, 0x8,
    0x7, 0xe6, 0x0, 0xe4, 0xc1, 0x0, 0xff, 0xe3,
    0x3c, 0x88, 0x7, 0xe2, 0x0, 0xf1, 0xfa, 0x0,
    0x7f, 0xf0, 0xc6, 0xe0, 0x40, 0x3f, 0x18, 0x7,
    0xe1, 0xbb, 0x18, 0x7, 0xfc, 0x31, 0xc8, 0xa,
    0x1, 0xf9, 0x40, 0x3f, 0xc9, 0x9b, 0x2a, 0x42,
    0x0, 0x13, 0x6b, 0xe7, 0x0, 0xb0, 0x3, 0xf6,
    0x0, 0x7f, 0xf0, 0x9, 0xab, 0x7b, 0xfd, 0xd9,
    0x28, 0x1, 0xc8, 0x1, 0xf9, 0x0, 0x3f, 0xf9,
    0xe4, 0x60, 0x1f, 0x18, 0x80, 0x7f, 0xf3, 0xe8,
    0x3, 0xf5, 0x80, 0x7f, 0xf3, 0xc5, 0xc0, 0x3f,
    0x30, 0x7, 0xff, 0x3e, 0x0, 0x3f, 0x20, 0x80,
    0x7f, 0xf3, 0x91, 0x80, 0x3f, 0x40, 0x7, 0xff,
    0x38, 0xec, 0x3, 0xf2, 0x18, 0x7, 0xff, 0x35,
    0x70, 0x3, 0xfa, 0x40, 0x3f, 0xf9, 0x83, 0x54,
    0x0, 0xfe, 0x72, 0x0, 0xff, 0xe5, 0x14, 0xf2,
    0x80, 0x7f, 0x14, 0x0, 0x7f, 0xf1, 0xc9, 0x67,
    0x35, 0x80, 0x3f, 0xef, 0x0, 0xff, 0xe1, 0xe,
    0xeb, 0xbf, 0xdb, 0x4c, 0x60, 0x1f, 0xfc, 0xc,
    0x20, 0xf, 0xfe, 0x11, 0x91, 0x4, 0x3, 0xff,
    0x8b, 0x66, 0x1, 0xff, 0xd6, 0x2d, 0x40, 0xf,
    0xfe, 0xb2, 0xe1, 0x0, 0x7f, 0xf5, 0x4a, 0xe8,
    0x40, 0x3f, 0xfa, 0x87, 0x5a, 0x80, 0x1f, 0xfd,
    0x32, 0x7d, 0xc5, 0x0, 0xff, 0xe7, 0x9, 0x23,
    0x45, 0xf6, 0xc1, 0x0, 0x7f, 0xf1, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 713, .box_w = 40, .box_h = 42, .ofs_x = 2, .ofs_y = 6},
    {.bitmap_index = 108, .adv_w = 420, .box_w = 22, .box_h = 8, .ofs_x = 2, .ofs_y = 20},
    {.bitmap_index = 123, .adv_w = 358, .box_w = 12, .box_h = 11, .ofs_x = 5, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 728, .box_w = 38, .box_h = 59, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 635, .adv_w = 728, .box_w = 24, .box_h = 58, .ofs_x = 6, .ofs_y = 0},
    {.bitmap_index = 766, .adv_w = 728, .box_w = 40, .box_h = 58, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1215, .adv_w = 728, .box_w = 38, .box_h = 59, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 1715, .adv_w = 728, .box_w = 42, .box_h = 57, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2003, .adv_w = 728, .box_w = 38, .box_h = 58, .ofs_x = 5, .ofs_y = -1},
    {.bitmap_index = 2460, .adv_w = 728, .box_w = 39, .box_h = 58, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 2980, .adv_w = 728, .box_w = 41, .box_h = 57, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 3321, .adv_w = 728, .box_w = 38, .box_h = 59, .ofs_x = 4, .ofs_y = -1},
    {.bitmap_index = 3910, .adv_w = 728, .box_w = 38, .box_h = 58, .ofs_x = 3, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 0, 1, 2, 0, 3, 4, 5,
    6, 7, 8, 9, 10, 11, 12
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 43, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 15, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    }
};



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
    .bitmap_format = 1
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
lv_font_t Font_Roboto_Medium_h80 = {
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 59,          /*The maximum line height required by the font*/
    .base_line = 1,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -6,
    .underline_thickness = 4,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if FONT_ROBOTO_MEDIUM_H80*/

