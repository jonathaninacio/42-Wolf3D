/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skycount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:42:13 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:43:28 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                        ft_skycount (t_data)                 |
**                                                             |
**                  animate lighning in the skybox!            |
*/

void		ft_skycount(t_data *z)
{
	int a;

	if (z->skyboxcount == 200)
	{
		z->skybox = mlx_xpm_file_to_image(z->mlx, \
				"data/hellskybox2.xpm", &z->skyboxw, &a);
		system("/usr/bin/afplay data/hellskybox2.wav &>/dev/null &");
	}
	if (z->skyboxcount == 400)
	{
		z->skybox = mlx_xpm_file_to_image(z->mlx, \
				"data/hellskybox3.xpm", &z->skyboxw, &a);
		system("/usr/bin/afplay data/hellskybox3.wav &>/dev/null &");
	}
	++z->skyboxcount;
	if (z->skyboxcount == 500 || z->skyboxcount == 205 || z->skyboxcount == 405)
		z->skybox = mlx_xpm_file_to_image(z->mlx, \
				"data/hellskybox.xpm", &z->skyboxw, &a);
	if (z->skyboxcount == 501)
		z->skyboxcount = 0;
}
