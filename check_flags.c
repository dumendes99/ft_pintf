#include "ft_printf.h"

void ft_check_flags(char *str, t_flags *s_flags)
{
	if (str[s_flags->index] == '-')
	{
		s_flags->minus = 1;
		s_flags->index++;
	}
	else if (str[s_flags->index] == '0')
	{
		s_flags->zero = 1;
		s_flags->index++;
	}
	else if (str[s_flags->index] == '.')
	{
		s_flags->dot = 1;
		s_flags->index++;
	}
}