#ifndef TIMESNEWROMAN10_H
#define TIMESNEWROMAN10_H

#define TIMESNEWROMAN10_WIDTH 10
#define TIMESNEWROMAN10_HEIGHT 15

const static uint8_t TimesNewRoman10[] PROGMEM = {
    0x23, 0x25, // size
    0x0A, // width
    0x0F, // height
    0x20, // first char
    0x60, // char count
    
    // char widths
    0x00, 0x01, 0x03, 0x08, 0x05, 0x0C, 0x0B, 0x01, 0x04, 0x04, 
    0x05, 0x07, 0x02, 0x03, 0x01, 0x04, 0x05, 0x03, 0x05, 0x05, 
    0x06, 0x05, 0x05, 0x07, 0x05, 0x05, 0x01, 0x02, 0x06, 0x08, 
    0x06, 0x05, 0x0D, 0x0B, 0x08, 0x08, 0x09, 0x08, 0x07, 0x09, 
    0x09, 0x03, 0x05, 0x09, 0x08, 0x0B, 0x09, 0x09, 0x07, 0x09, 
    0x09, 0x06, 0x09, 0x09, 0x0B, 0x0E, 0x0A, 0x0A, 0x09, 0x03, 
    0x04, 0x03, 0x06, 0x08, 0x02, 0x06, 0x06, 0x05, 0x06, 0x05, 
    0x04, 0x06, 0x07, 0x03, 0x02, 0x07, 0x03, 0x0B, 0x07, 0x05, 
    0x06, 0x06, 0x05, 0x04, 0x04, 0x07, 0x07, 0x0B, 0x07, 0x07, 
    0x06, 0x04, 0x01, 0x04, 0x08, 0x08, 
    
    // font data
    0xFE, 0x0A, // 33
    0x1E, 0x00, 0x1E, 0x00, 0x00, 0x00, // 34
    0x90, 0x90, 0xF8, 0x97, 0x90, 0xF8, 0x97, 0x90, 0x00, 0x0E, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, // 35
    0x1C, 0x22, 0xFF, 0x42, 0x8C, 0x06, 0x08, 0x1E, 0x08, 0x06, // 36
    0x1C, 0x22, 0x22, 0x1C, 0x80, 0x40, 0x20, 0x18, 0x84, 0x42, 0x40, 0x80, 0x00, 0x00, 0x08, 0x06, 0x00, 0x00, 0x00, 0x00, 0x06, 0x08, 0x08, 0x06, // 37
    0x80, 0x40, 0x40, 0x3C, 0xE2, 0x12, 0x0E, 0xA0, 0x60, 0x20, 0x00, 0x06, 0x0C, 0x08, 0x08, 0x08, 0x06, 0x0A, 0x08, 0x08, 0x08, 0x04, // 38
    0x1E, 0x00, // 39
    0xF0, 0x0C, 0x02, 0x01, 0x06, 0x18, 0x20, 0x40, // 40
    0x01, 0x02, 0x0C, 0xF0, 0x40, 0x20, 0x18, 0x06, // 41
    0x12, 0x0C, 0x3F, 0x0C, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, // 42
    0x20, 0x20, 0x20, 0xFC, 0x20, 0x20, 0x20, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // 43
    0x00, 0x00, 0x28, 0x18, // 44
    0x80, 0x80, 0x80, 0x00, 0x00, 0x00, // 45
    0x00, 0x08, // 46
    0x00, 0xE0, 0x1C, 0x03, 0x0C, 0x02, 0x00, 0x00, // 47
    0xFC, 0x02, 0x02, 0x02, 0xFC, 0x06, 0x08, 0x08, 0x08, 0x06, // 48
    0x04, 0xFE, 0x00, 0x08, 0x0E, 0x08, // 49
    0x04, 0x02, 0x82, 0x62, 0x1C, 0x0C, 0x0A, 0x08, 0x08, 0x0C, // 50
    0x04, 0x02, 0x22, 0x32, 0xCC, 0x08, 0x08, 0x08, 0x08, 0x06, // 51
    0xC0, 0xA0, 0x98, 0x84, 0xFE, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, // 52
    0x10, 0x1C, 0x12, 0x22, 0xC2, 0x08, 0x08, 0x08, 0x04, 0x02, // 53
    0xF0, 0x28, 0x14, 0x12, 0xE2, 0x06, 0x08, 0x08, 0x08, 0x06, // 54
    0x04, 0x02, 0x02, 0x02, 0xC2, 0x3A, 0x06, 0x00, 0x00, 0x00, 0x0C, 0x02, 0x00, 0x00, // 55
    0x8C, 0x52, 0x22, 0x52, 0x8C, 0x06, 0x08, 0x08, 0x08, 0x06, // 56
    0x3C, 0x42, 0x42, 0x42, 0xFC, 0x08, 0x08, 0x04, 0x02, 0x00, // 57
    0x10, 0x08, // 58
    0x10, 0x00, 0x28, 0x18, // 59
    0x20, 0x50, 0x50, 0x88, 0x88, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, // 60
    0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 61
    0x04, 0x88, 0x88, 0x50, 0x50, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, // 62
    0x0C, 0x02, 0xC2, 0x22, 0x1C, 0x00, 0x00, 0x0A, 0x00, 0x00, // 63
    0xF0, 0x08, 0x04, 0xE2, 0x11, 0x09, 0x09, 0x89, 0x71, 0x19, 0x02, 0xFC, 0x00, 0x0E, 0x10, 0x20, 0x46, 0x88, 0x88, 0x84, 0x86, 0x88, 0x48, 0x24, 0x12, 0x08, // 64
    0x00, 0x00, 0x00, 0xE0, 0x98, 0x86, 0x98, 0xE0, 0x00, 0x00, 0x00, 0x08, 0x08, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x08, 0x0E, 0x08, 0x08, // 65
    0x02, 0xFE, 0x22, 0x22, 0x22, 0x22, 0x5C, 0x80, 0x08, 0x0E, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, // 66
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x04, 0x0E, 0x02, 0x04, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, // 67
    0x02, 0xFE, 0x02, 0x02, 0x02, 0x02, 0x04, 0x08, 0xF0, 0x08, 0x0E, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, 0x00, // 68
    0x02, 0xFE, 0x22, 0x22, 0x72, 0x02, 0x06, 0x00, 0x08, 0x0E, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x02, // 69
    0x02, 0xFE, 0x22, 0x22, 0x72, 0x02, 0x06, 0x08, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, // 70
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x44, 0xCE, 0x40, 0x02, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x06, 0x00, // 71
    0x02, 0xFE, 0x22, 0x20, 0x20, 0x20, 0x22, 0xFE, 0x02, 0x08, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x08, 0x0E, 0x08, // 72
    0x02, 0xFE, 0x02, 0x08, 0x0E, 0x08, // 73
    0x00, 0x00, 0x02, 0xFE, 0x02, 0x0C, 0x08, 0x08, 0x06, 0x00, // 74
    0x02, 0xFE, 0x22, 0x60, 0x90, 0x0A, 0x06, 0x02, 0x02, 0x08, 0x0E, 0x08, 0x00, 0x00, 0x0A, 0x0C, 0x08, 0x08, // 75
    0x02, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x0E, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x02, // 76
    0x02, 0xFE, 0x06, 0x38, 0xC0, 0x00, 0xC0, 0x38, 0x06, 0xFE, 0x02, 0x08, 0x0E, 0x08, 0x00, 0x02, 0x0C, 0x02, 0x00, 0x08, 0x0E, 0x08, // 77
    0x02, 0xFE, 0x08, 0x10, 0x60, 0x80, 0x02, 0xFE, 0x02, 0x08, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x02, 0x0E, 0x00, // 78
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x02, 0x04, 0x08, 0x08, 0x08, 0x08, 0x08, 0x04, 0x02, // 79
    0x02, 0xFE, 0x42, 0x42, 0x42, 0x42, 0x3C, 0x08, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, // 80
    0xF8, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0xF8, 0x02, 0x04, 0x08, 0x08, 0x18, 0x28, 0x28, 0x44, 0x42, // 81
    0x02, 0xFE, 0x22, 0x22, 0x62, 0xA2, 0x1C, 0x00, 0x00, 0x08, 0x0E, 0x08, 0x00, 0x00, 0x02, 0x0C, 0x08, 0x08, // 82
    0x1C, 0x22, 0x22, 0x42, 0x44, 0x8E, 0x0E, 0x04, 0x08, 0x08, 0x08, 0x06, // 83
    0x06, 0x02, 0x02, 0x02, 0xFE, 0x02, 0x02, 0x02, 0x06, 0x00, 0x00, 0x00, 0x08, 0x0E, 0x08, 0x00, 0x00, 0x00, // 84
    0x02, 0xFE, 0x02, 0x00, 0x00, 0x00, 0x02, 0xFE, 0x02, 0x00, 0x02, 0x04, 0x08, 0x08, 0x08, 0x04, 0x02, 0x00, // 85
    0x02, 0x02, 0x0E, 0x72, 0x80, 0x00, 0x80, 0x72, 0x0E, 0x02, 0x02, 0x00, 0x00, 0x00, 0x00, 0x06, 0x0C, 0x02, 0x00, 0x00, 0x00, 0x00, // 86
    0x02, 0x02, 0x1E, 0xE2, 0x00, 0xC2, 0x32, 0x1E, 0xE2, 0x00, 0xC2, 0x3A, 0x06, 0x02, 0x00, 0x00, 0x00, 0x02, 0x0C, 0x02, 0x00, 0x00, 0x02, 0x0C, 0x02, 0x00, 0x00, 0x00, // 87
    0x02, 0x02, 0x06, 0x8A, 0xB2, 0x60, 0x92, 0x0A, 0x06, 0x02, 0x08, 0x08, 0x0C, 0x0A, 0x00, 0x00, 0x0A, 0x0C, 0x08, 0x08, // 88
    0x02, 0x02, 0x0E, 0x32, 0xC0, 0x20, 0x1A, 0x06, 0x02, 0x02, 0x00, 0x00, 0x00, 0x08, 0x0E, 0x08, 0x00, 0x00, 0x00, 0x00, // 89
    0x00, 0x0E, 0x82, 0x42, 0x22, 0x1A, 0x06, 0x02, 0x00, 0x08, 0x0C, 0x0A, 0x08, 0x08, 0x08, 0x08, 0x0C, 0x02, // 90
    0xFF, 0x01, 0x01, 0x7E, 0x40, 0x40, // 91
    0x03, 0x1C, 0xE0, 0x00, 0x00, 0x00, 0x02, 0x0C, // 92
    0x01, 0x01, 0xFF, 0x40, 0x40, 0x7E, // 93
    0x30, 0x0C, 0x02, 0x02, 0x0C, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 94
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, // 95
    0x02, 0x04, 0x00, 0x00, // 96
    0x20, 0x90, 0x90, 0x90, 0xE0, 0x00, 0x06, 0x08, 0x08, 0x08, 0x0E, 0x08, // 97
    0x02, 0xFF, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x06, 0x08, 0x08, 0x08, 0x06, // 98
    0xE0, 0x10, 0x10, 0x10, 0x20, 0x06, 0x08, 0x08, 0x08, 0x04, // 99
    0xE0, 0x10, 0x10, 0x22, 0xFF, 0x00, 0x06, 0x08, 0x08, 0x04, 0x0E, 0x04, // 100
    0xE0, 0x50, 0x50, 0x50, 0x60, 0x06, 0x08, 0x08, 0x08, 0x04, // 101
    0x10, 0xFE, 0x11, 0x11, 0x08, 0x0E, 0x08, 0x08, // 102
    0xE0, 0x10, 0x10, 0x10, 0xF0, 0x10, 0x34, 0x4A, 0x4A, 0x4A, 0x48, 0x30, // 103
    0x02, 0xFF, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x08, 0x0E, 0x08, 0x00, 0x08, 0x0E, 0x08, // 104
    0x20, 0xF1, 0x00, 0x08, 0x0E, 0x08, // 105
    0x20, 0xF1, 0x40, 0x3E, // 106
    0x02, 0xFF, 0x80, 0xC0, 0x30, 0x10, 0x10, 0x08, 0x0E, 0x08, 0x00, 0x0A, 0x0C, 0x08, // 107
    0x02, 0xFF, 0x00, 0x08, 0x0E, 0x08, // 108
    0x20, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x08, 0x0E, 0x08, 0x00, 0x08, 0x0E, 0x08, 0x00, 0x08, 0x0E, 0x08, // 109
    0x20, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x00, 0x08, 0x0E, 0x08, 0x00, 0x08, 0x0E, 0x08, // 110
    0xE0, 0x10, 0x10, 0x10, 0xE0, 0x06, 0x08, 0x08, 0x08, 0x06, // 111
    0x20, 0xF0, 0x20, 0x10, 0x10, 0xE0, 0x40, 0x7E, 0x44, 0x08, 0x08, 0x06, // 112
    0xE0, 0x10, 0x10, 0x20, 0xF0, 0x00, 0x06, 0x08, 0x08, 0x44, 0x7E, 0x40, // 113
    0x20, 0xF0, 0x20, 0x10, 0x10, 0x08, 0x0E, 0x08, 0x00, 0x00, // 114
    0x60, 0x90, 0x90, 0x30, 0x0C, 0x08, 0x08, 0x06, // 115
    0x10, 0xFC, 0x10, 0x10, 0x00, 0x0E, 0x08, 0x04, // 116
    0x10, 0xF0, 0x00, 0x00, 0x10, 0xF0, 0x00, 0x00, 0x06, 0x08, 0x08, 0x04, 0x0E, 0x04, // 117
    0x10, 0x70, 0x90, 0x00, 0x90, 0x70, 0x10, 0x00, 0x00, 0x06, 0x08, 0x06, 0x00, 0x00, // 118
    0x10, 0x70, 0x90, 0x00, 0x90, 0x70, 0x90, 0x00, 0x90, 0x70, 0x10, 0x00, 0x00, 0x06, 0x0C, 0x02, 0x00, 0x06, 0x0C, 0x02, 0x00, 0x00, // 119
    0x10, 0x30, 0x50, 0x80, 0x50, 0x30, 0x10, 0x08, 0x0C, 0x0A, 0x00, 0x0A, 0x0C, 0x08, // 120
    0x10, 0x70, 0x90, 0x00, 0x90, 0x70, 0x10, 0x40, 0x40, 0x22, 0x1C, 0x02, 0x00, 0x00, // 121
    0x00, 0x30, 0x90, 0x50, 0x30, 0x10, 0x08, 0x0C, 0x0A, 0x08, 0x08, 0x0C, // 122
    0x40, 0xBC, 0x02, 0x01, 0x00, 0x1E, 0x20, 0x40, // 123
    0xFF, 0x7E, // 124
    0x01, 0x02, 0xBC, 0x40, 0x40, 0x20, 0x3E, 0x00, // 125
    0x80, 0x40, 0x40, 0x40, 0x80, 0x80, 0x80, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 126
    0xFE, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xFE, 0x0E, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x0E // 127
    
};

#endif
