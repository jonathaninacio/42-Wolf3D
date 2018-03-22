/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_pos.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:45:16 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:45:52 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                     ft_set_pos(t_data)                      |
**                                                             |
**             set the positions/orientation/speed/status      |
**                     of the player to default                |
*/

void		ft_set_pos(t_data *z)
{
	z->posx = 4;
	z->posy = 4;
	z->dirx = -1;
	z->diry = 0;
	z->planex = 0;
	z->planey = 0.66;
	z->walkmotion = 0;
	z->movespeed = 0.0001;
	z->rotspeed = 0.00005;
	z->weapontrig = 0;
	z->rotskybox = 0;
	set_kmov(z);
}
