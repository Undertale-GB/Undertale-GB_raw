#pragma bank 255

// Tileset: bg_intro01_tileset

#include "gbs_types.h"

BANKREF(bg_intro01_tileset)

const struct tileset_t bg_intro01_tileset = {
    .n_tiles = 103,
    .tiles = {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x2F, 0x00, 0x24, 0x00, 0x20, 0x00, 0x50, 0x00, 0x88, 0x00,
        0x00, 0x00, 0x00, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0xF4, 0x00, 0x24, 0x00, 0x04, 0x00, 0x0A, 0x00, 0x11, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01,
        0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x1F, 0x3F, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x00, 0x00, 0xFC, 0xFC, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xC0, 0xE0, 0xE0, 0xE0, 0xF0, 0xF0, 0xF0,
        0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00,
        0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x40, 0x00, 0x40, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00,
        0x01, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x0F,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFB, 0xFF, 0xBB, 0xFF, 0xBB, 0xFF, 0xBB, 0xFF, 0xBB, 0xFF, 0xDD, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xFF, 0xEF, 0xFF, 0xEF, 0xFF, 0xEF, 0xFF, 0xF7, 0xFF, 0xF8, 0xF8,
        0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x78, 0xFC, 0x7C, 0xFC, 0x7C, 0xFC, 0x7C, 0xFC, 0x7C, 0x7E,
        0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x08, 0x00,
        0x00, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x04, 0x00, 0x06, 0x00, 0x0E, 0x00, 0x0F, 0x00,
        0x00, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x60, 0x00, 0x70, 0x00, 0xF0, 0x00,
        0x10, 0x00, 0x10, 0x00, 0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x08, 0x00, 0x10, 0x00,
        0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1F, 0x1E, 0x1F,
        0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xC0, 0xE0, 0xE0, 0xFC, 0xFC, 0xDF, 0xFF, 0xDF, 0xFF,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x07, 0x1F, 0xFF, 0x1F, 0xFF,
        0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x3E, 0x7E, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x6F, 0xFF,
        0x06, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00, 0x02, 0x00, 0x02, 0x00,
        0x1F, 0x02, 0xF9, 0x07, 0xE0, 0x1F, 0xC0, 0x3F, 0xC0, 0x3F, 0x07, 0x7F, 0x0F, 0x7C, 0x0F, 0x7C,
        0xC3, 0x00, 0xFF, 0x00, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xC3, 0xFF, 0xFF, 0xFF, 0xFF, 0x7E,
        0xF8, 0x40, 0x9F, 0xE0, 0x07, 0xF8, 0x01, 0xFE, 0x01, 0xFE, 0xE0, 0xFE, 0xF0, 0x3E, 0xF0, 0x3E,
        0x60, 0x00, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0x40, 0x00, 0x40, 0x00,
        0x0E, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xDE, 0xFD, 0x00, 0x1E, 0x00, 0x3F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
        0x0F, 0xF7, 0x00, 0xEF, 0x00, 0x1F, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
        0x6E, 0xFE, 0x00, 0x00, 0x00, 0x80, 0x00, 0x80, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0, 0x00, 0xC0,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x02, 0x07, 0x07,
        0x04, 0x00, 0x04, 0x00, 0x08, 0x00, 0x08, 0x00, 0x10, 0x00, 0x10, 0x00, 0x21, 0x00, 0x20, 0x01,
        0x0F, 0x7E, 0x8F, 0x7D, 0x0F, 0xFF, 0x0F, 0xFF, 0x0F, 0xFF, 0x07, 0xFF, 0x07, 0xFE, 0x03, 0xFF,
        0xFF, 0x24, 0xFF, 0xA5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x66, 0xFF, 0x66, 0xFF, 0xFF,
        0xF0, 0x7E, 0xF1, 0xBE, 0xF0, 0xFF, 0xF0, 0xFF, 0xF0, 0xFF, 0xE0, 0xFF, 0xE0, 0x7F, 0xC0, 0xFF,
        0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x10, 0x00, 0x08, 0x00, 0x08, 0x00, 0x84, 0x00, 0x04, 0x80,
        0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x03, 0x00, 0x03, 0x00, 0x03, 0x00, 0x07,
        0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
        0x20, 0xC0, 0x00, 0xE0, 0x10, 0xE0, 0x10, 0xE0, 0x10, 0xE0, 0x18, 0xE0, 0x18, 0xE0, 0x18, 0xE0,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03, 0x07, 0x07,
        0x0E, 0x0E, 0x1C, 0x1C, 0x38, 0x38, 0x70, 0x70, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00,
        0x20, 0x01, 0x20, 0x01, 0x40, 0x01, 0x40, 0x01, 0x42, 0x01, 0x40, 0x03, 0x40, 0x03, 0x40, 0x03,
        0x01, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
        0xFF, 0xFF, 0x7E, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
        0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
        0x04, 0x80, 0x04, 0x80, 0x02, 0x80, 0x02, 0x80, 0x42, 0x80, 0x02, 0xC0, 0x02, 0xC0, 0x02, 0xC0,
        0x00, 0x07, 0x00, 0x07, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x0F, 0x00, 0x1F, 0x00, 0x1F, 0x00, 0x1F,
        0x18, 0xE0, 0x18, 0xE0, 0x1C, 0xE0, 0x1C, 0xE3, 0x18, 0xE6, 0x00, 0xFC, 0x00, 0xF8, 0x01, 0xF9,
        0x0E, 0x0E, 0x1C, 0x1C, 0x38, 0x38, 0x70, 0xF0, 0x20, 0x60, 0x00, 0x20, 0x80, 0xA0, 0x40, 0x60,
        0x60, 0x43, 0x3C, 0x3F, 0x3C, 0x03, 0x20, 0x03, 0x28, 0x03, 0x1C, 0x03, 0x00, 0x03, 0x00, 0x03,
        0x06, 0xC2, 0x3C, 0xFC, 0x3C, 0xC0, 0x04, 0xC0, 0x14, 0xC0, 0x38, 0xC0, 0x00, 0xC0, 0x00, 0xC0,
        0x00, 0x1F, 0x00, 0x3F, 0x00, 0x3F, 0x00, 0x7F, 0x00, 0x7F, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00,
        0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xC0, 0xFF, 0xF0, 0xF3,
        0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0x03, 0xFE, 0x06, 0xFC, 0x7D, 0xFC,
        0x08, 0xFC, 0x1C, 0xFF, 0x7C, 0xFC, 0xDC, 0x9C, 0xBC, 0x1C, 0x78, 0x38, 0xC0, 0x40, 0x80, 0x80,
        0x80, 0xC0, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, 0x09, 0x00, 0x0A, 0x00, 0x0A, 0x00,
        0x00, 0xFF, 0x80, 0x7F, 0x1F, 0x00, 0xFF, 0x00, 0x03, 0x00, 0x20, 0x00, 0x40, 0x00, 0x41, 0x00,
        0x00, 0xFF, 0x00, 0xFF, 0xE7, 0x00, 0xE7, 0x00, 0xE7, 0x00, 0x24, 0x00, 0x24, 0x00, 0xC3, 0x00,
        0x00, 0xFF, 0x01, 0xFE, 0xF8, 0x00, 0xFF, 0x00, 0xC0, 0x00, 0x04, 0x00, 0x02, 0x00, 0x82, 0x00,
        0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x60, 0x00, 0x90, 0x00, 0x50, 0x00, 0x50, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x03, 0x07, 0x07,
        0x70, 0x70, 0x71, 0x71, 0x71, 0x71, 0x72, 0x72, 0x72, 0x72, 0xFC, 0xFC, 0xFD, 0xFD, 0xF4, 0xE4,
        0xFB, 0x87, 0x97, 0x0B, 0x07, 0x13, 0x23, 0x03, 0x43, 0x03, 0x87, 0x07, 0x1B, 0x1B, 0x63, 0x61,
        0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xC0, 0xF0, 0xF0, 0xF8, 0xF8,
        0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xFE, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x83, 0x83,
        0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3,
        0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x83, 0x81, 0x81, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
        0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0xC1, 0x99, 0x99, 0xC1, 0xC1, 0xF9, 0xF9, 0x99, 0x99, 0xC3, 0xC3,
        0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0xF9, 0xF9, 0xC1, 0xC1, 0x99, 0x99, 0xC1, 0xC1,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x9F, 0xDF, 0xDF, 0xBF, 0xBF,
        0xFF, 0xFF, 0xCF, 0xCF, 0xCF, 0xCF, 0x83, 0x83, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xE3, 0xE3,
        0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39, 0x29, 0x29, 0xAB, 0xAB, 0x93, 0x93,
        0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x83, 0x99, 0x99, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F,
        0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x9F, 0x9F, 0x9F, 0x9F, 0x99, 0x99, 0xC3, 0xC3,
        0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x81, 0x81, 0x9F, 0x9F, 0x99, 0x99, 0xC3, 0xC3,
        0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x9D, 0x9D, 0xC3, 0xC3, 0xF9, 0xF9, 0x99, 0x99, 0xC3, 0xC3,
        0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC1, 0xC1,
        0xFF, 0xFF, 0xC7, 0xC7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xC3, 0xC3,
        0xFF, 0xFF, 0xF9, 0xF9, 0xF9, 0xF9, 0xC1, 0xC1, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC1, 0xC1,
        0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0xE7,
        0xFF, 0xFF, 0x81, 0x81, 0x9F, 0x9F, 0x9F, 0x9F, 0x83, 0x83, 0x9F, 0x9F, 0x9F, 0x9F, 0x81, 0x81,
        0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x81, 0x81, 0x99, 0x99, 0x99, 0x99,
        0xFF, 0xFF, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
        0xFF, 0xFF, 0x81, 0x81, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7,
        0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x81, 0x81, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
        0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF,
        0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3,
        0xFF, 0xFF, 0x7D, 0x7D, 0x39, 0x39, 0x11, 0x11, 0x29, 0x29, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39,
        0xFF, 0xFF, 0x99, 0x99, 0x89, 0x89, 0x89, 0x89, 0x91, 0x91, 0x91, 0x91, 0x99, 0x99, 0x99, 0x99,
        0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x9F, 0x9F, 0xC3, 0xC3, 0xF9, 0xF9, 0x99, 0x99, 0xC3, 0xC3,
        0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x9F, 0x9F, 0x9F
    }
};