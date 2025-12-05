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

#include <stdio.h>//printf
#include <stdlib.h>//size_t
#include <stdarg.h>//va_arg..

void	print_conversion_format(va_list args, const char *format)
{
	if (*format == 'd')
		printf("%i", va_arg(args, int));	//ft_putnumber
	else if (*format == 'f')
		printf("%lf", va_arg(args, double));	//ft_putnumber
	else if (*format == 'c')
		printf("%c", va_arg(args, char));	//ft_putchar
	else if (*format == 's')
		printf("%s", va_arg(args, const char *));//ft_putstr
	else
		printf("ERROR\n");
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
//コンバージョンサインが正常にあるか.なければエラー。
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
