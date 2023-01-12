
#include <stdio.h>
#include <limits.h>
#include "ft_printf.h"
int	ft_printf(const char *fmt, ...);


int	main()
{
	int a = 1;
	int *ptr;
	int	len;
	
	ptr  = &a;
	len = 0;
	len = ft_printf("test 1 - char\n%c\t", '*');
	printf("%c\nreturn len is (16)%d\n", '*', len);
	len = ft_printf("\ntest 2 - string\n %s \n", "@Hello World!$!");
	printf(" %s \nreturn len is (35)%d\n", "@Hello World!$!", len);
	ft_printf("\ntest 3 - pointer\n%p\t%p\t%p\t%p\n", (void *)0, (void *)INT_MAX, &a, ptr);
	printf("%p\t%p\t%p\t%p\n", (void *)0, (void *)INT_MAX, &a, ptr);
	ft_printf("\ntest 4 - int d\n %d \n", INT_MAX);
	printf(" %d \n", INT_MAX);
	ft_printf("\ntest 5 - int i (base 10)\n %i\n", INT_MIN);
	printf(" %i\n", INT_MIN);
	ft_printf("\ntest 6 - unsigned int\n %u\n", UINT_MAX);
	printf(" %u\n", UINT_MAX);
	ft_printf("\ntest 7 - hex lower case\n %x \t", 29);
	printf(" %x \n", 29);
	ft_printf("\ntest 8 - hex upper case\n %X \t", 29);
	printf(" %X \n", 29);
	ft_printf("\ntest 9  - percent\nvalue is %%\t");
	printf("value is %%\n");
	return 0;
}

/*
int	main(void)
{
	char str[] = "Hello Wolrd";
	int i = 115;
	int i2 = -125;
	char	c = 'k';

	printf("%i", 	printf(" %i \n", i));
	//ft_printf ("%+.0d The minus.\n", i, i2);
	//printf("Ori:%i\n", printf (" % 1s", ""));
	//printf("My:%i\n", ft_printf (" % 1s", ""));
	printf("%i", 	ft_printf(" %i \n", i));
}
*/
