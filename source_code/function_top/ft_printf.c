/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 19:35:31 by skazama           #+#    #+#             */
/*   Updated: 2025/12/25 22:09:29 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

static int	print_conversion_format(va_list args, const char c_format)
{
	int	len_count;

	len_count = 0;
	if (c_format == 'd' || c_format == 'i')
		len_count += ft_put_nbr(va_arg(args, int));
	else if (c_format == 'u')
		len_count += ft_put_unsignednbr(va_arg(args, unsigned int));
	else if (c_format == 'x')
		len_count += ft_put_hexadecimal(va_arg(args, unsigned int), lower);
	else if (c_format == 'X')
		len_count += ft_put_hexadecimal(va_arg(args, unsigned int), upper);
	else if (c_format == 'p')
		len_count += ft_put_ptr(va_arg(args, void *));
	else if (c_format == 'c')
		len_count += ft_put_char(va_arg(args, int));
	else if (c_format == 's')
		len_count += ft_put_str(va_arg(args, char *));
	else if (c_format == '%')
		len_count += ft_put_char('%');
	return (len_count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	size_t	i;
	int		len_count;

	i = 0;
	len_count = 0;
	va_start(args, format);
	if (!format)
		return (ERROR_FORMAT);
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
