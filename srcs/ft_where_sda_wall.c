/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_where_sda_wall.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:27:53 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:28:45 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_where_sda_wall(t_data)                 |
**                                                             |
**                   check if ray hit a wall                   |
*/

void		ft_where_sda_wall(t_data *z)
{
	while (z->hitawall == 0)
	{
		if (z->sidedistx < z->sidedisty)
		{
			z->sidedistx += z->deltadistx;
			z->lvlx += z->stepx;
			z->side = 0;
		}
		else
		{
			z->sidedisty += z->deltadisty;
			z->lvly += z->stepy;
			z->side = 1;
		}
		if (z->worldmap[z->lvlx][z->lvly] > 0)
			z->hitawall = 1;
	}
}
