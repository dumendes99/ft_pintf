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
	int		i;
	va_list	args;

	i = 0;
	va_start(args, str);
	while (i < ft_strlen(str))
	{
		if (str[i] == '%')
		{
			ft_parse_args(str, i, args);
			i++;
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (0);
}

int main(void)
{
	int n = -1;
	int hex = 15643;
	char c = 'e';
	char *str = "eduardo";
	ft_printf("%d meu \n", n);
	printf("%d std \n", n);

	ft_printf("%c meu \n", c);
	printf("%c std \n", c);
	
	ft_printf("%s meu \n", str);
	printf("%s std \n", str);

	ft_printf("%i meu \n", n);
	printf("%i std \n", n);

	ft_printf("%u meu \n", n);
	printf("%u std \n", n);
	
	ft_printf("%p meu \n", &n);
	printf("%p std \n", &n);

	ft_printf("%x meu \n", hex);
	printf("%x std \n", hex);

	ft_printf("%X meu \n", hex);
	printf("%X std \n", hex);

}