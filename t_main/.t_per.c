#include "../source_code/header/ft_printf.h"
#include <limits.h>
#include <stdint.h>
#include <stdio.h>

int main(void)
{
	int re_ft, re_io;

	re_ft = ft_printf("%%");//% 1
	printf("re_ft=%i\n", re_ft);

	re_ft = ft_printf("%%%");  //% -1
	printf("re_ft=%i\n", re_ft);

	re_ft = ft_printf("%%%%"); //%% 2
	printf("re_ft=%i\n", re_ft);

	re_io = printf("%%"); //% 1
	printf("re_io=%i\n", re_io);

	re_io = printf("%%%");    //% 1
	printf("re_io=%i\n", re_io);

	re_io = printf("%%%%");   //%% 2
	printf("re_io=%i\n", re_io);

	printf("----------------------------------------\n");
	re_ft = ft_printf("%%%", 10);//% -1
	printf("re_ft=%i\n", re_ft);
	re_io = printf("%%%", 10);   //% 1
	printf("re_io=%i\n", re_io);

	re_ft = ft_printf("%%#%%%");//%#% -1
	printf("re_ft=%i\n", re_ft);
	re_io = printf("%%#%%%");   //%#% 3
	printf("re_io=%i\n", re_io);
	printf("----------------------------------------\n");

	
}
