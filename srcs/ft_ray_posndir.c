/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_posndir.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:51:41 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:53:00 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                  ft_ray_posndir(int x, t_data)              |
**                                                             |
**             set the positions/orientation rays              |
**                  from the player	pos	                       |
*/

void		ft_ray_posndir(int x, t_data *z)
{
	z->visionx = 2 * x / (double)WINSIZX - 1;
	z->rayposx = z->posx;
	z->rayposy = z->posy;
	z->raydirx = z->dirx + z->planex * z->visionx;
	z->raydiry = z->diry + z->planey * z->visionx;
	z->lvlx = (int)z->rayposx;
	z->lvly = (int)z->rayposy;
	z->hitawall = 0;
}
