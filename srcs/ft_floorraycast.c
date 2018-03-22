/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_floorraycast.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:29:52 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:31:22 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_floorraycast (t_data)                  |
**                                                             |
**             calculate floor text aka floorcasting           |
*/

void		ft_floorraycast(t_data *z)
{
	if (z->side == 0 && z->raydirx > 0)
	{
		z->floorxwall = z->lvlx;
		z->floorywall = z->lvly + z->wallx;
	}
	else if (z->side == 0 && z->raydirx < 0)
	{
		z->floorxwall = z->lvlx + 1.0;
		z->floorywall = z->lvly + z->wallx;
	}
	else if (z->side == 1 && z->raydiry > 0)
	{
		z->floorxwall = z->lvlx + z->wallx;
		z->floorywall = z->lvly;
	}
	else
	{
		z->floorxwall = z->lvlx + z->wallx;
		z->floorywall = z->lvly + 1.0;
	}
	z->distplayer = 0.0;
	if (z->drawend < 0)
		z->drawend = WINSIZY;
}
