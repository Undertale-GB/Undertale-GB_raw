#pragma bank 255

// Font: Determination.png

#include "gbs_types.h"

static const UBYTE font_determination_table[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F,
    0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F,
    0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, 0x28, 0x29, 0x2A, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F,
    0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, 0x38, 0x39, 0x3A, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F,
    0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48, 0x49, 0x4A, 0x4B, 0x4C, 0x4D, 0x4E, 0x4F,
    0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, 0x58, 0x59, 0x5A, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F,
    0x60, 0x5F, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x3E, 0x67, 0x68, 0x69, 0x6A, 0x5F, 0x6B, 0x5F,
    0x5F, 0x6C, 0x6D, 0x6E, 0x02, 0x6F, 0x70, 0x71, 0x72, 0x73, 0x68, 0x74, 0x75, 0x5F, 0x6B, 0x76,
    0x5F, 0x77, 0x78, 0x79, 0x7A, 0x7B, 0x7C, 0x7D, 0x7E, 0x7F, 0x80, 0x81, 0x82, 0x5F, 0x83, 0x84,
    0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x85, 0x8F, 0x5F, 0x5F, 0x5F, 0x90,
    0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, 0x98, 0x99, 0x9A, 0x9B, 0x9C, 0x9D, 0x9E, 0x9F, 0xA0,
    0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0,
    0xB1, 0xB2, 0xB3, 0xB4, 0xB5, 0xB6, 0xB7, 0xB8, 0xB9, 0xBA, 0xBB, 0xBC, 0x9D, 0x9E, 0x9F, 0xA0,
    0xBD, 0xBE, 0xBF, 0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC
};

static const UBYTE font_determination_bitmaps[] = {
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xCF, 0xCF, 0x87, 0x87, 0x87, 0x87, 0xCF, 0xCF, 0xCF, 0xCF, 0xFF, 0xFF, 0xCF, 0xCF,
    0xFF, 0xFF, 0x93, 0x93, 0xDB, 0xDB, 0xB7, 0xB7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xDB, 0xDB, 0x81, 0x81, 0xDB, 0xDB, 0xDB, 0xDB, 0x81, 0x81, 0xDB, 0xDB, 0xFF, 0xFF,
    0xEF, 0xEF, 0xC7, 0xC7, 0xAB, 0xAB, 0xAF, 0xAF, 0xC7, 0xC7, 0xEB, 0xEB, 0xAB, 0xAB, 0xC7, 0xC7,
    0xFF, 0xFF, 0xFF, 0xFF, 0xDB, 0xDB, 0xF7, 0xF7, 0xEF, 0xEF, 0xDB, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xCF, 0xCF, 0xB7, 0xB7, 0xAF, 0xAF, 0xDF, 0xDF, 0xAB, 0xAB, 0xB7, 0xB7, 0xCB, 0xCB,
    0xFF, 0xFF, 0xE7, 0xE7, 0xF7, 0xF7, 0xEF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF3, 0xF3, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xF3, 0xF3,
    0xFF, 0xFF, 0xCF, 0xCF, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xCF, 0xCF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x93, 0x93, 0xC7, 0xC7, 0x01, 0x01, 0xC7, 0xC7, 0x93, 0x93, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0x83, 0x83, 0xEF, 0xEF, 0xEF, 0xEF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x9F, 0xDF, 0xDF, 0xBF, 0xBF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x9F, 0x9F, 0x9F,
    0xFF, 0xFF, 0xFD, 0xFD, 0xFB, 0xFB, 0xF7, 0xF7, 0xEF, 0xEF, 0xDF, 0xDF, 0xBF, 0xBF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x91, 0x91, 0x91, 0x91, 0x89, 0x89, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0xE7, 0xE7, 0xC7, 0xC7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xC3, 0xC3,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0xF9, 0xF9, 0xF3, 0xF3, 0xE7, 0xE7, 0xCF, 0xCF, 0x81, 0x81,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0xF9, 0xF9, 0xE3, 0xE3, 0xF9, 0xF9, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0xF9, 0xF9, 0xF1, 0xF1, 0xE9, 0xE9, 0xD9, 0xD9, 0x99, 0x99, 0x81, 0x81, 0xF9, 0xF9,
    0xFF, 0xFF, 0x81, 0x81, 0x9F, 0x9F, 0x9F, 0x9F, 0x83, 0x83, 0xF9, 0xF9, 0xF9, 0xF9, 0x83, 0x83,
    0xFF, 0xFF, 0xE3, 0xE3, 0xCF, 0xCF, 0x9F, 0x9F, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0x81, 0x81, 0xF9, 0xF9, 0xF9, 0xF9, 0xF3, 0xF3, 0xF3, 0xF3, 0xE7, 0xE7, 0xE7, 0xE7,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0xC1, 0xC1, 0xF9, 0xF9, 0xF3, 0xF3, 0xC7, 0xC7,
    0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF,
    0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xF7, 0xF7, 0xEF, 0xEF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xF3, 0xCF, 0xCF, 0xBF, 0xBF, 0xCF, 0xCF, 0xF3, 0xF3, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x83, 0xFF, 0xFF, 0x83, 0x83, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x9F, 0xE7, 0xE7, 0xFB, 0xFB, 0xE7, 0xE7, 0x9F, 0x9F, 0xFF, 0xFF,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0xF9, 0xF9, 0xE3, 0xE3, 0xE7, 0xE7, 0xFF, 0xFF, 0xE7, 0xE7,
    0xFF, 0xFF, 0xE3, 0xE3, 0xDD, 0xDD, 0xB2, 0xB2, 0xAA, 0xAA, 0xAA, 0xAA, 0xD1, 0xD1, 0xE7, 0xE7,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x81, 0x81, 0x99, 0x99, 0x99, 0x99,
    0xFF, 0xFF, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x83, 0x83,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x83, 0x83,
    0xFF, 0xFF, 0x81, 0x81, 0x9F, 0x9F, 0x9F, 0x9F, 0x83, 0x83, 0x9F, 0x9F, 0x9F, 0x9F, 0x81, 0x81,
    0xFF, 0xFF, 0x81, 0x81, 0x9F, 0x9F, 0x9F, 0x9F, 0x83, 0x83, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x9F, 0x9F, 0x91, 0x91, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x81, 0x81, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0xFF, 0xFF, 0x81, 0x81, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0x81, 0x81,
    0xFF, 0xFF, 0xC3, 0xC3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xB3, 0xB3, 0xC7, 0xC7,
    0xFF, 0xFF, 0x99, 0x99, 0x93, 0x93, 0x87, 0x87, 0x8F, 0x8F, 0x87, 0x87, 0x93, 0x93, 0x99, 0x99,
    0xFF, 0xFF, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x83, 0x83,
    0xFF, 0xFF, 0x7D, 0x7D, 0x39, 0x39, 0x11, 0x11, 0x29, 0x29, 0x39, 0x39, 0x39, 0x39, 0x39, 0x39,
    0xFF, 0xFF, 0x99, 0x99, 0x89, 0x89, 0x89, 0x89, 0x91, 0x91, 0x91, 0x91, 0x99, 0x99, 0x99, 0x99,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x83, 0x83, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x93, 0x93, 0xC7, 0xC7, 0xFB, 0xFB,
    0xFF, 0xFF, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x9F, 0x9F, 0xC3, 0xC3, 0xF9, 0xF9, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0x81, 0x81, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7,
    0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0xE7, 0xE7, 0xE7,
    0xFF, 0xFF, 0x39, 0x39, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x93, 0x93, 0xBB, 0xBB, 0xFF, 0xFF,
    0xFF, 0xFF, 0x99, 0x99, 0x81, 0x81, 0xC3, 0xC3, 0xE7, 0xE7, 0xC3, 0xC3, 0x81, 0x81, 0x99, 0x99,
    0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7,
    0xFF, 0xFF, 0x83, 0x83, 0xF3, 0xF3, 0xE3, 0xE3, 0xC7, 0xC7, 0x8F, 0x8F, 0x9F, 0x9F, 0x83, 0x83,
    0xFF, 0xFF, 0xC3, 0xC3, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xC3, 0xC3,
    0xFF, 0xFF, 0xBF, 0xBF, 0xDF, 0xDF, 0xEF, 0xEF, 0xF7, 0xF7, 0xFB, 0xFB, 0xFD, 0xFD, 0xFF, 0xFF,
    0xFF, 0xFF, 0xC3, 0xC3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xC3, 0xC3,
    0xFF, 0xFF, 0xEF, 0xEF, 0xD7, 0xD7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0xFF, 0xFF,
    0xFF, 0xFF, 0xDF, 0xDF, 0xEF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0xF9, 0xF9, 0xC1, 0xC1, 0x99, 0x99, 0xC1, 0xC1,
    0xFF, 0xFF, 0x9F, 0x9F, 0x9F, 0x9F, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x83, 0x83,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x9F, 0x9F, 0x9F, 0x9F, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0xF9, 0xF9, 0xF9, 0xF9, 0xC1, 0xC1, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC1, 0xC1,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x81, 0x81, 0x9F, 0x9F, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0xE3, 0xE3, 0xCF, 0xCF, 0xCF, 0xCF, 0x83, 0x83, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0xC1, 0x99, 0x99, 0xC1, 0xC1, 0xF9, 0xF9, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0x9F, 0x9F, 0x9F, 0x9F, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0xFF, 0xFF, 0xE7, 0xE7, 0xFF, 0xFF, 0xC7, 0xC7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xC3, 0xC3,
    0xFF, 0xFF, 0xF3, 0xF3, 0xFF, 0xFF, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0xF3, 0x93, 0x93, 0xC7, 0xC7,
    0xFF, 0xFF, 0x9F, 0x9F, 0x9F, 0x9F, 0x93, 0x93, 0x87, 0x87, 0x8F, 0x8F, 0x87, 0x87, 0x93, 0x93,
    0xFF, 0xFF, 0xC7, 0xC7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xE7, 0xC3, 0xC3,
    0xFF, 0xFF, 0xFF, 0xFF, 0x9B, 0x9B, 0x81, 0x81, 0x81, 0x81, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x83, 0x81, 0x81, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x83, 0x99, 0x99, 0x99, 0x99, 0x83, 0x83, 0x9F, 0x9F, 0x9F, 0x9F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC1, 0xC1, 0x99, 0x99, 0x99, 0x99, 0xC1, 0xC1, 0xF9, 0xF9, 0xF9, 0xF9,
    0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x83, 0x99, 0x99, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F, 0x9F,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0x9D, 0x9D, 0xC3, 0xC3, 0xF9, 0xF9, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0xCF, 0xCF, 0xCF, 0xCF, 0x83, 0x83, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xCF, 0xE3, 0xE3,
    0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC1, 0xC1,
    0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0x99, 0x99, 0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0xE7,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x39, 0x39, 0x39, 0x39, 0x29, 0x29, 0x29, 0x29, 0x93, 0x93,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0xC3, 0xC3, 0xE7, 0xE7, 0xC3, 0xC3, 0x99, 0x99,
    0xFF, 0xFF, 0xFF, 0xFF, 0x99, 0x99, 0x99, 0x99, 0xC1, 0xC1, 0xF9, 0xF9, 0x99, 0x99, 0xC3, 0xC3,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0x81, 0xF3, 0xF3, 0xE7, 0xE7, 0xCF, 0xCF, 0x81, 0x81,
    0xFF, 0xFF, 0xF7, 0xF7, 0xEF, 0xEF, 0xEF, 0xEF, 0xDF, 0xDF, 0xEF, 0xEF, 0xEF, 0xEF, 0xF7, 0xF7,
    0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF,
    0xFF, 0xFF, 0xEF, 0xEF, 0xF7, 0xF7, 0xF7, 0xF7, 0xFB, 0xFB, 0xF7, 0xF7, 0xF7, 0xF7, 0xEF, 0xEF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xCD, 0xCD, 0xB3, 0xB3, 0xFF, 0xFF, 0xFF, 0xFF,
    0xAA, 0xAA, 0x55, 0x55, 0xAA, 0xAA, 0x55, 0x55, 0xAA, 0xAA, 0x55, 0x55, 0xAA, 0xAA, 0x55, 0x55,
    0xFF, 0xFF, 0xC7, 0xC7, 0xBF, 0xBF, 0x8F, 0x8F, 0x8F, 0x8F, 0xBF, 0xBF, 0xC7, 0xC7, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x9F, 0x9F, 0xDF, 0xDF, 0xBF, 0xBF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xF3, 0xF3, 0xEF, 0xEF, 0xC7, 0xC7, 0xEF, 0xEF, 0x9F, 0x9F, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x93, 0x93, 0xDB, 0xDB, 0xB7, 0xB7, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xAB, 0xAB, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xDF, 0x8F, 0x8F, 0xDF, 0xDF, 0xDF, 0xDF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xDF, 0x8F, 0x8F, 0xDF, 0xDF, 0x8F, 0x8F, 0xDF, 0xDF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xB7, 0xB7, 0xEF, 0xEF, 0xDF, 0xDF, 0xB5, 0xB5, 0xFF, 0xFF, 0xFF, 0xFF,
    0xD7, 0xD7, 0xEF, 0xEF, 0xC3, 0xC3, 0xBF, 0xBF, 0xC7, 0xC7, 0xFB, 0xFB, 0x87, 0x87, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xF7, 0xEF, 0xEF, 0xDF, 0xDF, 0xEF, 0xEF, 0xF7, 0xF7, 0xFF, 0xFF,
    0xFF, 0xFF, 0xC1, 0xC1, 0xB7, 0xB7, 0xB1, 0xB1, 0xB7, 0xB7, 0xB7, 0xB7, 0xC1, 0xC1, 0xFF, 0xFF,
    0xD7, 0xD7, 0xEF, 0xEF, 0x83, 0x83, 0xF7, 0xF7, 0xEF, 0xEF, 0xDF, 0xDF, 0x83, 0x83, 0xFF, 0xFF,
    0xFF, 0xFF, 0xF9, 0xF9, 0xFB, 0xFB, 0xFD, 0xFD, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x9F, 0x9F, 0xDF, 0xDF, 0xBF, 0xBF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xC9, 0xC9, 0xDB, 0xDB, 0xED, 0xED, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xC3, 0xC3, 0xC3, 0xC3, 0xE7, 0xE7, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC7, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0xEB, 0xD7, 0xD7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0x85, 0x85, 0xD1, 0xD1, 0xD5, 0xD5, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xDF, 0xDF, 0xEF, 0xEF, 0xF7, 0xF7, 0xEF, 0xEF, 0xDF, 0xDF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0xB5, 0xB5, 0xB3, 0xB3, 0xC1, 0xC1, 0xFF, 0xFF,
    0xFF, 0xFF, 0xD7, 0xD7, 0xFF, 0xFF, 0xBB, 0xBB, 0xD7, 0xD7, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF,
    0xFF, 0xFF, 0xBF, 0xBF, 0xFF, 0xFF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xEF, 0xEF, 0xC3, 0xC3, 0xAF, 0xAF, 0xAF, 0xAF, 0xAF, 0xAF, 0xC3, 0xC3, 0xEF, 0xEF,
    0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0xBF, 0xBF, 0x0F, 0x0F, 0xBF, 0xBF, 0x83, 0x83, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xBB, 0xBB, 0xC7, 0xC7, 0xD7, 0xD7, 0xC7, 0xC7, 0xBB, 0xBB, 0xFF, 0xFF,
    0xBB, 0xBB, 0xD7, 0xD7, 0xEF, 0xEF, 0x83, 0x83, 0xEF, 0xEF, 0x83, 0x83, 0xEF, 0xEF, 0xFF, 0xFF,
    0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF,
    0xE3, 0xE3, 0xDF, 0xDF, 0x87, 0x87, 0xBB, 0xBB, 0xC7, 0xC7, 0xF7, 0xF7, 0x8F, 0x8F, 0xFF, 0xFF,
    0xFF, 0xFF, 0xDB, 0xDB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xC3, 0xC3, 0xBD, 0xBD, 0x66, 0x66, 0x5E, 0x5E, 0x5E, 0x5E, 0x66, 0x66, 0xBD, 0xBD, 0xC3, 0xC3,
    0xC7, 0xC7, 0xB7, 0xB7, 0xA7, 0xA7, 0x97, 0x97, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xEB, 0xEB, 0xD7, 0xD7, 0xAF, 0xAF, 0xD7, 0xD7, 0xEB, 0xEB, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0xFB, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF,
    0xC3, 0xC3, 0xBD, 0xBD, 0x46, 0x46, 0x5A, 0x5A, 0x46, 0x46, 0x5A, 0x5A, 0xBD, 0xBD, 0xC3, 0xC3,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x87, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xCF, 0xCF, 0xB7, 0xB7, 0xB7, 0xB7, 0xCF, 0xCF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xC7, 0xC7, 0xEF, 0xEF, 0xFF, 0xFF, 0xC7, 0xC7, 0xFF, 0xFF,
    0xCF, 0xCF, 0xB7, 0xB7, 0xEF, 0xEF, 0xDF, 0xDF, 0x87, 0x87, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0x8F, 0x8F, 0xF7, 0xF7, 0xC7, 0xC7, 0xF7, 0xF7, 0x8F, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFB, 0xFB, 0xF7, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xBF, 0xBF, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0x8B, 0x8B, 0xBF, 0xBF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xC5, 0xC5, 0x85, 0x85, 0x85, 0x85, 0xC5, 0xC5, 0xF5, 0xF5, 0xF5, 0xF5, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF7, 0xF7, 0xFB, 0xFB, 0xF7, 0xF7,
    0xFF, 0xFF, 0x9F, 0x9F, 0xDF, 0xDF, 0xDF, 0xDF, 0x8F, 0x8F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xD7, 0xD7, 0xEB, 0xEB, 0xF5, 0xF5, 0xEB, 0xEB, 0xD7, 0xD7, 0xFF, 0xFF,
    0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0xCF, 0xCF, 0xBF, 0xBF, 0xB7, 0xB7, 0xCF, 0xCF, 0xFF, 0xFF,
    0xDF, 0xDF, 0xEF, 0xEF, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0x81, 0x81, 0xBD, 0xBD, 0xFF, 0xFF,
    0xFB, 0xFB, 0xF7, 0xF7, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0x81, 0x81, 0xBD, 0xBD, 0xFF, 0xFF,
    0xE7, 0xE7, 0xDB, 0xDB, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0x81, 0x81, 0xBD, 0xBD, 0xFF, 0xFF,
    0xEB, 0xEB, 0xD7, 0xD7, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0x81, 0x81, 0xBD, 0xBD, 0xFF, 0xFF,
    0xFF, 0xFF, 0xDB, 0xDB, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0x81, 0x81, 0xBD, 0xBD, 0xFF, 0xFF,
    0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0x81, 0x81, 0xBD, 0xBD, 0xFF, 0xFF,
    0xFF, 0xFF, 0xE1, 0xE1, 0xE7, 0xE7, 0xD7, 0xD7, 0xC1, 0xC1, 0xB7, 0xB7, 0xB1, 0xB1, 0xFF, 0xFF,
    0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0xBF, 0xBF, 0xBF, 0xBF, 0xBD, 0xBD, 0xC3, 0xC3, 0xF7, 0xF7,
    0xDF, 0xDF, 0xEF, 0xEF, 0xFF, 0xFF, 0x81, 0x81, 0xBF, 0xBF, 0x83, 0x83, 0xBF, 0xBF, 0x81, 0x81,
    0xFB, 0xFB, 0xF7, 0xF7, 0xFF, 0xFF, 0x81, 0x81, 0xBF, 0xBF, 0x83, 0x83, 0xBF, 0xBF, 0x81, 0x81,
    0xEB, 0xEB, 0xD7, 0xD7, 0xFF, 0xFF, 0x81, 0x81, 0xBF, 0xBF, 0x83, 0x83, 0xBF, 0xBF, 0x81, 0x81,
    0xFF, 0xFF, 0xDB, 0xDB, 0xFF, 0xFF, 0x81, 0x81, 0xBF, 0xBF, 0x83, 0x83, 0xBF, 0xBF, 0x81, 0x81,
    0xDF, 0xDF, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF,
    0xF7, 0xF7, 0xEF, 0xEF, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF,
    0xEF, 0xEF, 0xD7, 0xD7, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF,
    0xFF, 0xFF, 0xD7, 0xD7, 0xFF, 0xFF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF,
    0xFF, 0xFF, 0x83, 0x83, 0xBD, 0xBD, 0xBD, 0xBD, 0x0D, 0x0D, 0xBD, 0xBD, 0x83, 0x83, 0xFF, 0xFF,
    0xEB, 0xEB, 0xD7, 0xD7, 0xFF, 0xFF, 0x9D, 0x9D, 0xAD, 0xAD, 0xB5, 0xB5, 0xB9, 0xB9, 0xFF, 0xFF,
    0xDF, 0xDF, 0xEF, 0xEF, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0xBD, 0xBD, 0xC3, 0xC3, 0xFF, 0xFF,
    0xFB, 0xFB, 0xF7, 0xF7, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0xBD, 0xBD, 0xC3, 0xC3, 0xFF, 0xFF,
    0xE7, 0xE7, 0xDB, 0xDB, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0xBD, 0xBD, 0xC3, 0xC3, 0xFF, 0xFF,
    0xEB, 0xEB, 0xD7, 0xD7, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0xBD, 0xBD, 0xC3, 0xC3, 0xFF, 0xFF,
    0xFF, 0xFF, 0xDB, 0xDB, 0xFF, 0xFF, 0xC3, 0xC3, 0xBD, 0xBD, 0xBD, 0xBD, 0xC3, 0xC3, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xBB, 0xBB, 0xD7, 0xD7, 0xEF, 0xEF, 0xD7, 0xD7, 0xBB, 0xBB, 0xFF, 0xFF,
    0xFF, 0xFF, 0xC1, 0xC1, 0xB9, 0xB9, 0xB5, 0xB5, 0xAD, 0xAD, 0x9D, 0x9D, 0x83, 0x83, 0xFF, 0xFF,
    0xDF, 0xDF, 0xEF, 0xEF, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xC3, 0xC3, 0xFF, 0xFF,
    0xFB, 0xFB, 0xF7, 0xF7, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xC3, 0xC3, 0xFF, 0xFF,
    0xE7, 0xE7, 0xDB, 0xDB, 0xFF, 0xFF, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xC3, 0xC3, 0xFF, 0xFF,
    0xFF, 0xFF, 0xDB, 0xDB, 0xFF, 0xFF, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xBD, 0xC3, 0xC3, 0xFF, 0xFF,
    0xFB, 0xFB, 0xF7, 0xF7, 0xBB, 0xBB, 0xD7, 0xD7, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xBF, 0xBF, 0x8F, 0x8F, 0xB7, 0xB7, 0xB7, 0xB7, 0x8F, 0x8F, 0xBF, 0xBF, 0xFF, 0xFF,
    0xFF, 0xFF, 0x87, 0x87, 0xBB, 0xBB, 0xB7, 0xB7, 0xBB, 0xBB, 0xBB, 0xBB, 0xA7, 0xA7, 0xFF, 0xFF,
    0xDF, 0xDF, 0xEF, 0xEF, 0xFF, 0xFF, 0xC3, 0xC3, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xFB, 0xFB, 0xF7, 0xF7, 0xFF, 0xFF, 0xC3, 0xC3, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xE7, 0xE7, 0xDB, 0xDB, 0xFF, 0xFF, 0xC3, 0xC3, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xEB, 0xEB, 0xD7, 0xD7, 0xFF, 0xFF, 0xC3, 0xC3, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xFF, 0xFF, 0xDB, 0xDB, 0xFF, 0xFF, 0xC3, 0xC3, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0xFF, 0xC3, 0xC3, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0xB5, 0xB5, 0xA3, 0xA3, 0xD1, 0xD1, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xC3, 0xC3, 0xF7, 0xF7,
    0xDF, 0xDF, 0xEF, 0xEF, 0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0x83, 0x83, 0xBF, 0xBF, 0xC3, 0xC3,
    0xFB, 0xFB, 0xF7, 0xF7, 0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0x83, 0x83, 0xBF, 0xBF, 0xC3, 0xC3,
    0xE7, 0xE7, 0xDB, 0xDB, 0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0x83, 0x83, 0xBF, 0xBF, 0xC3, 0xC3,
    0xFF, 0xFF, 0xDB, 0xDB, 0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0x83, 0x83, 0xBF, 0xBF, 0xC3, 0xC3,
    0xFF, 0xFF, 0xF5, 0xF5, 0xFB, 0xFB, 0xC5, 0xC5, 0xBB, 0xBB, 0xBB, 0xBB, 0xC7, 0xC7, 0xFF, 0xFF,
    0xEB, 0xEB, 0xD7, 0xD7, 0xFF, 0xFF, 0xA7, 0xA7, 0x9B, 0x9B, 0xBB, 0xBB, 0xBB, 0xBB, 0xFF, 0xFF,
    0xDF, 0xDF, 0xEF, 0xEF, 0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0xBB, 0xBB, 0xC7, 0xC7, 0xFF, 0xFF,
    0xF7, 0xF7, 0xEF, 0xEF, 0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0xBB, 0xBB, 0xC7, 0xC7, 0xFF, 0xFF,
    0xEF, 0xEF, 0xD7, 0xD7, 0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0xBB, 0xBB, 0xC7, 0xC7, 0xFF, 0xFF,
    0xEB, 0xEB, 0xD7, 0xD7, 0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0xBB, 0xBB, 0xC7, 0xC7, 0xFF, 0xFF,
    0xFF, 0xFF, 0xD7, 0xD7, 0xFF, 0xFF, 0xC7, 0xC7, 0xBB, 0xBB, 0xBB, 0xBB, 0xC7, 0xC7, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF, 0x83, 0x83, 0xFF, 0xFF, 0xEF, 0xEF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xC3, 0xC3, 0xB3, 0xB3, 0xAB, 0xAB, 0x9B, 0x9B, 0x87, 0x87, 0xFF, 0xFF,
    0xDF, 0xDF, 0xEF, 0xEF, 0xFF, 0xFF, 0xBB, 0xBB, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xF7, 0xF7, 0xEF, 0xEF, 0xFF, 0xFF, 0xBB, 0xBB, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xEF, 0xEF, 0xD7, 0xD7, 0xFF, 0xFF, 0xBB, 0xBB, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xFF, 0xFF, 0xD7, 0xD7, 0xFF, 0xFF, 0xBB, 0xBB, 0xBB, 0xBB, 0xB3, 0xB3, 0xCB, 0xCB, 0xFF, 0xFF,
    0xF7, 0xF7, 0xEF, 0xEF, 0xFF, 0xFF, 0xBB, 0xBB, 0xBB, 0xBB, 0xD7, 0xD7, 0xEF, 0xEF, 0x9F, 0x9F,
    0xFF, 0xFF, 0xBF, 0xBF, 0x9F, 0x9F, 0xAF, 0xAF, 0xAF, 0xAF, 0x9F, 0x9F, 0xBF, 0xBF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xD7, 0xD7, 0xFF, 0xFF, 0xBB, 0xBB, 0xBB, 0xBB, 0xD7, 0xD7, 0xEF, 0xEF, 0x9F, 0x9F
};

BANKREF(font_determination)
const font_desc_t font_determination = {
    FONT_RECODE,
    0xFF,
    font_determination_table,
    NULL,
    font_determination_bitmaps
};
