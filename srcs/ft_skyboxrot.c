/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_skyboxrot.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:48:33 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:49:05 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_skyboxrot(t_data)                      |
**                                                             |
**                skybox rotetion calculation                  |
*/

void		ft_skyboxrot(t_data *z)
{
	if (z->rotskybox / 100 <= -3200)
		z->rotskybox = 0;
	if (z->rotskybox / 100 > 0)
		z->rotskybox = -3200 * 100;
	ft_skycount(z);
}
