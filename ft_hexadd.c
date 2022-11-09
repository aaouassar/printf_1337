/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:33:12 by aaouassa          #+#    #+#             */
/*   Updated: 2022/11/06 01:50:32 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadd(unsigned long nb)
{
	char	*s;
	int		count;

	count = 0;
	s = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_hexadd(nb / 16);
		count += ft_hexadd(nb % 16);
	}
	else
		count += ft_putchar(s[nb]);
	return (count);
}
