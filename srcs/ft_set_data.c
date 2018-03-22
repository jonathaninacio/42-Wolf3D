/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_data.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:46:36 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:47:20 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                     set_data(t_data)                        |
**                                                             |
**    set the t_data struct, mlx_init, window, motion var,     |
**   3(rgb) colors from 0 -> 255, set it as the int color,     |
**                void* image and int* image                   |
*/

void		ft_set_data(t_data *z)
{
	int a;

	a = 0;
	if (!(z->mlx = mlx_init()))
		ft_badinit();
	z->win = mlx_new_window(z->mlx, WINSIZX, WINSIZY, "Joinacio");
	z->move_y = 0;
	z->move_x = 0;
	z->red = 0;
	z->gre = 255;
	z->blu = 0;
	z->color = set_color(0, z->red, z->gre, z->blu);
	z->imgbg = mlx_new_image(z->mlx, WINSIZX, WINSIZY);
	z->modifiable = (int *)mlx_get_data_addr(z->imgbg, &a, &a, &a);
	ft_set_texture(z);
	z->skyboxcount = 0;
	ft_readmap(z);
	z->worldmap = create_map(z);
}
