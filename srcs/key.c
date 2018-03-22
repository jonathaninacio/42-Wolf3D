/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:31:52 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:32:39 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                        key(keycode, t_data)                 |
**                                                             |
**                         set keypress to 1                   |
*/

int		key(int keycode, t_data *z)
{
	if (keycode == KEY_UP)
		z->kup = 1;
	if (keycode == KEY_DOWN)
		z->kdown = 1;
	if (keycode == KEY_RIGHT)
		z->kright = 1;
	if (keycode == KEY_LEFT)
		z->kleft = 1;
	if (keycode == KEY_ESC)
		destroy(z);
	return (0);
}
