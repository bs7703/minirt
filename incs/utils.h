#include "minirt.h"

#ifndef UTILS_H
# define UTILS_H

double	w_unit(double len, int w, int idx);
double	h_unit(double len, int w, int h, int idx);
int		flag_return(int flag);
int		range_check(double min, double max, double val);

#endif
