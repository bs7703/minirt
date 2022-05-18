/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:40:19 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/18 02:38:24 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

struct	render_f
{
	t_point	*(*hit_point)(double *, double *);
};

t_color	*render(double *ray, double *cam, t_obj *o, int x)
{
	t_point	*(*hit_point)(double *, double *);
	t_point	*pp;
	double	j;
	int		m;
	t_point	*p;
	t_vec	*v;
	double	*tmp;
	double	cp[12];
	int	i;

	i = -1;
	j = -1.;
	p = 0;
	v = cam_svec(cam, x);
	init(cp, cam, 12);
	init(cp + 3, (double *)v, 3);
	while (++i < (int)(cam[8]))
	{
		pp = hit_point1(cp, (double *)(o + i));
		if (pp)
		{
		tmp = (double *)p_tovec((double *)pp, cam);
		if (j < 0 || vec_size(tmp) < j)
		{
			j = vec_size(tmp);
			m = i;
			if (p)
				free(p);
			p = pp;
			free(tmp);
		}
		else
			free(pp);
		}
		else
			free(pp);
	}
	if (!p)
		return (0);
	return (make_color1(ray, cam, (double *)(o + m), (double *)p));
}
