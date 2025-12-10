/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digit_unsigned.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:14:44 by skazama           #+#    #+#             */
/*   Updated: 2025/12/10 16:20:18 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	count_digit_unsigned(unsigned un, const unsigned int n_base)
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
