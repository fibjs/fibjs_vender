/* The MIT License (MIT)
 *
 * Copyright (c) 2015 mehdi sotoodeh
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#include "curve25519_mehdi.h"

/* Linker expects this */

EDP_BLINDING_CTX edp_custom_blinding = {
    W256(0x8869B072, 0x58B262BC, 0xE32D3A61, 0x39608B4F, 0x9D89ECB9, 0xC9CE3304, 0x48F0B76F, 0x0871ADF4),
    { W256(0x0AA28C78, 0x7E925BF0, 0xEA304262, 0xC5BCA23A, 0xD0AE1AD1, 0xA5B282D3, 0x0B63B8F7, 0x12D645C5),
        W256(0x036F96C2, 0xB4C60821, 0x11AA73FC, 0x54D922F1, 0x01CB7AD7, 0x944898BB, 0xC1B70616, 0xF3CB170F),
        W256(0x6ED30222, 0x5BBA27EC, 0x1012744C, 0xE8828782, 0xB1224A21, 0x762F4EB9, 0xC0A604F9, 0x3798991C),
        W256(0x189C6DA2, 0xCBC9AE70, 0xED9B1B36, 0x7270BB46, 0x620CA91F, 0x8BB3E371, 0xDC5E859A, 0x67DA9D45) }
};
