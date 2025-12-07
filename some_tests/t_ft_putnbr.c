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
		return ((unsigned int)(n * -1))
	else
		return ((unsigned int)n);
}
int	count_digit(const int n, const int n_base)
{
	unsigned int	u_n;

	u_n = ft_abs(n);
	while (u_n > n_base)
}
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
	}
	else if (ln > 9)
	{
		ft_putnbr(ln / 10);
		ft_putnbr(ln % 10);
	}
	return (count_digit(n));
}
int main(void)
{
	printf("ft:return v = %i\n", ft_putnbr(30));
	printf("io:return v = %i\n", printf("%i",30));
	printf("ft:return v = %i\n", ft_putnbr(0));
	printf("io:return v = %i\n", printf("%i",0));
}
