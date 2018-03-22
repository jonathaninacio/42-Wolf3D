/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readmap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:49:24 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:50:27 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**      	         ft_readmap(t_data *z)    				   |
**                                                             |
**              read the map and put it in a char**            |
*/

void		ft_readmap(t_data *z)
{
	int		fd;
	int		i;
	char	*temp;

	i = 0;
	z->lines = ft_readlen("data/wolf.map");
	if ((fd = open("data/wolf.map", O_RDONLY)) == -1)
	{
		ft_putendl_fd("t'as foutu quoi la?", 2);
		exit(-1);
	}
	z->charmap = (char **)malloc(sizeof(char *) * (z->lines + 1));
	while (get_next_line(fd, &temp))
	{
		z->charmap[i] = temp;
		i++;
	}
	z->charmap[i] = NULL;
	close(fd);
}
