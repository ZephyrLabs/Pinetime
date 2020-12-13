#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_NOT_EMAIL
#define LV_ATTRIBUTE_IMG_NOT_EMAIL
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_NOT_EMAIL uint8_t not_email_map[] = {
  0x00, 0x00, 0x00, 0xff, 	/*Color of index 0*/
  0x67, 0x58, 0x49, 0xff, 	/*Color of index 1*/
  0xa8, 0x6f, 0x2e, 0xff, 	/*Color of index 2*/
  0xe5, 0x89, 0x0d, 0xff, 	/*Color of index 3*/
  0xb8, 0x84, 0x42, 0xff, 	/*Color of index 4*/
  0xf3, 0x96, 0x12, 0xff, 	/*Color of index 5*/
  0x86, 0x84, 0x7f, 0xff, 	/*Color of index 6*/
  0xf2, 0xaf, 0x60, 0xff, 	/*Color of index 7*/
  0xb0, 0xa6, 0x8f, 0xff, 	/*Color of index 8*/
  0xea, 0xb5, 0x74, 0xff, 	/*Color of index 9*/
  0xbb, 0xb6, 0xac, 0xff, 	/*Color of index 10*/
  0xf0, 0xcf, 0xab, 0xff, 	/*Color of index 11*/
  0xd4, 0xcd, 0xc1, 0xff, 	/*Color of index 12*/
  0xde, 0xdc, 0xd7, 0xff, 	/*Color of index 13*/
  0xf1, 0xdf, 0xcb, 0xff, 	/*Color of index 14*/
  0xf1, 0xee, 0xea, 0xff, 	/*Color of index 15*/

  0x00, 0x00, 0x00, 0x6d, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xd6, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x06, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x60, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xfa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaa, 0xaf, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xc8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8c, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xda, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xad, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x0a, 0xff, 0xff, 0xfc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xcf, 0xff, 0xff, 0xa0, 0x00, 0x00, 
  0x00, 0x00, 0x0c, 0xff, 0xff, 0xc8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8c, 0xff, 0xff, 0xc0, 0x00, 0x00, 
  0x00, 0x00, 0x4e, 0xff, 0xff, 0xd8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8d, 0xff, 0xff, 0xe4, 0x00, 0x00, 
  0x00, 0x07, 0x7e, 0xff, 0xff, 0xff, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xff, 0xff, 0xff, 0xe7, 0x70, 0x00, 
  0x01, 0x77, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x77, 0x10, 
  0x27, 0x77, 0x7e, 0xff, 0xff, 0xfd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdd, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x77, 0x72, 
  0x34, 0x77, 0x7e, 0xff, 0xff, 0xd8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x77, 0x43, 
  0x33, 0x27, 0x7e, 0xff, 0xff, 0xc8, 0x88, 0x88, 0x88, 0x88, 0x88, 0x8c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x72, 0x33, 
  0x33, 0x33, 0x2e, 0xff, 0xff, 0xfd, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x33, 0x33, 
  0x33, 0x33, 0x35, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x73, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x39, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x93, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x7e, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x9f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf9, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x35, 0xbf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x53, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x37, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x93, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x3b, 0xff, 0xfb, 0x55, 0xbf, 0xff, 0xb3, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x7e, 0x95, 0x55, 0x57, 0xe7, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x35, 0x55, 0x55, 0x55, 0x53, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x55, 0x55, 0x55, 0x55, 0x55, 0x53, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 0x35, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x33, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x35, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x53, 0x33, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x33, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x53, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x33, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x33, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x33, 0x35, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x33, 0x33, 0x33, 
  0x33, 0x33, 0x35, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x53, 0x33, 0x33, 
  0x33, 0x33, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x53, 0x33, 
  0x33, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x33, 
  0x35, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x53, 
  0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 
  0x35, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x53, 
  0x03, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x30, 
};

const lv_img_dsc_t not_email = {
  .header.always_zero = 0,
  .header.w = 42,
  .header.h = 42,
  .data_size = 946,
  .header.cf = LV_IMG_CF_INDEXED_4BIT,
  .data = not_email_map,
};

