#include "ft_printf.h"

void	ft_parse_args(char *str, int *count, va_list args)
{
	if ((str[*count] == 'd') || (str[*count] == 'i'))
		ft_print_num(args);
	else if (str[*count] == 'c')
		ft_print_char(args);
	else if (str[*count] == 's')
		ft_print_str(args);
	else if (str[*count] == 'u')
		ft_print_unsig(args);
	else if (str[*count] == 'p')
		ft_print_pointer(args);
	else if ((str[*count] == 'x') || (str[*count] == 'X'))
		ft_print_hex(str, *count, args);
}

int	ft_printf(char *str, ...)
{
	int		count;
	va_list	args;

	count = 0;
	va_start(args, str);
	while (count < ft_strlen(str))
	{
		if (str[count] == '%')
		{
			count++;
			ft_parse_args(str,  &count, args);
			count++;
		}
		else
			ft_putchar_fd(str[count], 1);
		count++;
	}
	va_end(args);
	return (0);
}
