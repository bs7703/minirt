/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjki <seongjk@student.42seoul.k>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 14:18:01 by seongjki          #+#    #+#             */
/*   Updated: 2022/04/29 18:25:52 by sakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_H

# define ERROR_H

enum	e_error
{
	FLAG = 0,
	MALLOC,
	ARG,
	READ
};

int	flag_error(void);
int	malloc_error(void);
int	arg_error(void);
int	read_error(void);
int	error(int flag);

#endif
