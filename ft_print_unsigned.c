/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 20:05:02 by vasargsy          #+#    #+#             */
/*   Updated: 2022/04/12 14:59:36 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_print_unsigned(n / 10);
	n = n % 10;
	if (n < 10)
		len += ft_print_c(n + 48);
	return (len);
}
