/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   antialias.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:35:52 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/06 17:11:42 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	antimode0(t_colormap *c, int m, int idx)
{
	int	x;
	int	y;
	int	i;
	int	col[3];
	int	z;

	if (!c)
		return (-1);
	i = -1;
	col[0] = 0;
	col[1] = 0;
	col[2] = 0;
	z = 0;
	while (++i < (2 * m + 1) * (2 * m + 1))
	{
		x = idx % c->width - m + i % (2 * m + 1);
		y = idx / c->width - m + i / (2 * m + 1);
		if (x >= 0 && y >= 0)
		{
			col[0] += (c->map[y * c->width + x % c->width] >> 16) & 255;
			col[1] += (c->map[y * c->width + x % c->width] >> 8) & 255;
			col[2] += c->map[y * c->width + x % c->width] & 255;
			++z;
		}
	}
	col[0] /= (z);
	col[1] /= (z);
	col[2] /= (z);
	return ((col[0] << 16) + (col[1] << 8) + col[2]);
}

void	antialias(t_colormap *c, int alias_mod)
{
	int	i;
	int	*tmap;

	i = -1;
	tmap = malloc(sizeof(int) * (c->width * c->height));
	if (!tmap)
		return ;
	while (++i < c->width * c->height)
		if (alias_mod & 1)
			tmap[i] = antimode0(c, 1, i);
	free(c->map);
	c->map = tmap;
}
