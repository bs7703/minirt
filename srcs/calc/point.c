/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:34:47 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 16:14:04 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

double	p_len(double *p, double *s)
{
	double	a;
	double	b;
	double	c;

	a = p[0] - s[0];
	b = p[1] - s[1];
	c = p[2] - s[2];
	return (sqrt(a * a + b * b + c * c));
}

t_point	*p_vec(double *a, double *b)
{
	t_point	*u;

	u = (t_point *)vec_sum(a, 1., b, 1.);
	if (!u)
		return (0);
	return (u);
}

t_vec	*p_tovec(double *a, double *b)
{
	t_vec	*u;

	u = (t_vec *)vec_sum(a, -1., b, 1.);
	if (!u)
		return (0);
	return (u);
}
