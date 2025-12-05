#include <stdarg.h>
#include <stdio.h>

void	print(const char *format, ...)
{
	va_list	args;
	va_start(args, format);

	const char	*p;
	size_t	i;

	p = format;
	i = 0;
	while (p[i] != '\0')
	{
		if (p[i] == '%')
		{
			++i;
			if (p[i] == 'd')
				printf("%i", va_arg(args, int));	//ft_putnumber
			else if (p[i] == 'f')
				printf("%lf", va_arg(args, double));	//ft_putnumber
			else if (p[i] == 'c')
				printf("%c", va_arg(args, char));	//ft_putchar
			else if (p[i] == 's')
				printf("%s", va_arg(args, const char *));//ft_putstr
			else
			{
				printf("ERROR\n");
				break;
			}
		}
		++i;
	}
	printf("\n");
	va_end(args);
}

int main(void)
{
    print("%d%d%c%d", 10, 20, 'x', 30);
    print("%s%s", "abc", "def");
    print("%d%f%c", 50, 3.3, 'Z');
}
