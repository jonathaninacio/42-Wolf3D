/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generate_image.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:25:14 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:32:37 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_generate_image(t_data)                 |
**                                                             |
**                all image process for wolf render            |
*/

void		ft_generate_image(t_data *z)
{
	ft_skyboxrot(z);
	mlx_put_image_to_window(z->mlx, z->win, z->skybox, z->rotskybox / 100, 0);
	mlx_put_image_to_window(z->mlx, z->win, z->imgbg, 0, 0);
	ft_animatewad(z);
	mlx_put_image_to_window(z->mlx, z->win, z->weapon, WINSIZX / 2 - 250, \
			WINSIZY - 300 + z->walkmotion / 1000);
}
