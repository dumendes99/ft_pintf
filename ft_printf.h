#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

int		ft_strlen(char *str);
void	ft_putchar_fd(char c, int fd);
char	*ft_itoa(int num);
int		ft_checklen(int num);
void	ft_print_num(va_list args);
void	ft_print_char(va_list args);
void	ft_print_str(va_list args);
void	ft_print_unsig(va_list args);
void	ft_print_pointer(va_list args);
void	ft_print_hex(char *str, int i, va_list args);
char	*ft_utoa(unsigned int num);
int		ft_check_unsig(unsigned int num);
void	ft_putnbr_hex(char *base, unsigned long long int num);

#endif