#include "ft_printf.h"
void	ft_putnbr_fd(int n, int fd)
{
	long int	ln;

	ln = n;
	if (ln < 0)
	{
		ln *= -1;
		ft_putchar_fd('-', fd);
	}
	if (ln < 10)
	{
		ft_putchar_fd((signed char)ln + '0', fd);
		return ;
	}
	else if (ln > 9)
	{
		ft_putnbr_fd(ln / 10, fd);
		ft_putnbr_fd(ln % 10, fd);
	}
}
