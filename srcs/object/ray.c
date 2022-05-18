/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:34:06 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 18:26:07 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_color	*ray_pbspecular(double *s)
{
	double	rad;
	double	*white;

	rad = vec_rad(s, s + 3);
	if (range_check(0, PI / 2, rad) == 0)
		return (0);
	rad = pow(rad, 8);
	white = torgbdouble(WHITE, 0.7);
	return ((t_color *)color_alpha(s + 6, white, rad));
}

t_color	*ray_diffuse(double *s)
{
	double	rad;

	rad = vec_rad(s, s + 3);
	if (range_check(0, PI / 2, rad) == 0)
		return (0);
	rad = vec_dot(s, s + 3);
	return ((t_color *)color_alpha(s + 6, s + 9, rad));
}

double	scale(double a, double b)
{
	return (a * b);
}

double	*color_alpha(double *a, double *b, double c)
{
	int	rgb[3];
	int	i;

	i = -1;
	while (++i < 3)
		rgb[i] = (int)(round(scale(a[i] * b[i], c * 255.)));
	return (torgbdouble(torgbint(rgb), 1.));
}
