#include "ft_printf.h"

int test (int num, ...)
{
	int some;
	int count;
	va_list argptr;

	some = 0;
	count = 0;
	va_start(argptr, num);
	while (count < num)
	{
		some += va_arg(argptr, int);
		count++;
	}
	va_end(argptr);
	return (some);
}

void printstr(int num, ...)
{
	int count = 0;
	char *ptr;
	va_list argptr;

	va_start(argptr, num);
	while (count < num)
	{
		ptr = va_arg(argptr, char *);
		printf("ptr = %s\n", ptr);
		count++;
	}
	va_end(argptr);
}

// int main(int argc, char *argv[])
// {
// 	int total;
// 	i = 0;
// 	total = test(5, 5, 5, 5, 10, 10);
// 	printf("total is %d\n", total);
// 	printstr(4, "one", "two", "tree");
// 	while (i < argc)
// 	{
// 		printf("%s\n", argv[i])
// 		i++;
// 	}
// 	return (0);	
// }

int main(void)
{
	int i = -124;

	printf("%i\n%d\n", i, i);
	
}