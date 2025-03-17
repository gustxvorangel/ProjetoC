#include "libft.h"
void	fun_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		fun_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		fun_putchar_fd('-', fd);
		fun_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		fun_putnbr_fd(n / 10, fd);
		fun_putchar_fd(n % 10 + '0', fd);
	}
	else
		fun_putchar_fd(n + '0', fd);
}