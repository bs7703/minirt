/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:19:01 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/12 16:08:50 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"
/*
// f == (1,3)
// c== rotate c
//asin((k * w) / sqrt(a^2 + b^2)) - asin(a / sqrt(a^2 + b^2))
//r->w p or n
double	calc_0()
double	rotate_val(double *v, double *u, int f, int c)
{
	double	rt;
	double	r;
	double	tmp[6];

	*((t_vec *)tmp) = *((t_vec *)v);
	*((t_vec *)(tmp + 3)) = *((t_vec *)u);
	tmp[0 + c] = 0.;
	tmp[3 + c] = 0.;
	r = vec_rad(tmp, tmp + 3);
	rt = cos(r) * tmp[(c + (f + 1) * 2) % 3] + sin(r) * (-1. + 2 * f) * tmp[3 + (c + ((f + 2) * 2) % 3)];
	return (rt);
}

double	*rotate_poss(double *v, double *u, int flag)
{
	double	data[2];

	d[0] = rotate_val(v, u, 0);
	d[1] = rotate_val(v, u, 1);
}

//0,1 base
void	rotate_3d(double *v, double *t)
{
	int	i;
	double	tmp;

	i = -1;
	while (++i < 3)
		if (range_check(-1., 1., t[i]))
		{
			tmp = v[(i + 1) % 3];
			v[(i + 1) % 3] = cos(t[i]) * v[(i + 1) % 3] - sin(t[i]) * v[(i + 2) % 3];
			v[(i + 2) % 3] = sin(t[i]) * tmp + cos(t[i]) * v[(i + 2) % 3];
		}
}
*/
