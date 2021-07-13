#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_flags
{
	int	sign;
	int	zero;
	int	width;
	int	prec;
	int	index;
	size_t size;
}	t_flags;

int		ft_printf(const char *str, ...);
void	ft_parse_args(char *str, t_flags *s_flags, va_list args);
int		ft_strlen(char *str);
void	ft_putchar_fd(char c, int fd, t_flags *s_flags);
char	*ft_itoa(int num);
int		ft_checklen(int num);
void	ft_print_num(va_list args, t_flags *s_flags);
void	ft_print_char(va_list args, t_flags *s_flags);
void	ft_print_str(va_list args, t_flags *s_flags);
void	ft_print_unsig(va_list args, t_flags *s_flags);
void	ft_print_pointer(va_list args, t_flags *s_flags);
void	ft_print_hex(char *str, t_flags *s_flags, va_list args);
char	*ft_utoa(unsigned int num);
int		ft_check_unsig(unsigned int num);
void	ft_putnbr_hex(char *base, unsigned long long int num, t_flags *s_flags);
void	init_struct(t_flags *s_flags);

#endif