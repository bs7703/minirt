/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mathlib.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:49:48 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/15 16:19:59 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

double	_abs(double a)
{
	if (a < 0)
		return (a * -1.);
	return (a);
}

double	_absmin(double a, double b)
{
	if (_abs(a) < _abs(b))
		return (a);
	return (b);
}

double	_absmax(double a, double b)
{
	if (_abs(a) > _abs(b))
		return (a);
	return (b);
}

double	discrim(double *a)
{
	return (a[1] * a[1] - 4. * a[0] * a[2]);
}

double	equation(double *a, int sol)
{
	double	in;
	double	root;

	in = a[1] / (2. * a[0]);
	root = sqrt(discrim(a)) / (2. * a[0]);
	if (sol & 1)
		return (_absmin(in - root, in + root));
	return (_absmax(in - root, in + root));
}
