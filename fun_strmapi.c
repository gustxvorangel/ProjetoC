#include "libft.h"
char	*fun_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*strf;
	char			*tmp;

	if (!s || !f)
		return (NULL);
	strf = (char *)malloc(fun_strlen(s) + 1);
	if (!strf)
		return (NULL);
	i = 0;
	tmp = strf;
	while (*s)
		*tmp++ = f(i++, *s++);
	*tmp = '\0';
	return (strf);
}