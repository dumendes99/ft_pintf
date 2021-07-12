#include "ft_printf.h"

void	ft_print_char(va_list args)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1);
}

void	ft_print_str(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
	}
}

