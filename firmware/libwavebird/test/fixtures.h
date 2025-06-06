#pragma once

#include <stdint.h>

// Input state from a real controller (resting state)
// - ID:        0x2B1
// - Buttons:   None
// - Stick:     0x88, 0x7F
// - Substick:  0x88, 0x82
// - Triggers:  0x1A, 0x14
static const uint8_t packet_input_state_resting[] = {
    0x40, 0x44, 0x2A, 0xEC, 0x66, 0xF5, 0xE5, 0x6D, 0x7F, 0x5F, 0x53, 0x9D, 0xB1, 0xB2, 0x23, 0x36, 0x88, 0x60, 0x00,
};

static const uint8_t message_input_state_resting[] = {
    0x00, 0xAB, 0x10, 0x00, 0x88, 0x7F, 0x88, 0x82, 0x1A, 0x14, 0x00,
};

static const uint32_t codewords_input_state_resting[] = {
    0x001afff3,
    0x07756a5f,
    0x59fffc80,
    0x0394a9d0,
};

// Origin from a real controller
// - ID:        0x2B1
// - Stick:     0x86, 0x7F
// - Substick:  0x8B, 0x83
// - Triggers:  0x1B, 0x13
static const uint8_t packet_origin[] = {
    0x26, 0x26, 0x84, 0x4E, 0xAC, 0x8A, 0xC6, 0xC0, 0xA4, 0x26, 0xB5, 0x7E, 0xDB, 0xA5, 0x04, 0x51, 0x70, 0x20, 0x00,
};

static const uint8_t message_origin[] = {
    0x00, 0xEB, 0x18, 0x67, 0xF8, 0xB8, 0x31, 0xB1, 0x30, 0x00, 0x00,
};