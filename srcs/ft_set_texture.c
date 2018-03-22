/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_texture.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:43:50 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:44:50 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                       ft_set_texture()                      |
**                                                             |
**            set all textures to an int * if needed           |
*/

void		ft_set_texture(t_data *z)
{
	int a;

	z->text = mlx_xpm_file_to_image(z->mlx, \
			"data/wall1.xpm", &z->textw, &z->texth);
	z->textm = (int *)mlx_get_data_addr(z->text, &a, &a, &a);
	z->text2 = mlx_xpm_file_to_image(z->mlx, \
			"data/wall2.xpm", &z->textw, &z->texth);
	z->text2m = (int *)mlx_get_data_addr(z->text2, &a, &a, &a);
	z->text3 = mlx_xpm_file_to_image(z->mlx, \
			"data/wall3.xpm", &z->textw, &z->texth);
	z->text3m = (int *)mlx_get_data_addr(z->text3, &a, &a, &a);
	z->text4 = mlx_xpm_file_to_image(z->mlx, \
			"data/wall4.xpm", &z->textw, &z->texth);
	z->text4m = (int *)mlx_get_data_addr(z->text4, &a, &a, &a);
	z->text42 = mlx_xpm_file_to_image(z->mlx, \
			"data/wall42.xpm", &z->textw, &z->texth);
	z->text42m = (int *)mlx_get_data_addr(z->text42, &a, &a, &a);
	z->weapon = mlx_xpm_file_to_image(z->mlx, "data/wad0.xpm", &a, &a);
	z->skybox = mlx_xpm_file_to_image(z->mlx, \
			"data/hellskybox.xpm", &z->skyboxw, &a);
	z->floortext = mlx_xpm_file_to_image(z->mlx, \
			"data/lava.xpm", &z->ftextw, &z->ftexth);
	z->floortextm = (int *)mlx_get_data_addr(z->floortext, &a, &a, &a);
}
