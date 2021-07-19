#include "ft_printf.h"

void	print_width(int *rest_size, t_flags *s_flags)
{
	if ((s_flags->minus == 1) && (s_flags->zero == 1))
		s_flags->zero = 0;
	if ((s_flags->zero) && (*rest_size > 0))
		while (*rest_size)
		{
			ft_putchar_fd('0', 1, s_flags);
			*rest_size = *rest_size - 1;
		}
	else
		while (*rest_size > 0)
		{
			ft_putchar_fd(' ', 1, s_flags);
			*rest_size = *rest_size - 1;
		}
}