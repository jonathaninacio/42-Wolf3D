/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:48:09 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:48:54 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                         destroy()                           |
**                                                             |
**          when red cross is used to exit the window          |
*/

int		destroy(t_data *z)
{
	mlx_destroy_image(z->mlx, z->imgbg);
	system("killall sh | killall afplay");
	exit(0);
}
