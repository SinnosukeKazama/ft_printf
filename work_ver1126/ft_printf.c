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
/*
size_t	index_functions(char c)
{
	const char	conversion_signs[] = "csd";
	size_t	i;

	i = 0;
	while (conversion_signs != '\0')
	{
		if (conversion_signs[i] == c)//true
			return (i);
		++i;
	}
	return (99);//error value.
}*/

void	print_conversion_format(va_list args, const char *format)
{
printf ("PCF\n");
	if (*format == 'd')
		ft_putnbr_fd(va_arg(args, int), 0);
	else if (*format == 'c')
		ft_putchar_fd(va_arg(args, char), 0);
	else if (*format == 's')
		ft_putstr_fd(va_arg(args, char *), 0);
	else
		ft_putstr_fd("error\n", 0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_start(args, format);
	size_t	i;

	i = 0;
	while (format[i] != '\0')
	{
//'%'はあるか.なければformat を出力
		if (format[i] == '%')
		{
			++i;
			print_conversion_format(args, &format[i]);
		}
		else
		{
			printf("%s", format);
			break;
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
