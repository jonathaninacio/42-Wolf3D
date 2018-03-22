/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyr.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:29:45 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:31:29 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                        keyr(keycode, t_data)                |
**                                                             |
**                       set keyrelease to 0                   |
*/

int		keyr(int keycode, t_data *z)
{
	if (keycode == KEY_UP)
		z->kup = 0;
	if (keycode == KEY_DOWN)
		z->kdown = 0;
	if (keycode == KEY_RIGHT)
		z->kright = 0;
	if (keycode == KEY_LEFT)
		z->kleft = 0;
	return (0);
}
