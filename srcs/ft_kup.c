/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_kup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:15:00 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:15:22 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                      ft_kup(keycode, t_data)                |
**                                                             |
**                       move with hitbox                      |
*/

void		ft_kup2(t_data *z)
{
	if (z->worldmap[(int)(z->posx + 0.1 + z->dirx * z->movespeed)]\
			[(int)(z->posy)] == 0 && (z->dirx > 0 && z->diry > 0))
		z->posx += z->dirx * z->movespeed;
	if (z->worldmap[(int)(z->posx)][(int)(z->posy + 0.1 + z->diry\
		* z->movespeed)] == 0 && (z->dirx > 0 && z->diry > 0))
		z->posy += z->diry * z->movespeed;
	if (z->worldmap[(int)(z->posx - 0.1 + z->dirx * z->movespeed)]\
			[(int)(z->posy)] == 0 && (z->dirx <= 0 && z->diry <= 0))
		z->posx += z->dirx * z->movespeed;
	if (z->worldmap[(int)(z->posx)][(int)(z->posy - 0.1 + z->diry\
		* z->movespeed)] == 0 && (z->dirx <= 0 && z->diry <= 0))
		z->posy += z->diry * z->movespeed;
}

void		ft_kup(t_data *z)
{
	if (z->worldmap[(int)(z->posx - 0.1 + z->dirx * z->movespeed)]\
			[(int)(z->posy)] == 0 && (z->dirx <= 0 && z->diry > 0))
		z->posx += z->dirx * z->movespeed;
	if (z->worldmap[(int)(z->posx)][(int)(z->posy + 0.1 + z->diry\
		* z->movespeed)] == 0 && (z->dirx <= 0 && z->diry > 0))
		z->posy += z->diry * z->movespeed;
	if (z->worldmap[(int)(z->posx + 0.1 + z->dirx * z->movespeed)]\
			[(int)(z->posy)] == 0 && (z->dirx > 0 && z->diry <= 0))
		z->posx += z->dirx * z->movespeed;
	if (z->worldmap[(int)(z->posx)][(int)(z->posy - 0.1 + z->diry\
		* z->movespeed)] == 0 && (z->dirx > 0 && z->diry <= 0))
		z->posy += z->diry * z->movespeed;
	ft_kup2(z);
}
