#include "ft_printf.h"

void	init_struct(t_flags *s_flags)
{
	s_flags->minus = 0;
	s_flags->zero = 0;
	s_flags->width = 0;
	s_flags->dot = 0;
	s_flags->index = 0;
	s_flags->size = 0;
	s_flags->plus = 0;
	s_flags->space = 0;
}
