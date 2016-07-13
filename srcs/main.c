#include "wolf.h"

void	ft_exit(char *str)
{
	perror(str);
	exit(EXIT_FAILURE);
}

int		main(void)
{
	int		fd;
	int		i;
	char	*line;

	line = NULL;
	if ((fd = open("map.txt", O_RDWR)) == -1)
		ft_exit("open map file failed");
	while ((i = get_next_line(fd, &line)))
	{
		ft_printf("%s\n", line);
		free(line);
	}
	if (i == -1)
		ft_exit("get_next_line faileds");
	return (0);
}
