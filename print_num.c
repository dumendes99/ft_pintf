#include "ft_printf.h"

void	ft_print_hex(char *str, t_flags *s_flags, va_list args)
{
	unsigned int	num;
	char			*lowerbase;
	char			*upperbase;
	char			*str_num;
	int				rest_size;

	lowerbase = "0123456789abcdef";
	upperbase = "0123456789ABCDEF";
	num = va_arg(args, unsigned int);
	if (str[s_flags->index] == 'x')
	{
		str_num = ft_itoa_hex(num, lowerbase);
		ft_putstr(str_num, 1, s_flags);
	}
	else
	{
		str_num = ft_itoa_hex(num, upperbase);
		ft_putstr(str_num, 1, s_flags);
	}
}

void	ft_print_pointer(va_list args, t_flags *s_flags)
{
	unsigned long long int	num;
	char					*lowerbase;
	int						rest_size;
	char					*str_num;

	lowerbase = "0123456789abcdef";
	num = va_arg(args, unsigned long long int);
	str_num = ft_itoa_hex(num, lowerbase);
	rest_size = (s_flags->width - (ft_strlen(str_num) + 2));
	if ((s_flags->minus) && (rest_size > 0))
	{
		ft_putstr("0x", 1, s_flags);
		ft_putstr(str_num, 1, s_flags);
		print_width(&rest_size, s_flags);
	}
	else if ((s_flags->zero) && (rest_size > 0))
	{
		ft_putstr("0x", 1, s_flags);
		print_width(&rest_size, s_flags);
		ft_putstr(str_num, 1, s_flags);
	}
	else
	{
		print_width(&rest_size, s_flags);
		ft_putstr("0x", 1, s_flags);
		ft_putstr(str_num, 1, s_flags);
	}
}

void	ft_print_unsig(va_list args, t_flags *s_flags)
{
	unsigned int	num;
	char			*str_num;
	int				i;
	int				rest_size;

	i = 0;
	num = va_arg(args, unsigned int);
	str_num = ft_utoa(num);
	rest_size = (s_flags->width - ft_strlen(str_num));
	if ((s_flags->minus) && (rest_size > 0))
	{
		ft_putstr(&str_num[i], 1, s_flags);
		print_width(&rest_size, s_flags);
	}
	else
	{
		print_width(&rest_size, s_flags);
		ft_putstr(&str_num[i], 1, s_flags);
	}
	free(str_num);
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
	if ((num < 0) && (s_flags->zero == 1))
	{
		ft_putchar_fd('-', 1, s_flags);
		i++;
	}
	if ((s_flags->minus) && (rest_size > 0))
	{
		ft_putstr(&str_num[i], 1, s_flags);
		print_width(&rest_size, s_flags);
	}
	else
	{
		print_width(&rest_size, s_flags);
		ft_putstr(&str_num[i], 1, s_flags);
	}
	free(str_num);
}
