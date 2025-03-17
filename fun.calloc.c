
#include "libft.h"
void	*fun_calloc(size_t count, size_t size)
{
	void *res;

	res = malloc(count * size);
	if (!res)
		return (NULL);
	fun_bzero(res, count * size);
	return (res);
}
