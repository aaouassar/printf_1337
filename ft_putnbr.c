/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:34:07 by aaouassa          #+#    #+#             */
/*   Updated: 2022/11/06 15:41:35 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{	
	long long int	j;
	int				count;

	count = 0;
	j = nb;
	if (j < 0)
	{
		count += ft_putchar('-');
		j = -j;
	}
	if (j > 9)
	{
		count += ft_putnbr(j / 10);
		count += ft_putnbr(j % 10);
	}	
	else
	{
		count += ft_putchar(j + '0');
	}
	return (count);
}
