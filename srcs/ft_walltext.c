/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_walltext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:33:19 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:35:16 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_walltext(t_data)                       |
**                                                             |
**             wallcast and texture calculation                |
*/

void		ft_walltext(t_data *z)
{
	if (z->side == 0)
		z->wallx = z->rayposy + z->wallhdist * z->raydiry;
	else
		z->wallx = z->rayposx + z->wallhdist * z->raydirx;
	z->wallx -= floor((z->wallx));
	z->textx = (int)(z->wallx * (double)z->textw);
	if (z->side == 0 && z->raydirx > 0)
		z->textx = z->textw - z->textx - 1;
	if (z->side == 1 && z->raydiry < 0)
		z->textx = z->textw - z->textx - 1;
}
