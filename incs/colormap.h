/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colormap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:05:11 by sakim             #+#    #+#             */
/*   Updated: 2022/04/29 17:25:39 by sakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORMAP_H

# define COLORMAP_H

# define WIDTH_RATIO 160
# define HEIGHT_RATIO 90

struct s_colormap
{
	int	width;
	int	height;
	int	*map;
};

#endif
