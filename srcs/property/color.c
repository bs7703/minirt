/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 18:29:39 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/15 18:31:29 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	colorsum_apply(double *a, double *b)
{
	int	i;

	i = -1;
	while (++i < 3)
	{
		a[i] += b[i];
		if (a[i] >= 1.)
			a[i] = 1.;
	}
}
int	torgbint(int *t)
{
	return (((t[0] & 255) << 16) + ((t[1] & 255) << 8) + t[2]); 
}

int	fromdoubletorgbint(double *t)
{
	int	rgb;

	rgb = 0;
	rgb += (int)(round(t[0] * 255 * t[3])) << 16;
	rgb += (int)(round(t[1] * 255 * t[3])) << 8;
	rgb += (int)(round(t[2] * 255 * t[3]));
	return (rgb);
}

double	*torgbdouble(int rgb, double i)
{
	double	*r;

	r = malloc(sizeof(t_color));
	if (!r)
		return (0);
	r[2] = (double)((rgb) & 255) * (i / 255.);
	r[1] = (double)((rgb >> 8) & 255) * (i / 255.);
	r[0] = (double)((rgb >> 16) & 255) * (i / 255.);
	r[3] = 1.0;
	return (r);
}
