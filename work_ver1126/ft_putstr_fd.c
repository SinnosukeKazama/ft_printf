#include "ft_printf.h"
int	ft_putstr(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		++i;
	}
	return (i + 1);
}
