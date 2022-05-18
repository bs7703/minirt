/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   antialias.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gimsang-won <marvin@42.fr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 16:54:58 by gimsang-w         #+#    #+#             */
/*   Updated: 2022/05/06 16:55:45 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANTIALIAS_H

# define ANTIALIAS_H

int		antimode0(t_colormap *c, int m, int idx);
void	antialias(t_colormap *c, int alias_mod);

#endif
