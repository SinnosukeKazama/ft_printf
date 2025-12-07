#include "../header/ft_printf.h"

int	ft_put_char(char c)
{
	write(1, &c, 1);
	return (1);
}
