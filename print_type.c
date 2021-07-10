#include "ft_printf.h"

void	ft_print_hex(char *str, int count, va_list args)
{
	unsigned int num;
	char *lowerbase;
	char *upperbase;
	
	lowerbase = "0123456789abcdef";
	upperbase = "0123456789ABCDEF";
	num = va_arg(args, unsigned int);
	if (str[count + 1] == 'x')
		ft_putnbr_hex(lowerbase, num);
	else
		ft_putnbr_hex(upperbase, num);
}


void	ft_print_pointer(va_list args)
{
	unsigned long long int	num;
	char					*lowerbase;
	lowerbase = "0123456789abcdef";

	num = va_arg(args, unsigned long long int);
	ft_putchar_fd('0', 1);
	ft_putchar_fd('x', 1);
	ft_putnbr_hex(lowerbase, num);
}

void	ft_print_unsig(va_list args)
{
	unsigned int	num;
	char			*str_num;

	num = va_arg(args, unsigned int);
	str_num = ft_utoa(num);
	while (*str_num)
	{
		ft_putchar_fd(*str_num, 1);
		str_num++;
	}
}

void	ft_print_num(va_list args)
{
	int		num;
	char	*str_num;

	num = va_arg(args, int);
	str_num = ft_itoa(num);
	while (*str_num)
	{
		ft_putchar_fd(*str_num, 1);
		str_num++;
	}
}

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
