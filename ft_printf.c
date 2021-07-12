#include "ft_printf.h"

int	ft_printf(char *str, ...)
{
	va_list	args;
	t_flags	s_flags;

	init_struct(&s_flags);
	va_start(args, str);
	while (s_flags.index < ft_strlen(str))
	{
		if (str[s_flags.index] == '%')
		{
			s_flags.index++;
			ft_parse_args(str, &s_flags, args);
		}
		else
			ft_putchar_fd(str[s_flags.index], 1);
		s_flags.index++;
	}
	va_end(args);
	return (s_flags.index);
}
