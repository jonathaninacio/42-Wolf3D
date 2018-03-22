/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movemask.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joinacio <joinacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/20 00:20:52 by joinacio          #+#    #+#             */
/*   Updated: 2017/10/20 00:23:51 by joinacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/wolf3d.h"

/*
** ____________________________________________________________
**                                                             |
**                      movemask(keycode, t_data)              |
**                                                             |
**                       move function                         |
*/

void		movemask2(t_data *z)
{
	if (z->kdown == 1)
	{
		ft_kdown(z);
		if (z->boolwalk == 0 && z->walkmotion <= 15000)
			z->walkmotion = z->walkmotion + 2;
		else if (z->boolwalk == 1 && z->walkmotion >= 0)
			z->walkmotion = z->walkmotion - 2;
		if (z->walkmotion >= 15000)
			z->boolwalk = 1;
		else if (z->walkmotion <= 0)
			z->boolwalk = 0;
	}
}

void		movemask3(t_data *z)
{
	if (z->kright == 1)
	{
		z->olddirx = z->dirx;
		z->dirx = z->dirx * cos(-z->rotspeed) - z->diry * sin(-z->rotspeed);
		z->diry = z->olddirx * sin(-z->rotspeed) + z->diry * cos(-z->rotspeed);
		z->oldplanex = z->planex;
		z->planex = z->planex * cos(-z->rotspeed) \
					- z->planey * sin(-z->rotspeed);
		z->planey = z->oldplanex * sin(-z->rotspeed) \
					+ z->planey * cos(-z->rotspeed);
		z->rotskybox -= 3;
	}
}

void		movemask4(t_data *z)
{
	if (z->kleft == 1)
	{
		z->olddirx = z->dirx;
		z->dirx = z->dirx * cos(z->rotspeed) - z->diry * sin(z->rotspeed);
		z->diry = z->olddirx * sin(z->rotspeed) + z->diry * cos(z->rotspeed);
		z->oldplanex = z->planex;
		z->planex = z->planex * cos(z->rotspeed) - z->planey * sin(z->rotspeed);
		z->planey = z->oldplanex * sin(z->rotspeed) \
					+ z->planey * cos(z->rotspeed);
		z->rotskybox += 3;
	}
}

int			movemask(t_data *z)
{
	if (z->kup == 1)
	{
		ft_kup(z);
		if (z->boolwalk == 0 && z->walkmotion <= 15000)
			z->walkmotion = z->walkmotion + 2;
		else if (z->boolwalk == 1 && z->walkmotion >= 0)
			z->walkmotion = z->walkmotion - 2;
		if (z->walkmotion >= 15000)
			z->boolwalk = 1;
		else if (z->walkmotion <= 0)
			z->boolwalk = 0;
	}
	movemask2(z);
	movemask3(z);
	movemask4(z);
	return (0);
}
