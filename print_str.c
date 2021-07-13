#include "ft_printf.h"

void	ft_print_char(va_list args, t_flags *s_flags)
{
	char	c;

	c = va_arg(args, int);
	ft_putchar_fd(c, 1, s_flags);

}

void	ft_print_str(va_list args, t_flags *s_flags)
{
	char	*str;

	str = va_arg(args, char *);
	while (*str)
	{
		ft_putchar_fd(*str, 1, s_flags);
		str++;
	}
}
