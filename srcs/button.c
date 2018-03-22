/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   button.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:19:03 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:20:32 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                          button()                           |
**                                                             |
**         used to associate mouse clicks with events          |
*/

int	button(int click, int x, int y, t_data *z)
{
	if (click == 1)
	{
		if (z->weaponanim == 0)
			z->weapontrig = 1;
	}
	return (0);
}
