#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>


void *
memset(void *__s, int __c, size_t __n)
{
/*
    if (__n != 0) {
        char *d = __s;

        do {
            *d++ = __c;
        } while (--__n != 0);
    }
    return (__s);
*/
    unsigned int index;
    unsigned char *memory = s, value = c;

    for (index = 0; index < n; index++)
        memory[index] = value;

    return (memory);
}
void *memcpy(void *__restrict __dest, const void *__restrict __src, size_t __n)
{
   char *csrc = (char *)__src;
   char *cdest = (char *)__dest;
   for (size_t i=0; i<__n; i++)
       cdest[i] = csrc[i];
}
