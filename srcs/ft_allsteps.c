/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_allsteps.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:40:48 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:41:41 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_allsteps(t_data)                       |
**                                                             |
**             all steps of the raycasting render              |
*/

void		ft_allsteps(int x, t_data *z)
{
	movemask(z);
	ft_ray_posndir(x, z);
	ft_ray_distfromhere(z);
	ft_where_do_we_go(z);
	ft_where_sda_wall(z);
	ft_optic_correc(z);
	ft_wall_height(z);
	ft_walltext(z);
	ft_preptopskybox(x, z);
	ft_whichwalltext(x, z);
	ft_floorraycast(z);
	ft_drawfloortext(x, z);
}
