/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 18:24:21 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 19:19:17 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H

# define PROTO_H

struct s_record
{
	double	a[12];
}		t_record;

struct s_vec
{
	double	x;
	double	y;
	double	z;
};

struct	s_color
{
	double	r;
	double	g;
	double	b;
	double	a;
};

struct	s_obj
{
	double	a[12];
	int	id;
};

typedef struct s_rotate	t_rotate;
typedef struct s_shape	t_shape;
typedef struct s_colormap t_colormap;
typedef struct s_cam t_cam;
typedef struct s_ray t_ray;
typedef struct s_prop t_prop;
typedef struct s_vec t_vec;
typedef struct s_vec t_point;
typedef struct s_color t_color;
typedef	struct s_obj	t_obj;
#endif
