/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_animatewad.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:33:12 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:34:53 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                      ft_animatewad (t_data)                 |
**                                                             |
**                  animate your pacifist weapon!              |
*/

void		ft_animatewad2(t_data *z)
{
	int a;

	a = 0;
	if (z->weaponanim == 8)
		z->weapon = mlx_xpm_file_to_image(z->mlx, "data/wad2.xpm", &a, &a);
	else if (z->weaponanim == 12)
		z->weapon = mlx_xpm_file_to_image(z->mlx, "data/wad3.xpm", &a, &a);
	else if (z->weaponanim == 16)
		z->weapon = mlx_xpm_file_to_image(z->mlx, "data/wad4.xpm", &a, &a);
	else if (z->weaponanim == 20)
		z->weapon = mlx_xpm_file_to_image(z->mlx, "data/wad5.xpm", &a, &a);
	else if (z->weaponanim == 28)
		z->weapon = mlx_xpm_file_to_image(z->mlx, "data/wad4.xpm", &a, &a);
	else if (z->weaponanim == 32)
		z->weapon = mlx_xpm_file_to_image(z->mlx, "data/wad1.xpm", &a, &a);
}

void		ft_animatewad(t_data *z)
{
	int a;

	a = 0;
	if (z->weaponanim == 4)
	{
		z->weapon = mlx_xpm_file_to_image(z->mlx, "data/wad1.xpm", &a, &a);
		system("/usr/bin/afplay data/DSPDIEHI.wav &>/dev/null &");
	}
	ft_animatewad2(z);
	if (z->weaponanim == 36)
	{
		z->weaponanim = 0;
		z->weapontrig = 0;
	}
	else if (z->weaponanim == 0)
		z->weapon = mlx_xpm_file_to_image(z->mlx, "data/wad0.xpm", &a, &a);
	if (z->weapontrig == 1)
		++z->weaponanim;
}
