/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_whichwalltext.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:35:45 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:36:49 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                   ft_whichwalltext (t_data)                 |
**                                                             |
**       get the correct text depending on wall number         |
*/

void		ft_whichwalltext(int x, t_data *z)
{
	if (z->worldmap[z->lvlx][z->lvly] == 1)
		ft_wall(x, z, z->textm);
	else if (z->worldmap[z->lvlx][z->lvly] == 2)
		ft_wall(x, z, z->text2m);
	else if (z->worldmap[z->lvlx][z->lvly] == 3)
		ft_wall(x, z, z->text3m);
	else if (z->worldmap[z->lvlx][z->lvly] == 4)
		ft_wall(x, z, z->text4m);
	else
		ft_wall(x, z, z->text42m);
}
