/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexupr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:52:41 by aaouassa          #+#    #+#             */
/*   Updated: 2022/11/06 01:51:51 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexupr(unsigned int nbr)
{
	char	*s;
	int		count;

	count = 0;
	s = "0123456789ABCDEF";
	if (nbr < 16)
		count += ft_putchar(s[nbr]);
	else if (nbr >= 16)
	{
		count += ft_hexupr(nbr / 16);
		count += ft_hexupr(nbr % 16);
	}
	return (count);
}
