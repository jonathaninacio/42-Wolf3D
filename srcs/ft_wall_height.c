/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wall_height.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:38:19 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:39:29 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_wall_height(t_data)                    |
**                                                             |
**                   calculate camera view height              |
*/

void		ft_wall_height(t_data *z)
{
	z->lineheight = (int)(WINSIZY / z->wallhdist);
	z->drawstart = (-z->lineheight / 2 + WINSIZY / 2);
	if (z->drawstart < 0)
		z->drawstart = 0;
	z->drawend = (z->lineheight / 2 + WINSIZY / 2);
	if (z->drawend >= WINSIZY)
		z->drawend = WINSIZY - 1;
}
