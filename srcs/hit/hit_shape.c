/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hit_shape.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:47:54 by sakim             #+#    #+#             */
/*   Updated: 2022/05/18 02:32:29 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	hit_shape1(double *d, double *ray, double *s, double *o)
{
	d[0] = vec_dot(ray, ray);
	d[1] = 2. * vec_dot(ray, s);
	d[2] = vec_dot(s, s) - o[V0] * o[V0];
	if (discrim(d) < 0 - E)
		return (0);
	return (1);
}

/*int	hit_shape2(double *d, double *ray, double *s, double *o)
{
	d[0] = vec_dot(ray, ray);
	d[1] = 2. * vec_dot(ray, s);
	d[2] = vec_dot(s, s) - o[V0] * o[V0] /  (1 - cos^2);
	if (discrim(d) < 0 - E)
		return (0);
	return (1);
}*/

// (pc + (c + v * t)) * A = U * A = 0 || sqrt(|A|^2)
// (pc + (c + v * t)) * B = U * B = 0 || |B|^2
// (pc + (c + v * t)) * C = U * C = 0 || |C|^2
//so pc + (v * A) * t = 0
//t = cp / (v * A) and (b and c in there positions)
//and so on for other two
// which yields close one and far one.

// (v * A) * t\

// U = a * A + b * B + c * C

// U * A = a * A^2, a = (U * A) / A^2
