/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hit.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:18:14 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 19:29:53 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HIT_H

# define HIT_H

# define HIT_OBJ_NUM 5
# define HIT_S1 1
# define HIT_S2 2
# define HIT_S3 4
# define HIT_S4 8
# define HIT_S5 16

t_color	*render(double *ray, double *cam, t_obj *o, int i);
int		hit_shape1(double *d, double *v, double *s, double *o);
t_point	*hit_point1(double *ray, double *o);
t_color	*make_color1(double *ray, double *cam, double *o, double *p);
double	*hit_plane(double *cam, double *v, double *o, int type);
double	*hit_plane_check(double *pc, double vx, double *o, int type);
void	*get_hittable_list(void);

int		color_sum(int x, int y);
int		ray_color(t_vec *v, t_ray *u, int color, double alpha, int flag);
int		hittable(t_ray *r, void *object, int macro);
t_color	*make_color1(double *ray, double *cam, double *o, double *p);
int		range_check(double min, double max, double val);
#endif
