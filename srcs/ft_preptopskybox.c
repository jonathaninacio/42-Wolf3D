/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preptopskybox.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:27:40 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:28:19 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_preptopskybox (t_data)                 |
**                                                             |
**       replace the top by none color before skybox render    |
*/

void		ft_preptopskybox(int x, t_data *z)
{
	int s;

	s = 0;
	while (s < z->drawstart)
	{
		z->color = set_color(255, 0, 0, 0);
		drawpixel(z, x, s, z->color);
		s++;
	}
}
