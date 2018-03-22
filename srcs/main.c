/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:29:03 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:29:24 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

int		main(int argc, char **argv)
{
	t_data		z;

	system("while :; do /usr/bin/afplay data/e1m1.mp3; done &>/dev/null &");
	ft_set_data(&z);
	ft_set_pos(&z);
	ft_raycast(&z);
	multi_hook(&z);
	mlx_loop(z.mlx);
	return (0);
}
