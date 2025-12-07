#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(0, &c, 1);
	return (1);
}
