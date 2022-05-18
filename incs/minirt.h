/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minirt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 10:29:59 by sakim             #+#    #+#             */
/*   Updated: 2022/05/15 19:18:36 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINIRT_H

# define MINIRT_H

# define TRUE 1
# define FALSE 0
# define SUCCESS 1
# define FAIL 0
# define E 4.94065645841247E-324
# define V0 6
# define SP 1

//COMMON HEADER INCLUDE
# include <math.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

# define PI M_PI

//libft
# include "libft.h"
# include "mathlib.h"

//proto struct
# include "proto.h"
//VALIDATE ,CHECK,...UTILS
//# include "check.h"
//# include "range.h"
//PROPERTY ZONE
# include "color.h"
# include "check.h"
# include "antialias.h"

// OUTPUT
# include "output.h"
# include "colormap.h"
# include "utils.h"
// INIT AND FREE
# include "free.h"
# include "error.h"
# include "init.h"

// DATA ZON
# include "vec.h"
# include "point.h"
# include "rotate.h"
//OBJECT ZONE
# include "shape.h"
# include "ray.h"
# include "cam.h"
# include "hit.h"
//SHAPE ZONE
//# include "con.h"
//...

#endif
