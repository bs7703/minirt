/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:37:02 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 17:58:48 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLOR_H

# define COLOR_H

# define BLACK 0x000000
# define RED 0x00FF0000
# define CRIMSON 0xDC143C
# define LIGHT_CORAL 0xF08080
# define BLUE 0x000000FF
# define GREEN 0x0000FF00
# define PURPLE 0x800080
# define WHITE 0xffffffff

int		torgbint(int *t);
int		fromdoubletorgbint(double *t);
double	*torgbdouble(int rgb, double i);
void	colorsum_apply(double *a, double *b);
#endif
