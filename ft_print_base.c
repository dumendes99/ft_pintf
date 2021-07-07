#include "ft_printf.h"

void	ft_putnbr_hex(char *base, unsigned long long int num)
{
	size_t len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putnbr_hex(base, num / len_base);
	ft_putchar_fd(base[num % len_base], 1);
}
