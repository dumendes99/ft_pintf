#include "ft_printf.h"

void	ft_check_sign(char *str, t_flags *s_flags)
{
	if (str[s_flags->index] == '-')
	{
		s_flags->minus = 1;
		s_flags->index++;
	}
	if (str[s_flags->index] == '0')
	{
		s_flags->zero = 1;
		s_flags->index++;
	}
	if (str[s_flags->index] == '+')
	{
		s_flags->plus = 1;
		s_flags->index++;
	}
	if (str[s_flags->space] == ' ')
	{
		s_flags->space = 1;
		s_flags->index++;
	}
	// ft_result_sign(s_flags); // criar essa função que vai conferir quais anulam quais;
}

void	ft_check_width(char *str, t_flags *s_flags, va_list args)
{
	if (str[s_flags->index] == '*')
	{
		printf("%d\n", s_flags->width = va_arg(args, int));
	}
	while (str[s_flags->index] >= '0' && str[s_flags->index] <= '9')
	{
		s_flags->width = ft_atoi(str, s_flags);
		printf("width = %d\n", s_flags->width);
	}
}
