/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_optic_correc.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:23:58 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:24:56 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_optic_correc(t_data)                   |
**                                                             |
**                   calculate camera view height              |
*/

void		ft_optic_correc(t_data *z)
{
	if (z->side == 0)
		z->wallhdist = (z->lvlx - z->rayposx + (1 - z->stepx) / 2) / z->raydirx;
	else
		z->wallhdist = (z->lvly - z->rayposy + (1 - z->stepy) / 2) / z->raydiry;
}
