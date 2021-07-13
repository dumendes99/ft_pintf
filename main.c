#include "ft_printf.h"

int main(void)
{
	int n = -113;
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