#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

void *memset(void *dst, int c, size_t n)
 {
     if (n) {
         char *d = dst;

         do {
             *d++ = c;
         } while (--n);
     }
     return dst;
 }


void *memcpy(void *__restrict __dest, const void *__restrict __src, size_t __n)
{
   char *csrc = (char *)__src;
   char *cdest = (char *)__dest;
   for (size_t i=0; i<__n; i++) {
       cdest[i] = csrc[i];
   }
   return __dest;
}
