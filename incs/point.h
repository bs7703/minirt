/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:03:40 by sakim             #+#    #+#             */
/*   Updated: 2022/05/08 19:22:46 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H

# define POINT_H

double	p_len(double *p, double *s);
void	p_move(double *p, double *t);
t_point	*p_vec(double *p, double *v);
t_vec	*p_tovec(double *a, double *b);

#endif
