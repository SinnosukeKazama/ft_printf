#include "../header/ft_printf.h"
int	ft_put_str(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i += ft_put_char(s[i]);
	return (i);
}
