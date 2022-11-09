/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsids.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 09:32:56 by aaouassa          #+#    #+#             */
/*   Updated: 2022/11/06 01:48:29 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unisds(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb > 9)
	{
		count += ft_unisds(nb / 10);
		count += ft_unisds(nb % 10);
	}
	else
		count += ft_putchar(nb + 48);
	return (count);
}
