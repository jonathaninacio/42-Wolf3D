/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:22:37 by joinacio          #+#    #+#             */
/*   Updated: 2016/11/08 18:38:12 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int z;

	z = n;
	if (z < 0)
	{
		ft_putchar('-');
		z = z * -1;
	}
	if (z >= 10)
	{
		ft_putnbr(z / 10);
		ft_putchar((z % 10) + '0');
	}
	if (z < 10)
		ft_putchar(z + '0');
}
