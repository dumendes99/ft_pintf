#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar_fd(char c, int fd, t_flags *s_flags)
{
	write(fd, &c, 1);
	s_flags->size++;
}
