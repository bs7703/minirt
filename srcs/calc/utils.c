/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 03:20:13 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/18 03:20:14 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

double	w_unit(double len, int w, int idx)
{
	return (-len + (idx % w) * (2.0 * len / (w - 1)));
}

double	h_unit(double len, int w, int h, int idx)
{
	return (len - (idx / w) * (2.0 * len / (h - 1)));
}

int	range_check(double min, double max, double val)
{
	int	cond;

	cond = ((min - E) <= val) && (val <= (max + E));
	return (cond);
}

int	flag_return(int flag)
{
	int	i;

	i = 0;
	while (flag)
	{
		if (flag & 1)
			return (i);
		flag >>= ++i;
	}
	return (-1);
}
