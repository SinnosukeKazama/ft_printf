/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsignednbr.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/07 18:28:34 by skazama           #+#    #+#             */
/*   Updated: 2025/12/07 18:48:15 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

static int	count_digit_unsigned(unsigned un, const unsigned int n_base)
{
	int	n_digit;

	n_digit = 1;
	while (un >= n_base)
	{
		un /= n_base;
		n_digit++;
	}
	return (n_digit);
}

int	ft_put_unsignednbr(unsigned int un)
{
	const unsigned int	base = 10;

	if (un < base)
	{
		ft_put_char((signed char)un + '0');
	}
	else if (un >= base)
	{
		ft_put_unsignednbr(un / base);
		ft_put_unsignednbr(un % base);
	}
	return (count_digit_unsigned(un, base));
}
