/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_line.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:27:14 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:27:17 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**      			    map_line(char*)                        |
**                                                             |
**      convert a char* separated by spaces into an int*       |
*/

int		*map_line(char *str)
{
	char	**array;
	int		*iarr;
	int		b;

	if (!(array = ft_strsplit(str, ' ')))
		return (NULL);
	b = 0;
	while (array[b])
		++b;
	if (!(iarr = (int*)malloc(sizeof(int) * (b + 1))))
		return (NULL);
	b = -1;
	while (array[++b])
	{
		iarr[b] = ft_atoi(array[b]);
	}
	iarr[b] = -2147483648;
	destroy_array(array);
	return (iarr);
}
