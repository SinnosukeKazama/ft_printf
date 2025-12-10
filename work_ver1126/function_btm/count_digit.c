/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_digit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skazama <skazama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/10 16:15:48 by skazama           #+#    #+#             */
/*   Updated: 2025/12/10 16:17:38 by skazama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../header/ft_printf.h"

int	count_digit(const int n, const unsigned int n_base)
{
	unsigned int	u_n;
	int	n_digit;

	u_n = ft_abs(n);
	n_digit = 1;
	while (u_n >= n_base)
	{
		u_n /= n_base;
		n_digit++;
	}
	return (n_digit);
}
