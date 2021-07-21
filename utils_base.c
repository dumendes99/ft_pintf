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

char	*ft_itoa_hex(unsigned long long num, char *base)
{
	char	*str;
	int		len;

	len = ft_checklen_base(num);
	str = (char *)malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	while (len--)
	{
		str[len] = base[num % 16];
		num = num / 16;
	}
	return (str);
}
