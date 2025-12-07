/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:35:31 by skazama           #+#    #+#             */
/*   Updated: 2025/12/07 18:33:09 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../header/ft_printf.h"

int	print_conversion_format(va_list args, const char format)
{
	int	len_count;

	len_count = 0;
	if (format == 'd' || format == 'i')
		len_count += ft_put_nbr(va_arg(args, int));
	else if (format == 'u')
		len_count += ft_put_unsignednbr(va_arg(args, unsigned int));
	else if (format == 'c')
		len_count += ft_put_char(va_arg(args, int));
	else if (format == 's')
		len_count += ft_put_str(va_arg(args, char *));
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
			++i;
			len_count += print_conversion_format(args, format[i]);
		}
		else
			len_count += ft_put_char(format[i]);
		++i;
	}
	va_end(args);
	return (len_count);
}
