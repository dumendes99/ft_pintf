#include "ft_printf.h"

void check_hashtag(char *str, t_flags *s_flags)
{
	if (str[s_flags->index] == '#')
	{
		s_flags->hashtag = 1;
		s_flags->index++;
	}
}

void print_hashtag(char *str, int *rest_size, t_flags *s_flags)
{
	if (s_flags->hashtag)
	{
		*rest_size = *rest_size - 2;
		if (s_flags->zero || s_flags->minus)
			ft_putstr("0x", 1, s_flags);
		else if (s_flags->hashtag && !s_flags->zero)
		{
			if (str[s_flags->index] == 'x')
				ft_putstr("0x", 1, s_flags);
			else
				ft_putstr("0X", 1, s_flags);
		}
		s_flags->hashtag = 0;
	}
}