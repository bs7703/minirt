/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hit_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:58:12 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/15 19:29:25 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_color	*make_color1(double *ray, double *cam, double *o, double *p)
{
	t_color		*c[2];
	double		t[12];

	init_f(t, (double *)p_tovec(p, cam), 3);
	init_f(t + 3, (double *)p_tovec(p, ray), 3);
	init(t + 6, ray + 9, 3);
	init(t + 9, o + 9, 3);
	c[0] = ray_diffuse(t);
	vec_sum_apply(t + 3, 1., t, 1.);
	init_f(t, (double *)p_tovec(o, p), 3);
	c[1] = ray_pbspecular(t);
	if (c[0] && c[1])
	{
		colorsum_apply((double *)c[0], (double *)c[1]);
		free(c[1]);
	}
	if (c[0])
		return (c[0]);
	else if (c[1])
		return (c[1]);
	return (0);
}

