/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hit.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:22:30 by sakim             #+#    #+#             */
/*   Updated: 2022/04/30 12:14:35 by sakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

void	*get_hittable_list(void)
{
	int	(**func)(t_ray *, void *);

	func = malloc(sizeof(void *) * (HIT_OBJ_NUM));
	func[0] = hit_shape1;
	func[1] = hit_shape2;
	func[2] = hit_shape3;
	func[3] = hit_shape4;
	func[4] = hit_shape5;
	return ((void *)func);
}

int	hittable(t_ray *r, void *object, int macro)
{
	int	(**func)(t_ray *, void *);
	int	idx;

	func = get_hittable_list();
	idx = get_macro_idx(HIT_OBJ_NUM, macro);
	if (idx < 0)
		return (MACRO_INVALID_ERR);
	if (func[idx](r, object) == FALSE)
	{
	}
	return (0);
}
