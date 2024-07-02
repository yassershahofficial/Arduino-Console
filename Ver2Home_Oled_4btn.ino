#include "U8glib.h"
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);
// 'FSdino', 128x64px
const unsigned char FSdino [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x33, 0x98, 0x0f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfd, 0xfb, 0xbb, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xfd, 0xf8, 0x3b, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfd, 0xfe, 0xfb, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfd, 0xfe, 0xfb, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfd, 0xfe, 0xf8, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x3f, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0xf7, 0xfc, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x04, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x03, 0xc2, 0x00, 0x00, 0x06, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x03, 0xc3, 0x00, 0x00, 0x07, 0x00, 0x0c, 0x78, 
  0x00, 0x18, 0x00, 0x00, 0xff, 0xfc, 0x00, 0x00, 0x03, 0xc7, 0x80, 0x00, 0x07, 0x00, 0x0c, 0x78, 
  0x00, 0x18, 0x20, 0x00, 0xff, 0x00, 0x00, 0x00, 0x03, 0xe7, 0x80, 0x00, 0x07, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x20, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xe7, 0x80, 0x00, 0x0f, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x20, 0x01, 0xff, 0xf0, 0x00, 0x00, 0x03, 0xe7, 0x80, 0x00, 0x0f, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x30, 0x07, 0xf8, 0x00, 0x00, 0x00, 0x03, 0xe7, 0x80, 0x00, 0x0f, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x30, 0x1f, 0xf0, 0x00, 0x00, 0x00, 0x03, 0xe7, 0x80, 0x00, 0x0f, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x3c, 0x3f, 0xfe, 0x00, 0x00, 0x00, 0x03, 0xe7, 0x80, 0x00, 0x0f, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x1f, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x03, 0xff, 0x00, 0x00, 0x0f, 0xc0, 0x0c, 0x30, 
  0x00, 0x18, 0x1f, 0xff, 0xf6, 0x00, 0x00, 0x00, 0x03, 0xfe, 0x00, 0x00, 0x0f, 0xc0, 0x0c, 0x00, 
  0x00, 0x18, 0x0f, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xf0, 0x00, 0x00, 0x0f, 0xe0, 0x0c, 0x00, 
  0x00, 0x18, 0x03, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x1f, 0xe0, 0x0c, 0x00, 
  0x00, 0x18, 0x01, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x1f, 0xe0, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0xff, 0x80, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x3f, 0xe0, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x3f, 0xe0, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x00, 0x00, 0x3f, 0xe0, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x24, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe0, 0x00, 0x00, 0x7f, 0xf0, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x36, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xe0, 0x00, 0x00, 0x7f, 0xf0, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x7e, 0x11, 0x0c, 0x78, 0x03, 0xc3, 0x11, 0x0c, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x42, 0x11, 0x88, 0xce, 0x02, 0x22, 0x11, 0x88, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x42, 0x11, 0x89, 0x82, 0x02, 0x22, 0x11, 0x88, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x43, 0x11, 0x49, 0x02, 0x02, 0x12, 0x11, 0x48, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x41, 0x11, 0x49, 0x02, 0x02, 0x12, 0x11, 0x48, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x41, 0x13, 0x49, 0x02, 0x03, 0xe2, 0x13, 0x48, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x41, 0x12, 0x29, 0x06, 0x02, 0x42, 0x12, 0x28, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x47, 0x12, 0x39, 0x8c, 0x02, 0x21, 0x22, 0x38, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0xfc, 0x12, 0x18, 0xf8, 0x02, 0x10, 0xc2, 0x18, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'FSfps', 128x64px
const unsigned char FSfps [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x33, 0x98, 0x0f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfd, 0xfb, 0xbb, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xfd, 0xf8, 0x3b, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfd, 0xfe, 0xfb, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfd, 0xfe, 0xfb, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfd, 0xfe, 0xf8, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0xc0, 0x70, 0x00, 0x00, 0x00, 0x07, 0x70, 0x30, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x01, 0x00, 0x08, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x08, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x04, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x04, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x02, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x02, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x08, 0x00, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x08, 0x00, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x08, 0x00, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x08, 0x00, 0x00, 0x80, 0x00, 0x00, 0x08, 0x00, 0x01, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x04, 0x00, 0x01, 0x80, 0x00, 0x00, 0x0c, 0x00, 0x02, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x04, 0x00, 0x03, 0x80, 0x00, 0x00, 0x0e, 0x00, 0x02, 0x00, 0x00, 0x0c, 0x78, 
  0x00, 0x18, 0x00, 0x02, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x0c, 0x78, 
  0x00, 0x18, 0x00, 0x01, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x80, 0x1f, 0x00, 0x00, 0x00, 0x07, 0xc0, 0x10, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0xc0, 0x3f, 0x00, 0x00, 0x00, 0x07, 0xf0, 0x30, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x21, 0xff, 0x80, 0x00, 0x00, 0x0f, 0xfe, 0x40, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x1f, 0xff, 0xc0, 0x00, 0x00, 0x1f, 0x03, 0x80, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0xf0, 0x00, 0x00, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x80, 0x71, 0x84, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0xf0, 0xd9, 0x84, 0x38, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x10, 0x89, 0x84, 0x60, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x01, 0x18, 0x89, 0x84, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x03, 0x08, 0x89, 0x44, 0x81, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x02, 0x18, 0x89, 0x4c, 0x87, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x03, 0xe0, 0x89, 0x68, 0x81, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x02, 0x00, 0x99, 0x24, 0xc1, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x02, 0x00, 0xf1, 0x3c, 0x7b, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x02, 0x00, 0x01, 0x04, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
// 'FSpong', 128x64px
const unsigned char FSpong [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x3f, 0xff, 0xe0, 0x33, 0x98, 0x0f, 0xff, 0xfc, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xfd, 0xfb, 0xbb, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xfd, 0xf8, 0x3b, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x07, 0xff, 0xfd, 0xfe, 0xfb, 0xff, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xfd, 0xfe, 0xfb, 0xff, 0xff, 0xc0, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x01, 0xff, 0xfd, 0xfe, 0xf8, 0x0f, 0xff, 0x80, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0xe6, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x03, 0x3c, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0xc8, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x05, 0x08, 0x0c, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x04, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x41, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x09, 0x60, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x24, 0x40, 0x13, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x20, 0xa0, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x40, 0x90, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0xc0, 0x10, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x87, 0x90, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x17, 0x03, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x08, 0x40, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x60, 0x18, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x10, 0x40, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x78, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x01, 0x08, 0x81, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x78, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x7e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x07, 0xe7, 0x83, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0xec, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x30, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x04, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x07, 0xcc, 0x6f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x0f, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x08, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x0f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x1f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 3120)
const int homeLen = 3;
const unsigned char* homeIcons[3] = {
  FSdino,
  FSpong,
  FSfps
};

//Movement Push Button Pins
#define btnUp_pin 4
#define btnDown_pin 2
#define btnActA_pin 13
#define btnActB_pin 12

//Buttons Press Detection
#define ledPower_pin 7
bool pressed = false;
int isPressedActA, isPressedActB, isPressedDown, isPressedUp = 0;
int currentItem = 0;

//Phase Management
int phase = 9;
 
void draw(void) {
  u8g.drawBitmapP( 0, 0, 128/8, 64, homeIcons[currentItem]);
};
void drawDino(void) {
  u8g.drawFrame(10,12,30,20);
};
void drawPong(void) {
  u8g.drawCircle(20, 20, 14);
};
void drawFps(void) {
  u8g.drawLine(7, 10, 40, 55);
};
void key(){
  bool btnUp = digitalRead(btnUp_pin);
  bool btnDown = digitalRead(btnDown_pin);
  bool btnActA = digitalRead(btnActA_pin);
  bool btnActB = digitalRead(btnActB_pin);

  if(btnUp == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedUp == 0){
      if(currentItem >= homeLen - 1){
        currentItem = 0;
      }
      else{
        currentItem++;
      }
    }
    while(!digitalRead(btnUp)){
    }
    isPressedUp = 1;
  }
  else if(btnDown == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedDown == 0){
      if(currentItem <= 0){
        currentItem = homeLen - 1;
      }
      else{
        currentItem--;
      }
    }
    while(!digitalRead(btnDown)){
    }
    isPressedDown = 1;
  }
  else if(btnActA == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedActA == 0){
    }
    while(!digitalRead(btnActA)){
      //while still pressed, do nothing
    }
    isPressedActA = 1;
  }
  else if(btnActB == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedActB == 0){
      phase = currentItem;
    }
    while(!digitalRead(btnActB)){
      //while still pressed, do nothing
    }
    isPressedActB = 1;
  }
  else{
    digitalWrite(ledPower_pin,0);
    isPressedDown = 0;
    isPressedActA = 0;
    isPressedActB = 0;
    isPressedUp = 0;
  }
}
void keyOther(){
  bool btnUp = digitalRead(btnUp_pin);
  bool btnDown = digitalRead(btnDown_pin);
  bool btnActA = digitalRead(btnActA_pin);
  bool btnActB = digitalRead(btnActB_pin);

  if(btnUp == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedUp == 0){
    }
    while(!digitalRead(btnUp)){
    }
    isPressedUp = 1;
  }
  else if(btnDown == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedDown == 0){
    }
    while(!digitalRead(btnDown)){
    }
    isPressedDown = 1;
  }
  else if(btnActA == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedActA == 0){
      phase = 9;
    }
    while(!digitalRead(btnActA)){
      //while still pressed, do nothing
    }
    isPressedActA = 1;
  }
  else if(btnActB == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedActB == 0){
    }
    while(!digitalRead(btnActB)){
      //while still pressed, do nothing
    }
    isPressedActB = 1;
  }
  else{
    digitalWrite(ledPower_pin,0);
    isPressedDown = 0;
    isPressedActA = 0;
    isPressedActB = 0;
    isPressedUp = 0;
  }
}
void setup(void) {
  //Initialize Mov Pins
  pinMode(btnUp_pin, INPUT_PULLUP);
  pinMode(btnDown_pin, INPUT_PULLUP);
  pinMode(btnActA_pin, INPUT_PULLUP);
  pinMode(btnActB_pin, INPUT_PULLUP);
  
  pinMode(ledPower_pin, OUTPUT);
}

void loop(void) {
  u8g.firstPage();  
  do {
    switch(phase){
      case 0:
        drawDino();
        keyOther();
        break;
      case 1:
        drawFps();
        keyOther();
        break;
      case 2:
        drawPong();
        keyOther();
        break;
      default:
        draw();
        key();
        break;
    }
  } while( u8g.nextPage() );
}