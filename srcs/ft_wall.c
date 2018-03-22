/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:41:03 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:41:33 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                      ft_wall(x + t_data + walltextm)        |
**                                                             |
**                  texture function for wall                  |
*/

void		ft_wall(int x, t_data *z, int *textm)
{
	int y;
	int d;

	y = z->drawstart;
	while (y < z->drawend)
	{
		d = y * 256 - WINSIZY * 128 + z->lineheight * 128;
		z->texty = ((d * z->texth) / z->lineheight) / 256;
		z->color = textm[z->texth * z->texty + z->textx];
		if (z->side == 1)
			drawpixel(z, x, y, z->color = \
					(z->color >> 1) & 8355711 - 4311812614);
		else
			drawpixel(z, x, y, z->color);
		y++;
	}
}
