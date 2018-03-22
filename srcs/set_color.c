/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 21:42:50 by joinacio          #+#    #+#             */
/*   Updated: 2017/09/26 21:46:25 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                set_color(0, 255, 255, 255)                  |
**                                                             |
**             convert four unsigned char 0->255               |
**            set_color (alpha, red, green, blue)              |
**                 to a integer 0x00FFFFFF                     |
*/

int		set_color(unsigned char a, unsigned char r, \
		unsigned char v, unsigned char b)
{
	int color;

	color = (a * 16711680) + (r * 65536) + (v * 256) + b;
	return (color);
}
