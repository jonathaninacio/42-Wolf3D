/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_where_do_we_go.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:37:26 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:37:59 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

void		ft_where_do_we_go(t_data *z)
{
	z->stepx = (z->raydirx < 0 ? -1 : 1);
	z->sidedistx = (z->raydirx < 0 ? (z->rayposx - z->lvlx) * z->deltadistx\
			: (z->lvlx + 1.0 - z->rayposx) * z->deltadistx);
	z->stepy = (z->raydiry < 0 ? -1 : 1);
	z->sidedisty = (z->raydiry < 0 ? (z->rayposy - z->lvly) * z->deltadisty\
			: (z->lvly + 1.0 - z->rayposy) * z->deltadisty);
}
