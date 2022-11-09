/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexlow.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 21:53:08 by aaouassa          #+#    #+#             */
/*   Updated: 2022/11/06 01:50:52 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexlow(unsigned int nbr)
{
	char	*s;
	int		count;

	count = 0;
	s = "0123456789abcdef";
	if (nbr < 16)
		count += ft_putchar(s[nbr]);
	else if (nbr >= 16)
	{
		count += ft_hexlow(nbr / 16);
		count += ft_hexlow(nbr % 16);
	}
	return (count);
}
