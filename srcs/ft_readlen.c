/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:54:28 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:55:46 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**      		  ft_readlen(t_data *z)                        |
**                                                             |
**              read for lenght of the file                    |
*/

int		ft_readlen(char *wolfmap)
{
	char	*temp;
	int		lines;
	int		fd;

	if ((fd = open(wolfmap, O_RDONLY)) == -1)
	{
		ft_putendl_fd("c'est quoi ce bordel!", 2);
		exit(-1);
	}
	while (get_next_line(fd, &temp) != 0)
	{
		free(temp);
		temp = NULL;
		lines++;
	}
	close(fd);
	return (lines);
}
