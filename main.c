#include "ft_printf.h"

int main(void)
{
	int hex = 15643;
	char c = 'e';
	char *str = NULL;

	printf(" %d\n", ft_printf("%012s| meu ", "salve"));
	printf(" %d\n\n", printf("%012s| std ", "salve"));

	printf(" %d\n", ft_printf("%-12s| meu ", "salve"));
	printf(" %d\n\n", printf("%-12s| std ", "salve"));

	printf(" %d\n", ft_printf("%012c| meu ", 'd'));
	printf(" %d\n\n", printf("%012c| std ", 'd'));

	printf(" %d\n", ft_printf("%-12c| meu ", 'd'));
	printf(" %d\n\n", printf("%-12c| std ", 'd'));
	
	printf(" %d\n", ft_printf("%012x| meu ", -1));
	printf(" %d\n\n", printf("%012x| std ", -1));

	printf(" %d\n", ft_printf("%-15x| meu ", hex));
	printf(" %d\n\n", printf("%-15x| std ", hex));

	printf(" %d\n", ft_printf("%#015x| meu ", hex));
	printf(" %d\n\n", printf("%#015x| std ", hex));

	printf(" %d\n", ft_printf("%#15X| meu ", hex));
	printf(" %d\n\n", printf("%#15X| std ", hex));

	printf(" %d\n", ft_printf("%012X, %X, %002X|", -1, 3, 30));
	printf(" %d\n\n", printf("%012X, %X, %002X|", -1, 3, 30));

	printf(" %d\n", ft_printf("%#Xp", 0));
	printf(" %d\n\n", printf("%#Xp", 0));

	printf(" %d\n", ft_printf("%#Xp", 42));
	printf(" %d\n\n", printf("%#Xp", 42));

	printf(" %d\n", ft_printf("% i| meu ", 0));
	printf(" %d\n\n", printf("% i| std ", 0));

	printf(" %d\n", ft_printf("qualquer coisa| meu "));
	printf(" %d\n\n", printf("qualquer coisa| std "));

	printf(" %d\n", ft_printf("%- 10d| meu ", 123));
	printf(" %d\n\n", printf("%- 10d| std ", 123));

	printf(" %d\n", ft_printf("%+-010d| meu ", 123));
	printf(" %d\n\n", printf("%+-010d| std ", 123));

	printf(" %d\n", ft_printf("%+10d| meu ", 123));
	printf(" %d\n\n", printf("%+10d| std ", 123));

 	printf(" %d\n", ft_printf("%+010d| meu ", 123));
	printf(" %d\n\n", printf("%+010d| std ", 123));

	printf(" %d\n", ft_printf("%010d| meu ", 123));
	printf(" %d\n\n", printf("%010d| std ", 123));

	printf(" %d\n", ft_printf("%10d| meu ", 333));
	printf(" %d\n\n", printf("%10d| std ", 333));

	printf(" %d\n", ft_printf("%d| meu ", 123));
	printf(" %d\n\n", printf("%d| std ", 123));

	printf(" %d\n", ft_printf("%c| meu ", c));
	printf(" %d\n\n", printf("%c| std ", c));
 
	printf(" %d\n", ft_printf("%s| meu ", str));
	printf(" %d\n\n", printf("%s| std ", str));

	printf(" %d\n", ft_printf("%15s| meu ", str));
	printf(" %d\n\n", printf("%15s| std ", str));

	printf(" %d\n", ft_printf("% 15s| meu ", str));
	printf(" %d\n\n", printf("% 15s| std ", str));

	printf(" %d\n", ft_printf("%015i| meu ", 123));
	printf(" %d\n\n", printf("%015i| std ", 123));

	printf(" %d\n", ft_printf("%015u| meu ", 123));
	printf(" %d\n\n", printf("%015u| std ", 123));

	printf(" %d\n", ft_printf("%020p| meu ", &str));
	printf(" %d\n\n", printf("%020p| std ", &str));

	printf(" %d\n", ft_printf("%-20p| meu ", &str));
	printf(" %d\n\n", printf("%-20p| std ", &str));

	printf(" %d\n", ft_printf("%20p| meu ", &str));
	printf(" %d\n\n", printf("%20p| std ", &str));

	printf(" %d\n", ft_printf("%p| meu ", &str));
	printf(" %d\n\n", printf("%p| std ", &str));

	printf(" %d\n", ft_printf("%#x| meu ", hex));
	printf(" %d\n\n", printf("%#x| std ", hex));

	printf(" %d\n", ft_printf("%%| meu "));
	printf(" %d\n", printf("%%| std "));
}
