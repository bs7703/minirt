/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sakim <sakim@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 15:32:24 by sakim             #+#    #+#             */
/*   Updated: 2022/05/12 17:36:40 by gimsang-w        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

static int	cnt_len(long long n)
{
	int			cnt;

	cnt = 0;
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		n /= 10;
		cnt += 1;
	}
	return (cnt);
}

static void	make_str(char *str, int n, int cnt)
{
	long long	nbr;

	nbr = n;
	if (nbr < 0)
		nbr *= -1;
	while (nbr)
	{
		*(str + cnt - 1) = nbr % 10 + '0';
		nbr /= 10;
		cnt--;
	}
}

char	*itoa(int n)
{
	int			cnt;
	char		*ret;

	cnt = cnt_len(n) + (n <= 0);
	ret = (char *)malloc(sizeof(char) * (cnt + 1));
	if (!ret)
		return (0);
	ret[cnt] = '\0';
	if (n < 0)
		*ret = '-';
	if (n == 0)
		*ret = '0';
	make_str(ret, n, cnt);
	return (ret);
}

int	write_rgb(int fd, int rgb)
{
	char	*tmp;

	if (fd < 0)
		return (FAIL);
	tmp = itoa((rgb >> 16) & 255);
	write(fd, tmp, strlen(tmp));
	write(fd, " ", 1);
	free(tmp);
	tmp = itoa((rgb >> 8) & 255);
	write(fd, tmp, strlen(tmp));
	write(fd, " ", 1);
	free(tmp);
	tmp = itoa(rgb & 255);
	write(fd, tmp, strlen(tmp));
	write(fd, " ", 1);
	free(tmp);
	return (SUCCESS);
}

int	output_toppm(t_colormap *map, t_ppm *p)
{
	int		fd;
	int		w;
	int		h;
	int		i;
	char	*tmp;

	fd = open(p->filename, O_CREAT | O_WRONLY, 0777);
	if (fd < 0)
		return (4);//WRITE_ERR
	w = map->width;
	h = map->height;
	i = -1;
	write(fd, "P3\n", 3);
	tmp = itoa(w);
	write(fd, tmp, strlen(tmp));
	write(fd, " ", 1);
	free(tmp);
	tmp = itoa(h);
	write(fd, tmp, strlen(tmp));
	write(fd, "\n255\n", 5);
	free(tmp);
	while (++i < w * h)
	{
		write_rgb(fd, map->map[i]);
		if ((i / w > 0) && (i / w < h) && (i % w == 0))
			write(fd, "\n", 1);
		else
			write(fd, " ", 1);
	}
	close(fd);
	return (SUCCESS);
}

/*int	output_toxpm(t_colormap *map, t_xpm *p)
{
	return (0);
}

int	output_tolibx(t_colormap *map, t_libx *p)
{
	return (0);
}

void	*output_list(void)
{
	return ((void *)0);
}

int	output(t_colormap *map, void *t)
{
	return (0);
}*/
