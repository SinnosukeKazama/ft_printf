#include <stdio.h>
#include <limits.h>
#include <stdint.h>
#include "../header/ft_printf.h"
void	t_char(void)
{
	int re_ft, re_io;
	printf("t_char-------------------\n");
	printf("1)\n");
	re_ft = ft_printf("%c", 'D');//ok
	re_io = printf("%c", 'D');
	printf("\nre_ ft=%i, io=%i\n", re_ft, re_io);//re ok
	printf("2)\n");
	re_ft = ft_printf("%c%c", 'D', 'D');//ok
	re_io = printf("%c%c", 'D', 'D');
	printf("\nre_ ft=%i, io=%i\n", re_ft, re_io);//re ok

	printf("\n");
}
void	t_str(void)
{
	printf("t_str-------------------------\n");
	printf("1)\n");
	int re_ft = ft_printf("%s", "ABC");//ok
	printf("\n");
	int re_io = printf("%s", "ABC");
	printf("\n");
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);
	
	printf("2)\n");
	char	*s = "ABCDE";
	re_ft = ft_printf("%s", s);//ok
	printf("\n");
	re_io = printf("%s", s);
	printf("\n");
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);

	printf("3)\n");
	char *s2 = "123456";
	re_ft = ft_printf("%s%s", s, s2);//ok
	printf("\n");
	re_io = printf("%s%s", s, s2);
	printf("\n");
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);

	printf("4)\n");
	re_ft = ft_printf("this is test3)%s%s", s, s2);//ok
	printf("\n");
	re_io = printf("this is test3)%s%s", s, s2);
	printf("\n");
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);
}

void	t_str_and_char(void)
{
	printf("t_str_and_char--------------------------\n");
	int re_ft = ft_printf("%s%c\n", "ABC", 'd');
	int re_io = printf("%s%c\n", "ABC", 'd');
	printf("\n");
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);
	
}

void	t_int(void)
{
	printf("t_int----------------------\n");
	printf("1)\n");
	int	re_ft = ft_printf("%d\n", 10);
	int	re_io = printf("%d\n", 10);
	//return value + 1(\n)
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);

	printf("2)\n");
	re_ft = ft_printf("%d\n", INT_MIN);
	re_io = printf("%d\n", INT_MIN);
	//return value + 1(\n)
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);
	
	printf("3)\n");
	re_ft = ft_printf("%d\n", INT_MAX);
	re_io = printf("%d\n", INT_MAX);
	//return value + 1(\n)
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);

	printf("4)\n");
	re_ft = ft_printf("%d\n", 0);
	re_io = printf("%d\n", 0);
	//return value + 1(\n)
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);

	printf("5)\n");
	re_ft = ft_printf("%d\n", -0);
	re_io = printf("%d\n", -0);
	//return value + 1(\n)
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);
}

void	t_uint(void)
{
	printf("t_uint----------------------\n");
	
	printf("1)\n");
	int	re_ft = ft_printf("%u\n", 10);
	int	re_io = printf("%u\n", 10);
	//return value + 1(\n)
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);

	printf("2)\n");
	re_ft = ft_printf("%u\n", 0);
	re_io = printf("%u\n", 0);
	//return value + 1(\n)
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);

	printf("3)\n");
	re_ft = ft_printf("%u\n", UINT_MAX);
	re_io = printf("%u\n", UINT_MAX);
	//return value + 1(\n)
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);

	printf("4)\n");
	re_ft = ft_printf("%u%u\n", 0, 255);
	re_io = printf("%u%u\n", 0, 255);
	//return value + 1(\n)
	printf("re_ft=%i, re_io=%i\n", re_ft, re_io);
}
int main(void)
{
	t_char();
	t_str();
	t_str_and_char();
	t_int();
	t_uint();
}
