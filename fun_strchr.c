#include "libft.h"

char	*fun_strchr(const char *s, int c){
	
    while (*s != (char)c)
   {

        if (!*s++)

       return (0);
   }
       return (char *)s;
}