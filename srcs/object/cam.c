#include "minirt.h"

// need cam norm1/ and norm2 by cross product
//cam will be set point[3], vec[3], h_len, w_len
double	*make_orth(double *t)
{
	double	*a;

	a = malloc(sizeof(t_vec));
	if (!a)
		return (0);
	a[0] = t[1] - t[2];
	a[1] = t[2] - t[0];
	a[2] = t[0] - t[1];
	return (a);
}

t_point	*cam_proto(double *t, int idx)
{
	double	*ab[2];
	double	*p;

	ab[0] = make_orth(t + 3);
	if (!ab[0])
		return (0);
	vec_nom_apply(ab[0]);
	ab[1] = (double *)vec_cross(ab[0], t + 3);
	if (!ab[1])
		return (0);
	vec_nom_apply(ab[1]);
	p = vec_sum(ab[0], w_unit(t[6], t[9], idx), ab[1], h_unit(t[7], t[9], t[10], idx));
	vec_sum_apply(p, 1., t + 3, 1.);
	vec_sum_apply(p, 1., t, 1.);
	return ((t_point *)p);
}

t_vec	*cam_svec(double *cam, int idx)
{
	double	*p;
	double	*v;

	p = (double *)cam_proto(cam, idx);
	if (!p)
		return (0);
	v = (double *)p_tovec(cam, p);
	free(p);
	return ((t_vec *)v);
}
