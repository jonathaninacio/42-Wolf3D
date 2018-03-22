/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 01:41:58 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 01:42:51 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**      	         create_map(t_data*) 	   	               |
**                                                             |
**               create a int** from the char**                |
*/

int				**create_map(t_data *z)
{
	int		**iarray;
	int		a;

	if (!(iarray = (int**)malloc(sizeof(int*) * (z->lines + 1))))
		return (NULL);
	a = -1;
	while (++a < z->lines)
		iarray[a] = map_line(z->charmap[a]);
	iarray[a] = NULL;
	a = 0;
	while (iarray[0][a] != -2147483648)
		a++;
	z->len = a;
	return (iarray);
}
