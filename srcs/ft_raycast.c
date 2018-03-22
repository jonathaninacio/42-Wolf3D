/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_raycast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:53:23 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:54:08 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_raycast(t_data)                        |
**                                                             |
**             basically thats wolf3d process...               |
*/

int		ft_raycast(t_data *z)
{
	int x;

	x = 0;
	ft_memset(z->modifiable, 0, WINSIZX * WINSIZY * 4);
	while (x < WINSIZX)
	{
		ft_allsteps(x, z);
		x++;
	}
	ft_generate_image(z);
	return (x);
}
