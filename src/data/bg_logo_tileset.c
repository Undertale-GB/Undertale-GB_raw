#pragma bank 255

// Tileset: bg_logo_tileset

#include "gbs_types.h"

BANKREF(bg_logo_tileset)

const struct tileset_t bg_logo_tileset = {
    .n_tiles = 31,
    .tiles = {
        0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
        0xFF, 0xFF, 0x81, 0x80, 0x81, 0x80, 0x81, 0x80, 0x81, 0x80, 0x81, 0x80, 0x81, 0x80, 0x81, 0x80,
        0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0,
        0xFF, 0xFF, 0x81, 0x80, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
        0xFF, 0xFF, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x40, 0xC0, 0x40, 0x40, 0x00, 0x40, 0x00, 0x00, 0x00,
        0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x83, 0x81, 0x83, 0x81, 0x83, 0x81, 0x83, 0x81,
        0xFF, 0xFF, 0x03, 0x03, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xC0, 0xC0,
        0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
        0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x7F, 0xFF, 0x7F, 0x00, 0x00,
        0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x83, 0x80, 0x87, 0x80, 0x87, 0x80, 0x83, 0x80, 0x81,
        0xFF, 0xFF, 0x03, 0x03, 0x01, 0x01, 0x00, 0x60, 0x00, 0xF0, 0x00, 0xF0, 0x00, 0xE0, 0x00, 0xC0,
        0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xF8, 0xF8, 0xF8, 0xF8,
        0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0F, 0x07, 0x0F, 0x07,
        0xFF, 0xFF, 0xC0, 0xC0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x83, 0x81,
        0xFF, 0xFF, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0,
        0xFF, 0xFF, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F,
        0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xC0, 0xC0,
        0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
        0x80, 0x80, 0x88, 0x80, 0x8C, 0x84, 0x8E, 0x86, 0x8F, 0x87, 0x8F, 0x87, 0x8F, 0x87, 0x8F, 0x87,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0xC0, 0xC0, 0xE0, 0xE0,
        0x83, 0x81, 0x83, 0x81, 0x83, 0x81, 0x83, 0x81, 0x83, 0x81, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
        0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0x80, 0x80, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x03, 0x03,
        0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
        0x00, 0x00, 0xFF, 0x7F, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x84, 0x80, 0x86, 0x82, 0x87, 0x83,
        0x00, 0x80, 0x00, 0x00, 0x1F, 0x0F, 0x1F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80,
        0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8,
        0x0F, 0x07, 0x0F, 0x07, 0x0F, 0x07, 0x0F, 0x07, 0x0F, 0x07, 0x0F, 0x07, 0x0F, 0x07, 0x0F, 0x07,
        0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x83, 0x81, 0x83, 0x81, 0x83, 0x81, 0x83, 0x81, 0x83, 0x81,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0,
        0xFF, 0x7F, 0xFF, 0x7F, 0xFF, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
    }
};
