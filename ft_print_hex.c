/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:07:53 by vasargsy          #+#    #+#             */
/*   Updated: 2022/04/12 17:50:39 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include	<stdio.h>

int	ft_print_hex(unsigned long n, int x)
{
	int	len;

	len = 0;
	if (n > 15)
		len += ft_print_hex(n / 16, x);
	n = n % 16;
	if (n > 9 && x == 0)
		len += ft_print_c(n + 87);
	else if (n > 9 && x == 1)
		len += ft_print_c(n + 55);
	else if (n < 10)
		len += ft_print_c(n + 48);
	return (len);
}
