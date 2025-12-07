#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(fd, &c, 1);
	return (1);
}
