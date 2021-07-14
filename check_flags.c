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
}

void	ft_check_width(char *str, t_flags *s_flags)
{
	while (str[s_flags->index] >= '1' && str[s_flags->index] <= '9')
	{
		s_flags->width = ft_atoi(str, s_flags);
		printf("width = %d\n", s_flags->width);
	}
}