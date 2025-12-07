#include "ft_printf.h"
int	ft_putnbr(int n)
{
	long int	ln;

	ln = n;
	if (ln < 0)
	{
		ln *= -1;
		ft_putchar('-');
	}
	if (ln < 10)
	{
		ft_putchar((signed char)ln + '0');
		return (1);//->digit();
	}
	else if (ln > 9)
	{
		ft_putnbr(ln / 10);
		ft_putnbr(ln % 10);
	}
}
