#include "ft_printf.h"

int	ft_checklen_base(unsigned long long num)
{
	int size;

	size = 1;
	while (num >= 16)
	{
		size++;
		num = num / 16;
	}
	return (size);
}

char	*ft_itoa_hex(unsigned long long num, t_flags *s_flags, char *str)
{
	char	*str_num;
	int		len;
	char	*lowerbase;
	char	*upperbase;

	lowerbase = "0123456789abcdef";
	upperbase = "0123456789ABCDEF";

	len = ft_checklen_base(num);
	str_num = (char *)malloc(sizeof(char) * len + 1);
	str_num[len] = '\0';
	if (str[s_flags->index] == 'X')
		while (len--)
		{
			str_num[len] = upperbase[num % 16];
			num = num / 16;
		}
	else
		while (len--)
		{
			str_num[len] = lowerbase[num % 16];
			num = num / 16;
		}
	return (str_num);
}
