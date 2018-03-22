/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawpixel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:46:33 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:47:37 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**        drawpixel(t_data *z, int x, int y, int color)        |
**                                                             |
**           set a color to a pixel with his coord             |
*/

void		drawpixel(t_data *z, int x, int y, int color)
{
	z->modifiable[(y * WINSIZX) + (x)] = color;
}
