/*******************************************************************************
 * Size: 20 px
 * Bpp: 2
 * Opts: --font DSEG7Classic-BoldItalic.ttf -r 0x20-0x3F --size 20 --format lvgl --bpp 2 -o c_files//seg7_20.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef SEG7_20
#define SEG7_20 1
#endif

#if SEG7_20

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */

    /* U+002D "-" */
    0x2, 0xfc, 0xe, 0xbe, 0x43, 0xf9,

    /* U+002E "." */
    0x2, 0xe, 0x42, 0x40,

    /* U+0030 "0" */
    0xb, 0xff, 0xc1, 0xb4, 0x3f, 0x38, 0x11, 0xaf,
    0xc8, 0x79, 0x7e, 0xc3, 0x61, 0xff, 0xce, 0x43,
    0x21, 0xf2, 0x19, 0xf, 0xfe, 0x26, 0x1f, 0xd8,
    0x52, 0x1f, 0x61, 0xff, 0xc4, 0x42, 0x83, 0xf6,
    0x12, 0x1f, 0xc8, 0x7f, 0xf4, 0x70, 0xd8, 0x7f,
    0xf4, 0xd7, 0xf0, 0x10, 0x95, 0x5f, 0x2b, 0x4,
    0x1f, 0xed, 0x0,

    /* U+0031 "1" */
    0xf, 0x9c, 0xc, 0x16, 0x1f, 0xc8, 0x87, 0xff,
    0x1, 0x30, 0x51, 0x3, 0x20, 0x84, 0x43, 0xfb,
    0xf, 0xf9, 0x6, 0x19, 0xb0, 0x0,

    /* U+0032 "2" */
    0xb, 0xff, 0xc1, 0xd0, 0x7e, 0xa0, 0x66, 0xbf,
    0x90, 0xe5, 0xfb, 0xf, 0xff, 0x2, 0x21, 0xff,
    0xd1, 0xc3, 0x5f, 0xf4, 0x1a, 0x50, 0x7e, 0xd0,
    0x35, 0xfc, 0x87, 0x97, 0xf0, 0x64, 0x3f, 0xfc,
    0x18, 0x7f, 0xf1, 0x17, 0xf0, 0x7c, 0xd7, 0xd8,
    0x69, 0xf, 0xe4, 0x20,

    /* U+0033 "3" */
    0x7, 0xff, 0x83, 0x41, 0xfa, 0x81, 0x35, 0xfc,
    0x86, 0x5f, 0xb0, 0xff, 0xee, 0xa2, 0x1f, 0xfc,
    0xfc, 0x2b, 0xfe, 0x83, 0x90, 0xfb, 0x50, 0x55,
    0xf9, 0x41, 0x97, 0xe0, 0xff, 0xe8, 0x61, 0xff,
    0xd6, 0x5f, 0x80, 0x85, 0xd7, 0xca, 0xc1, 0x7,
    0xf6, 0x80,

    /* U+0034 "4" */
    0xf, 0xfe, 0x1e, 0x1f, 0xce, 0x26, 0x1f, 0x30,
    0x7f, 0xf0, 0x30, 0xb0, 0xff, 0xe5, 0xa2, 0x12,
    0x1f, 0xf2, 0x1f, 0xfc, 0x3d, 0x7e, 0x6, 0x35,
    0xfc, 0xb1, 0x21, 0xfc, 0xa0, 0xbf, 0xf2, 0x21,
    0xfe, 0x43, 0xff, 0x9f, 0x87, 0xff, 0x45, 0xf,
    0xfb, 0xf, 0xfe, 0xb, 0x60,

    /* U+0035 "5" */
    0x7, 0xff, 0x81, 0xa1, 0xfa, 0x11, 0xaf, 0xb4,
    0x32, 0xfc, 0x16, 0x1f, 0xfd, 0xa4, 0x43, 0xff,
    0x98, 0x9f, 0xf0, 0x5c, 0x87, 0xd4, 0xa, 0xbf,
    0x28, 0x25, 0xf8, 0x3f, 0xf9, 0xd8, 0x7f, 0xf4,
    0xd7, 0xe0, 0x20, 0xeb, 0xe5, 0x64, 0x1f, 0xda,
    0x0,

    /* U+0036 "6" */
    0xb, 0xff, 0xc1, 0x68, 0x7e, 0x80, 0x8d, 0x7d,
    0xa1, 0xcb, 0xf0, 0x6c, 0x3f, 0xfb, 0xa8, 0x87,
    0xff, 0x39, 0x3f, 0xe0, 0xce, 0x87, 0xd4, 0x3,
    0x5f, 0xca, 0xc, 0xbf, 0x6, 0x43, 0xff, 0x97,
    0x87, 0xff, 0x17, 0xf, 0xfe, 0x1a, 0xfe, 0x2,
    0x13, 0x5f, 0x2b, 0x24, 0x3f, 0xb4,

    /* U+0037 "7" */
    0x2, 0xff, 0x82, 0x6b, 0xfe, 0x19, 0xf, 0xe4,
    0x27, 0xfe, 0x42, 0xc3, 0xff, 0xb2, 0x88, 0x88,
    0x7f, 0xf2, 0xf0, 0x30, 0x7d, 0x5, 0xc1, 0xf9,
    0x60, 0xff, 0xb4, 0x3f, 0xe4, 0x3f, 0xf9, 0xf8,
    0x7f, 0xf7, 0xd0, 0xff, 0xa0, 0xff, 0xe1, 0x70,
    0x0,

    /* U+0038 "8" */
    0xb, 0xff, 0xc1, 0xb4, 0x3f, 0x50, 0x8, 0xd7,
    0xf2, 0x1c, 0xbf, 0x61, 0xb0, 0xff, 0xed, 0xa2,
    0x4, 0x43, 0xff, 0x99, 0x84, 0x9f, 0xf4, 0x19,
    0xd0, 0xfb, 0x50, 0x1a, 0xfe, 0x50, 0x72, 0xfc,
    0x1c, 0x87, 0xff, 0x33, 0xf, 0xfe, 0x3e, 0x1f,
    0xfc, 0x45, 0xfc, 0x4, 0x33, 0x5f, 0x2b, 0x4,
    0x87, 0xf6, 0x80,

    /* U+0039 "9" */
    0x7, 0xff, 0x82, 0xd0, 0xfd, 0x41, 0x1a, 0xfe,
    0x43, 0x2f, 0xd8, 0x58, 0x7f, 0xf6, 0x51, 0x11,
    0xf, 0xfe, 0x5e, 0x4, 0xff, 0xa0, 0xb9, 0xf,
    0xb5, 0x5, 0x5f, 0x94, 0x19, 0x7e, 0xf, 0xfe,
    0x86, 0x1f, 0xfd, 0x65, 0xf8, 0x8, 0x5d, 0x7c,
    0xac, 0x10, 0x7f, 0x68, 0x0,

    /* U+003A ":" */
    0x2, 0xe, 0x82, 0x65, 0xa1, 0xff, 0xc5, 0x41,
    0x4c, 0xc4
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 64, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 261, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 261, .box_w = 10, .box_h = 3, .ofs_x = 3, .ofs_y = 9},
    {.bitmap_index = 6, .adv_w = 0, .box_w = 4, .box_h = 3, .ofs_x = -3, .ofs_y = 0},
    {.bitmap_index = 10, .adv_w = 261, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 261, .box_w = 5, .box_h = 19, .ofs_x = 11, .ofs_y = 1},
    {.bitmap_index = 83, .adv_w = 261, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 127, .adv_w = 261, .box_w = 14, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 261, .box_w = 14, .box_h = 19, .ofs_x = 2, .ofs_y = 1},
    {.bitmap_index = 214, .adv_w = 261, .box_w = 13, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 255, .adv_w = 261, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 261, .box_w = 14, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 342, .adv_w = 261, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 393, .adv_w = 261, .box_w = 14, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 438, .adv_w = 64, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_0[] = {
    0x0, 0x1, 0xd, 0xe
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 15, .glyph_id_start = 1,
        .unicode_list = unicode_list_0, .glyph_id_ofs_list = NULL, .list_length = 4, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    },
    {
        .range_start = 48, .range_length = 11, .glyph_id_start = 5,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR >= 8
/*Store all the custom data of the font*/
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 2,
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 1,
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t seg7_20 = {
#else
lv_font_t seg7_20 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 20,          /*The maximum line height required by the font*/
    .base_line = 0,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0)
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if SEG7_20*/
