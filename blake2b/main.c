#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include "blake2.h"

int main(void)
{
    printf("start\n");
    uint8_t r[64];
    uint8_t k[64];
    uint8_t m[256];
    for (size_t i = 0; i < 256; i++) {
        m[i] = i;
    }
    for (size_t i = 0; i < 64; i++) {
        k[i] = i;
    }

    for (size_t i = 0; i < 256; i++) {
        blake2b(r, m, k, 64, i, 64);
    }
/*
    for (size_t i = 0; i < 64; i++) {
        blake2b(r, m, k, 64, 64, i);
    }
    for (size_t i = 0; i < 64; i++) {
        blake2b(r, m, k, i, 64, 64);
    }
*/
    return 0;
}
