/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:35:31 by skazama           #+#    #+#             */
/*   Updated: 2025/12/05 13:15:34 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	print_conversion_format(va_list args, const char format)
{
	int	len_count;

	len_count = 0;
	if (format == 'd')
		len_count = ft_putnbr(va_arg(args, int));
	else if (format == 'c')
		len_count = ft_putchar(va_arg(args, int));
	else if (format == 's')
		len_count = ft_putstr(va_arg(args, char *));
	return (len_count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int	len_count;

	i = 0;
	len_count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len_count += print_conversion_format(args, format[i + 1]);
		}
		else
		{
			ft_putchar(format[i], FD_STD_OUT);
			++len_count;
		}
		++i;
	}
	va_end(args);
}

/////////////////
int main(void)
{
	ft_printf("%d%d%c%d", 10, 20, 'x', 30);
	ft_printf("%s%s", "abc", "def");
	ft_printf("%d%f%c", 50, 3.3, 'Z');
	ft_printf("ABCD\n");
}
