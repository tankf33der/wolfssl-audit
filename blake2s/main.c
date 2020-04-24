#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include "blake2.h"

int main(void)
{
    printf("start\n");
    uint8_t r[32];
    uint8_t k[32];
    uint8_t m[256];
    for (size_t i = 0; i < 256; i++) {
        m[i] = i;
    }
    for (size_t i = 0; i < 32; i++) {
        k[i] = i;
    }

    for (size_t i = 0; i < 256; i++) {
        blake2s(r, m, k, 32, i, 32);
    }
    for (size_t i = 0; i < 32; i++) {
        blake2s(r, m, k, 32, 32, i);
    }
    for (size_t i = 0; i < 32; i++) {
        blake2s(r, m, k, i, 32, 32);
    }
    return 0;
}
