#include "libft.h"


char	*fun_strnstr(const char *haystack, const char *needle, size_t len)   //procura substring em uma  string//
{
	unsigned long	i;
	int				j;
 
	j = 0;
	i = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i])
	{
		j = 0;
		while (haystack[i] == needle[j] && haystack[i] && i < len)
		{
			i++;
			j++;
		}
		if (!needle[j])
			return ((char *)&haystack[i - j]);
		i = (i - j) + 1;
	}
	return (NULL);
}