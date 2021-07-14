#include "ft_printf.h"

void	ft_print_hex(char *str, t_flags *s_flags, va_list args)
{
	unsigned int	num;
	char			*lowerbase;
	char			*upperbase;

	lowerbase = "0123456789abcdef";
	upperbase = "0123456789ABCDEF";
	num = va_arg(args, unsigned int);
	if (str[s_flags->index] == 'x')
		ft_putnbr_hex(lowerbase, num, s_flags);
	else
		ft_putnbr_hex(upperbase, num, s_flags);
}

void	ft_putnbr_hex(char *base, unsigned long long int num, t_flags *s_flags)
{
	size_t	len_base;

	len_base = ft_strlen(base);
	if (num / len_base > 0)
		ft_putnbr_hex(base, num / len_base, s_flags);
	ft_putchar_fd(base[num % len_base], 1, s_flags);
}

void	ft_print_pointer(va_list args, t_flags *s_flags)
{
	unsigned long long int	num;
	char					*lowerbase;

	lowerbase = "0123456789abcdef";
	num = va_arg(args, unsigned long long int);
	ft_putchar_fd('0', 1, s_flags);
	ft_putchar_fd('x', 1, s_flags);
	ft_putnbr_hex(lowerbase, num, s_flags);
}

void	ft_print_unsig(va_list args, t_flags *s_flags)
{
	unsigned int	num;
	char			*str_num;
	int				i;

	i = 0;
	num = va_arg(args, unsigned int);
	str_num = ft_utoa(num);
	while (str_num[i])
	{
		ft_putchar_fd(str_num[i], 1, s_flags);
		i++;
	}
	free(str_num);
}

void	print_width(int *rest_size, t_flags *s_flags)
{
	if ((s_flags->minus == 1) && (s_flags->zero == 1))
		s_flags->zero = 0;
	if (s_flags->zero)
		while (*rest_size)
		{
			ft_putchar_fd('0', 1, s_flags);
			*rest_size = *rest_size - 1;
		}
	else
		while (*rest_size)
		{
			ft_putchar_fd(' ', 1, s_flags);
			*rest_size = *rest_size - 1;
		}
}
void	ft_print_num(va_list args, t_flags *s_flags)
{
	int		num;
	char	*str_num;
	int		i;
	int		rest_size;

	i = 0;
	num = va_arg(args, int);
	str_num = ft_itoa(num);
	rest_size = (s_flags->width - ft_strlen(str_num));
	if (num < 0 && ++i)
		ft_putchar_fd('-', 1, s_flags);
	print_width(&rest_size, s_flags);
	while (str_num[i])
	{
		ft_putchar_fd(str_num[i], 1, s_flags);
		i++;
	}
	free(str_num);
}
