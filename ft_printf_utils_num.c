#include "ft_printf.h"

int	ft_check_unsig(unsigned int num)
{
	int	i;

	i = 1;
	while (num >= 10)
	{
		i++;
		num = num / 10;
	}
	return (i);
}

int	ft_checklen(int num)
{
	int				i;
	unsigned int	n;

	i = 1;
	if (num < 0)
	{
		num *= -1;
		i++;
	}
	n = num;
	while (n > 1)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_utoa(unsigned int num)
{
	char	*str;
	int		len;

	len = ft_check_unsig(num);
	str = (char *)malloc(sizeof(char) * len);
	while (len--)
	{
		str[len] = (num % 10) + '0';
		num = num / 10;
	}
	return (str);
}

char	*ft_itoa(int num)
{
	char			*str;
	int				len;
	int				neg;
	unsigned int	n;

	neg = 0;
	len = ft_checklen(num);
	str = (char *)malloc(sizeof(char) * len);
	if (num < 0)
	{
		neg = 1;
		num *= -1;
		n = num;
	}
	n = num;
	while (len--)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	if (neg == 1)
	{
		str[0] = '-';
	}
	return (str);
}
