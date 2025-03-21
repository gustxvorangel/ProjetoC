#include "libft.h"

 char	*fun_strncat(char *s1, const char *s2, size_t n){

	size_t	i;
	size_t	j;

	i = 0;
	j = 0; 
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0' && j < n)
	{
		s1[i + j] = s2[j];
		j++;
	}
	s1[i + j] = '\0';
	return (s1);
}