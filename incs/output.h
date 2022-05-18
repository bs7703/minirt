/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:04:08 by sakim             #+#    #+#             */
/*   Updated: 2022/05/12 17:34:33 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef OUTPUT_H

# define OUTPUT_H

//type output
typedef struct s_ppm
{
	char	*filename;
}				t_ppm;

typedef struct s_xpm
{
	char	*filename;
	char	*predata;
}				t_xpm;

//type runnable
typedef struct s_libx
{
	void	*mlx_ptr;
	void	*win_ptr;
	void	*keyhook;
	void	*mousehook;
	void	*loophook;
	int		height;
	int		width;
}				t_libx;

int		write_rgb(int fd, int rgb);
int		output_toppm(t_colormap *map, t_ppm *p);
int		output_toxpm(t_colormap *map, t_xpm *p);
int		output_tolibx(t_colormap *map, t_libx *p);

void	*output_list(void);
int		output(t_colormap *map, void *t);

#endif
