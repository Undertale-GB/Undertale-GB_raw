#pragma bank 255

// Tileset: bg_room16_tileset

#include "gbs_types.h"

BANKREF(bg_room16_tileset)

const struct tileset_t bg_room16_tileset = {
    .n_tiles = 37,
    .tiles = {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0xFF, 0xFC,
        0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01,
        0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x3F,
        0xFF, 0xE0, 0xFF, 0xC0, 0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x01,
        0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF,
        0xFF, 0x07, 0xFF, 0x03, 0xFF, 0x01, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80,
        0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x03, 0xFF, 0x05, 0xFF, 0x09, 0xFF, 0xF1,
        0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0xC0, 0xFF, 0xA0, 0xFF, 0x90, 0xFF, 0x8F,
        0x20, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0xFF, 0xFF, 0x02, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0xFF, 0xFF,
        0x4D, 0xF3, 0x2B, 0xF5, 0x27, 0xF9, 0xFF, 0xF1, 0x0D, 0xF3, 0x0B, 0xF5, 0x07, 0xF9, 0xFF, 0xF1,
        0xB0, 0xCF, 0xD0, 0xAF, 0xE0, 0x9F, 0xFF, 0x8F, 0xB2, 0xCF, 0xD1, 0xAF, 0xE1, 0x9F, 0xFF, 0x8F,
        0x20, 0xFF, 0x10, 0xFF, 0x10, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0xFF,
        0x4F, 0xF1, 0x2D, 0xF3, 0x2B, 0xF5, 0xF7, 0xF9, 0xFF, 0x01, 0xFE, 0x03, 0xFC, 0x07, 0xF8, 0xFF,
        0xF0, 0x8F, 0xB0, 0xCF, 0xD0, 0xAF, 0xEF, 0x9F, 0xFF, 0x80, 0x7F, 0xC0, 0x3F, 0xE0, 0x1F, 0xFF,
        0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF,
        0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
        0x00, 0xFF, 0xC0, 0x3F, 0xF0, 0x0F, 0xF8, 0x07, 0xFC, 0x03, 0xFC, 0x03, 0xFE, 0x01, 0xFE, 0x01,
        0xE0, 0x9F, 0xE0, 0x9F, 0xCE, 0xB1, 0x5B, 0xE4, 0x4C, 0xF3, 0xF3, 0x8C, 0xFD, 0x82, 0x6E, 0xD1,
        0x01, 0xFE, 0xE3, 0x1C, 0x76, 0x89, 0x36, 0xC9, 0x87, 0x78, 0x83, 0x7C, 0x38, 0xC7, 0x2C, 0xD3,
        0xE0, 0x1F, 0x60, 0x9F, 0xCE, 0x31, 0x9B, 0x64, 0x8C, 0x73, 0x73, 0x8C, 0xFD, 0x02, 0x6E, 0x91,
        0x02, 0xFF, 0xE3, 0x1D, 0x77, 0x89, 0x37, 0xC9, 0x87, 0x79, 0x83, 0x7D, 0x3A, 0xC7, 0x2E, 0xD3,
        0x00, 0xFF, 0x03, 0xFC, 0x0F, 0xF0, 0x1F, 0xE0, 0x3F, 0xC0, 0x3F, 0xC0, 0x7F, 0x80, 0x7F, 0x80,
        0x72, 0xCD, 0x5E, 0xE1, 0x45, 0xFA, 0x81, 0xFE, 0xCE, 0xB1, 0x93, 0xEC, 0x4F, 0xF0, 0xE1, 0x9E,
        0x16, 0xE9, 0xDA, 0x25, 0x2C, 0xD3, 0xC1, 0x3E, 0x06, 0xF9, 0x0D, 0xF2, 0x8F, 0x70, 0x8C, 0x73,
        0x32, 0xCD, 0x1E, 0xE1, 0x05, 0xFA, 0x81, 0x7E, 0x4E, 0xB1, 0x93, 0x6C, 0x0F, 0xF0, 0x61, 0x9E,
        0x17, 0xE9, 0xDB, 0x25, 0x2E, 0xD3, 0xC2, 0x3F, 0x07, 0xF9, 0x0D, 0xF3, 0x8F, 0x71, 0x8D, 0x73,
        0xFE, 0x01, 0xFE, 0x01, 0xFC, 0x03, 0xFC, 0x03, 0xF8, 0x07, 0xF0, 0x0F, 0xC0, 0x3F, 0x00, 0xFF,
        0x7F, 0x80, 0x7F, 0x80, 0x3F, 0xC0, 0x3F, 0xC0, 0x1F, 0xE0, 0x0F, 0xF0, 0x03, 0xFC, 0x00, 0xFF,
        0xFF, 0xFF, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00,
        0xF8, 0xFF, 0xFC, 0x07, 0xFE, 0x03, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01, 0xFF, 0x01,
        0x1F, 0xFF, 0x3F, 0xE0, 0x7F, 0xC0, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80, 0xFF, 0x80,
        0xFF, 0xFC, 0xFF, 0xFE, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0x3F, 0xFF, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0x01, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x80, 0xFF, 0xC0, 0xFF, 0xE0,
        0xFF, 0x80, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x00, 0xFF, 0x01, 0xFF, 0x03, 0xFF, 0x07
    }
};
