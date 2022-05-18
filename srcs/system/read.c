#include "minirt.h"

int	check_args(int ac, char **av)
{
	int	check_arg_cnt;
	int check_extension;
	
	check_arg_cnt = (ac != 2);
	if (check_arg_cnt)
	{
		write(2, "Error\n", 7);
		return (FALSE);
	}
	check_extension = (ft_strncmp(av[1] + (ft_strlen(av[1]) - 3), ".rt", 3) != 0);
	if (check_extension)
	{
		write(2, "Error\n", 7);
		return (FALSE);
	}
	return (TRUE);
}

int read_map(char *map_name)
{
	int	fd;
	char	*line;

	fd = open(map_name, O_RDONLY);
	while (get_next_line(fd, &line) > 0)
	{
		printf("%s\n", line);
	}
	return (0);
}
