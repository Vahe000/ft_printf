/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 13:58:34 by vasargsy          #+#    #+#             */
/*   Updated: 2022/04/12 15:17:47 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_p(unsigned long p)
{
	int	len;

	len = 2;
	write(1, "0x", 2);
	len += ft_print_hex((unsigned long)p, 0);
	return (len);
}
