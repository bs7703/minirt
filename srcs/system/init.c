/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:40:38 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/15 18:49:18 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	init(double *a, double *b, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		a[i] = b[i];
}

void	init_f(double *a, double *b, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		a[i] = b[i];
	free(b);
}
