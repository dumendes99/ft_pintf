#include "ft_printf.h"

void	ft_parse_args(char *str, int i, va_list args)
{
	if ((str[i + 1] == 'd') || (str[i + 1] == 'i'))
		ft_print_num(args);
	else if (str[i + 1] == 'c')
		ft_print_char(args);
	else if (str[i + 1] == 's')
		ft_print_str(args);
	else if (str[i + 1] == 'u')
		ft_print_unsig(args);
	else if (str[i + 1] == 'p')
		ft_print_pointer(args);
	else if ((str[i + 1] == 'x') || (str[i + 1] == 'X'))
		ft_print_hex(str, i, args);
}

int	ft_printf(char *str, ...)
{
	int		count;
	int		flags
	va_list	args;

	count = 0;
	flags = 0;
	va_start(args, str);
	if (!(str) && !(args))
		return (-1);
	while (count < ft_strlen(str))
	{
		if (str[count] == '%')
		{
			ft_parse_args(str, &count, args);
			count++;
		}
		else
			ft_putchar_fd(str[count], 1);
		i++;
	}
	va_end(args);
	return (0);
}
