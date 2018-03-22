/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray_distfromhere.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:21:29 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:23:41 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                  ft_ray_distfromhere(t_data)                |
**                                                             |
**             get the distance of rays                        |
*/

void		ft_ray_distfromhere(t_data *z)
{
	z->deltadistx = sqrt(1 + (z->raydiry * z->raydiry) / \
			(z->raydirx * z->raydirx));
	z->deltadisty = sqrt(1 + (z->raydirx * z->raydirx) / \
			(z->raydiry * z->raydiry));
}
