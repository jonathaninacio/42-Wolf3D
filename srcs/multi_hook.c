/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multi_hook.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:25:44 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:26:23 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                     multi_hook(t_data)                      |
**                                                             |
**    launch multiple mlx_hook :                               |
**                 - KeyPress -> KeyRelease                    |
**                 - DestroyNotify -> NoEventMask              |
**                 - MotionNotify -> NoEventMask               |
**                 - ButtonPress -> ButtonRelease              |
*/

void	multi_hook(t_data *z)
{
	mlx_hook(z->win, 2, 0l, key, z);
	mlx_hook(z->win, 3, 0l, keyr, z);
	mlx_hook(z->win, 17, 0L, destroy, z);
	mlx_hook(z->win, 4, 0L, button, z);
	mlx_expose_hook(z->win, ft_expose, z);
	mlx_loop_hook(z->mlx, ft_raycast, z);
}
