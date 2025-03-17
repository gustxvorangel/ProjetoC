#include "libft.h"

void	*fun_memset(void *b, int c, size_t len)    /*Vai preencher um bloco de memória com um valor específico(ponteirob) 										    e o converte para tipo char
							                         Recebe um ponteiro para um boco de memória, um valor e um tamanho. 								                            Preenche cada byte do bloco de memória com o valor especificado.*/
{ 
	char *p;

	p = (char *)b;
	while (len > 0)
	{
		*p = c;
		p++;
		len--;
	}
	return (b);
}