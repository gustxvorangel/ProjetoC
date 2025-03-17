#include "libft.h"

void	*fun_memmove (void *dst, const void *src, size_t n) {
   
	unsigned char *d = dst;
    	const unsigned char *s = src;
   
	if (d < s) {
        while (n--) {
            *d++ = *s++;
        }
    } else {
        d += n;
        s += n;
        while (n--) {
            *--d = *--s;
        }
    }
    return dst;
}