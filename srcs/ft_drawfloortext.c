/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_drawfloortext.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:35:12 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:40:30 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_drawfloortext (t_data)                 |
**                                                             |
**             draw pixel from the floor texture               |
*/

void		ft_drawfloortext(int x, t_data *z)
{
	int j;

	j = z->drawend + 1;
	while (j < WINSIZY)
	{
		z->currentdist = WINSIZY / (2.0 * j - WINSIZY);
		z->weight = (z->currentdist - z->distplayer)\
		/ (z->wallhdist - z->distplayer);
		z->currentfloorx = z->weight * z->floorxwall\
		+ (1.0 - z->weight) * z->posx;
		z->currentfloory = z->weight * z->floorywall\
		+ (1.0 - z->weight) * z->posy;
		z->floortexx = (int)(z->currentfloorx * z->ftextw) % z->ftextw;
		z->floortexy = (int)(z->currentfloory * z->ftexth) % z->ftexth;
		z->color = z->floortextm[z->ftextw * z->floortexy + z->floortexx];
		drawpixel(z, x, j, z->color);
		++j;
	}
}
