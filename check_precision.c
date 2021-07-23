#include "ft_printf.h"

void check_precision(char *str, t_flags *s_flags)
{
	if (str[s_flags->index] == '.')
	{
		s_flags->dot = 1;
		s_flags->index++;
		s_flags->precision = ft_atoi(str, s_flags);
	}
}

void check_hashtag(char *str, t_flags *s_flags)
{
	if (str[s_flags->index] == '#')
	{
		s_flags->hashtag = 1;
		s_flags->index++;
	}
}