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
	int		rest_size;

	str = va_arg(args, char *);
	rest_size = s_flags->width - ft_strlen(str);
	if (rest_size > 0)
		print_width(&rest_size, s_flags);
	ft_putstr(str, 1, s_flags);
}
