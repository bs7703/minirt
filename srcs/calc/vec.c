/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:25:19 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 16:42:10 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_vec	*vec_cross(double *a, double *b)
{
	double	*r;
	int		i;

	i = -1;
	r = malloc(sizeof(t_vec));
	if (!r)
		return (0);
	while (++i < 3)
		r[i] = a[(i + 1) % 3] * b[(i + 2) % 3] - a[(i + 2) % 3] * b[(i + 1) % 3];
	return ((t_vec *)r);
}

void	vec_sum_apply(double *v, double a, double *u, double b)
{
	int	i;

	i = -1;
	while (++i < 3)
		v[i] = v[i] * a + u[i] * b;
}

double	vec_size(double *u)
{
	return (sqrt(u[0] * u[0] + u[1] * u[1] + u[2] * u[2]));
}

void	vec_nom_apply(double *u)
{
	int		i;
	double	s;

	i = -1;
	s = vec_size(u);
	while (++i < 3)
		u[i] /= s;
}

void	vec_range(double *u)
{
	int	i;

	i = -1;
	while (++i < 3)
		if (u[i] >= 1.)
			u[i] = 1.;
}

t_vec	*vec_nom(double *u)
{
	double	*t;
	int		i;
	double	s;

	t = malloc(sizeof(t_vec));
	if (!t)
		return (0);
	i = -1;
	s = vec_size(u);
	while (++i < 3)
		t[i] = u[i] / s;
	return ((t_vec *)t);
}

double	vec_dot(double *v, double *u)
{
	return (v[0] * u[0] + v[1] * u[1] + v[2] * u[2]);
}

double	vec_rad(double *v, double *u)
{
	if (check_dot(v) || check_dot(u))
		return (1.0);
	return (vec_dot(v, u) / (vec_size(v) * vec_size(u)));
}

double	*vec_sum(double *v, double a, double *u, double b)
{
	double	*sum;
	int		i;

	i = -1;
	sum = (double *)malloc(sizeof(t_vec));
	if (!sum)
		return (0);
	while (++i < 3)
		sum[i] = v[i] * a + u[i] * b;
	return (sum);
}
