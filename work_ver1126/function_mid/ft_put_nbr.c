#include "../header/ft_printf.h"

static unsigned int	ft_abs(const int n)
{
	if (n < 0)
		return ((unsigned int)(-(long long)n));
	else
		return ((unsigned int)n);
}

static int	count_digit(const int n, const unsigned int n_base)
{
	unsigned int	u_n;
	int	n_digit;

	u_n = ft_abs(n);
	n_digit = 1;
	while (u_n >= n_base)
	{
		u_n /= n_base;
		n_digit++;
	}
	return (n_digit);
}

int	ft_put_nbr(int n)
{
	const unsigned int	base = 10;
	int	len_print;
	long int	ln;

	ln = n;
	len_print = 0;
	if (ln < 0)
	{
		ln *= -1;
		len_print += ft_put_char('-');
	}
	if (ln < base)
	{
		ft_put_char((signed char)ln + '0');
	}
	else if (ln >= base)
	{
		ft_put_nbr(ln / base);
		ft_put_nbr(ln % base);
	}
	len_print += count_digit(n, base);
	return (len_print);
}
