/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 19:43:00 by vasargsy          #+#    #+#             */
/*   Updated: 2022/04/12 15:02:28 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		ft_print_str("(null)");
		return (6);
	}
	while (*str)
	{
		write(1, str, 1);
		str++;
		len++;
	}
	return (len);
}
