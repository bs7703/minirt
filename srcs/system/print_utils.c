/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjki <seongjk@student.42seoul.k>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:43:16 by seongjki          #+#    #+#             */
/*   Updated: 2022/05/04 19:16:40 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

double	to(double a)
{
	return (a);
	//return ((a / PI) * 180.);
}

void	ppm_make(void)
{
	system("a.out > img.ppm");
}

void	vec_print(void *v)
{
	t_vec	*vec;

	if (!v)
		return ;
	vec = (t_vec *)v;
	printf("x: %f y: %f z: %f s: %f\n", vec->x, vec->y, vec->z, vec->s);
}

void	trans_print(void *t)
{
	double	*d;

	d = (double *)t;
	if (!d)
		return ;
	printf("yz: %f zx: %f xy: %f \n", to(d[0]), to(d[1]), to(d[2]));
}

void	color_print(void *c)
{
	t_color	*color;

	if (!c)
		return ;
	color = (t_color *)c;
	printf("a: %f r: %f g: %f b: %f\n", color->a, color->r, color->g, color->b);
}

void	point_print(void *p)
{
	t_point	*point;

	if (!p)
		return ;
	point = (t_point *)p;
	printf("x: %f y: %f z: %f s: %f\n", point->x, point->y, point->z, point->s);
}

void	cam_print(void *c)
{
	t_cam	*cam;

	if (!c)
		return ;
	cam = (t_cam *)c;
	vec_print(&(cam->ori));
	point_print(&(cam->start));
}

void	ray_print(void *r)
{
	t_ray	*ray;

	if (!r)
		return ;
	ray = (t_ray *)r;
	vec_print(&(ray->ori));
	point_print(&(ray->start));
}

void	print(void *ptr, int flag)
{
	int		idx;
	void	(*func[5])(void *);

	func[VEC] = vec_print;
	func[COLOR] = color_print;
	func[POINT] = point_print;
	func[CAM] = cam_print;
	func[RAY] = ray_print;
	idx = -1;
	while (++idx < 5)
	{
		if (idx == flag)
			func[flag](ptr);
	}
}
