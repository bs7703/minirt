/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:16:54 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 16:42:04 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC_H

# define VEC_H

t_vec	*vec_cross(double *a, double *b);
double	*vec_sum(double *v, double a, double *u, double b);
double	vec_size(double *u);
t_vec	*vec_nom(double *u);
double	vec_dot(double *v, double *u);
double	vec_rad(double *v, double *u);
void	vec_sum_apply(double *v, double a, double *u, double b);
void	vec_nom_apply(double *u);
void	vec_range(double *u);
#endif
