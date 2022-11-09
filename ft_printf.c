/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:28:22 by aaouassa          #+#    #+#             */
/*   Updated: 2022/11/07 21:05:21 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(va_list p, char a)
{
	int	i;

	i = 0;
	if (a == '%')
		i += ft_putchar('%');
	else if (a == 'c')
		i += ft_putchar(va_arg(p, int));
	else if (a == 's')
		i += ft_putstr(va_arg(p, char *));
	else if (a == 'd' || a == 'i')
		i += ft_putnbr(va_arg(p, int));
	else if (a == 'u')
		i += ft_unisds(va_arg(p, unsigned int));
	else if (a == 'x')
		i += ft_hexlow(va_arg(p, unsigned int));
	else if (a == 'X')
		i += ft_hexupr(va_arg(p, unsigned int));
	else if (a == 'p')
	{
		i += ft_putstr("0x");
		i += ft_hexadd(va_arg(p, unsigned long));
	}
	else
		i += ft_putchar(a);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	p;
	int		len;
	int		i;

	va_start (p, str);
	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] != '%')
		{
			write(1, &str[i], 1);
			len++;
		}
		else if (str[i] == '%')
		{
			if (str[i + 1] == '\0')
				break ;
			len += ft_check(p, str[i + 1]);
			i++;
		}
		i++;
	}
	va_end (p);
	return (len);
}
