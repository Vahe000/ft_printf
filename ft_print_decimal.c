/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:45:54 by vasargsy          #+#    #+#             */
/*   Updated: 2022/04/12 14:43:32 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_decimal(int nb)
{
	long	n;
	int		len;

	len = 0;
	n = nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		n = -n;
		len ++;
	}
	if (n < 10)
	{
		n += 48;
		write(1, &n, 1);
		len++;
	}
	else
	{
		len += ft_print_decimal(n / 10);
		len += ft_print_decimal(n % 10);
	}
	return (len);
}
