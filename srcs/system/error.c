/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjki <seongjk@student.42seoul.k>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 16:39:36 by seongjki          #+#    #+#             */
/*   Updated: 2022/04/29 16:39:37 by seongjki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

int	flag_error(void)
{
	printf("flag error!\n");
	return (1);
}

int	malloc_error(void)
{
	printf("malloc error!\n");
	return (2);
}

int	arg_error(void)
{
	printf("argument error!\n");
	return (3);
}

// int read_error(void)
// {
// 	printf("")
// }

int	error(int flag)
{
	int	(*func[3])(void);
	int	idx;

	func[FLAG] = flag_error;
	func[MALLOC] = malloc_error;
	func[ARG] = arg_error;
	idx = -1;
	while (++idx < 3)
	{
		if (idx == flag)
			return (func[flag]());
	}
	return (flag_error());
}
