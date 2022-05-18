/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hit_point.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 19:01:51 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/18 02:37:27 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_point	*hit_point1(double *ray, double *o)
{
	double	d[3];
	double	*p;
	double	*s;

	p = ray;
	ray = ray + 3;
	s = (double *)p_tovec(p, o);
	if (!s)
		return (0);
	if (!(hit_shape1(d, ray, s, o)))
		return (0);
	free(s);
	p = (vec_sum(ray, equation(d, 1), p, 1.));
	return ((t_point *)p);
}

t_point	*hit_point2(double *ray, double *o)
{
	double	d[3];
	double	*r;
	double	*p;

	r = ray + 3;
	d[0] = vec_dot(o + 3, r);
	if (range_check(0., 0., d[0]))
		return (0);
	p = vec_sum(r, 1., o, -1.);
	d[1] = vec_dot(p, o + 3);
	d[2] = -1. * d[1] / d[0];
	free(p);
	return ((t_point *)vec_sum(ray, 1., r, d[2]));
}

/*
double	*hit_point2(double *pc, double vx, double *o, int type)
{
	double	t;
	double	v[3];
	double	*ab[3];
	double	val[2];
	double	*u[2];

	t = -1. * vec_dot(pc, o + (type * 3));
	if (type % 2)
		t += p_len(o + (type * 3));
	t /= vx;
	u[0] = vec_sum(pc, 1., vx, t);// which is u made by min or max base
	ab[2] = o + type * 3;
	ab[0] = o + ((type + 1) % 3) * 3;
	ab[1] = o + ((type + 2) % 3) * 3;
	v[2] = vec_dot(u[0], ab[2]) / vec_dot(ab[2], ab[2]);
	v[0] = vec_dot(u[0], ab[0]) / vec_dot(ab[0], ab[0]);
	v[1] = vec_dot(u[0], ab[1]) / vec_dot(ab[1], ab[1]);
	check = range_check(0., vec_dot(ab[0], ab[0]), v[0]) && range_check(0., vec_dot(ab[1], ab[1]), v[1]);
	free(u[0]);
	if (check)
	{
		u[1] = vec_sum(ab[2], v[2], ab[1], v[1]);
		u[1] = vec_sum_apply(u[1], 1., ab[0], v[0]);
		return (u[1]);
	}
	return (0);
}

//request lever from0~to5

double	*hit_plane(double *cam, double *v, double *o, int type)
{
	double	*pc;
	double	vx;
	double	son;

	vx = vec_dot(v, o + (3 * type));
	if (range_check(0., 0., vx))
		return (FALSE);
	pc = p_tovec(o, cam);
	son = vec_dot(pc, o + (3 * type));
	return (hit_plane_check(pc, va, o, type));
}*/
