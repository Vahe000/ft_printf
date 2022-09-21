/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vasargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 18:23:05 by vasargsy          #+#    #+#             */
/*   Updated: 2022/04/12 17:37:20 by vasargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format_s(va_list *ap, const char c)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_print_c(va_arg(*ap, int));
	else if (c == 's')
		len += ft_print_str(va_arg(*ap, char *));
	else if (c == 'p')
		len += ft_print_p(va_arg(*ap, unsigned long ));
	else if (c == 'd')
		len += ft_print_decimal(va_arg(*ap, int));
	else if (c == 'i')
		len += ft_print_decimal(va_arg(*ap, int));
	else if (c == 'u')
		len += ft_print_unsigned(va_arg(*ap, unsigned int));
	else if (c == 'x')
		len += ft_print_hex(va_arg(*ap, unsigned int), 0);
	else if (c == 'X')
		len += ft_print_hex(va_arg(*ap, unsigned int), 1);
	else if (c == '%')
		len += ft_print_c('%');
	return (len);
}

int	ft_printf(const char *fmt, ...)
{
	int		len;
	int		i;
	va_list	ap;

	i = 0;
	len = 0;
	va_start(ap, fmt);
	if (!fmt)
		return (0);
	while (fmt[i])
	{
		if (fmt[i] == '%')
		{
			len += format_s(&ap, fmt[++i]);
			i++;
		}
		else
		{
			len += ft_print_c(fmt[i]);
			i++;
		}
	}
	va_end(ap);
	return (len);
}

int main()
{
	ft_printf(" % %c %d \n ",454);
	printf ("% %c %d ",454);
}
