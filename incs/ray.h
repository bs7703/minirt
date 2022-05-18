/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ray.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:43:17 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 18:25:36 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RAY_H

# define RAY_H

t_color	*ray_pbspecular(double *s);
t_color	*ray_diffuse(double *s);
double	scale(double a, double b);
double	*color_alpha(double *a, double *b, double c);
#endif
