#include <unistd.h>
#include <stdio.h>
int	ft_putchar(char c)
{
	write(0, &c, 1);
	return (1);
}

unsigned int	ft_abs(const int n)
{
	if (n < 0)
		return ((unsigned int)(-(long long)n));
	else
		return ((unsigned int)n);
}

int	count_digit(const int n, const unsigned int n_base)
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

int	ft_putnbr(int n)
{
	const unsigned int	base;
	long int	ln;

	ln = n;
	if (ln < 0)
	{
		ln *= -1;
		ft_putchar('-');
	}
	if (ln < base)
	{
		ft_putchar((signed char)ln + '0');
	}
	else if (ln >= base)
	{
		ft_putnbr(ln / base);
		ft_putnbr(ln % base);
	}
	return (count_digit(n, base));
}
int main(void)
{
	printf("%i\n", count_digit(10, 10));
	printf("ft:return v = %i\n", ft_putnbr(30));
	printf("io:return v = %i\n", printf("%i",30));
	printf("ft:return v = %i\n", ft_putnbr(0));
	printf("io:return v = %i\n", printf("%i",0));
}
