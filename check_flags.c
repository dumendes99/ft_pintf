#include "ft_printf.h"

void ft_check_flags(char *str, t_flags *s_flags)
{
	if (str[s_flags->index] == '-')
	{
		s_flags->sign = 1;
		s_flags->index++;
	}
	if else (str[s_flags->index] == '.')
	{
		
	}
}