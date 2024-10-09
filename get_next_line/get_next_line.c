#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	tempbuf[BUFFER_SIZE];
	int			res;
	int			check;
	char		*line;

	check = 0;
	res = 0;
	line = NULL;
	while (BUFFER_SIZE > 0 && fd >= 0)
	{
		if (*tempbuf)
			line = ft_count(tempbuf, &check, line);
		if (tempbuf[0] == '\0' && check == 0)
		{
			res = read(fd, tempbuf, BUFFER_SIZE);
			if (res < 0)
				ft_clean(tempbuf, &check, 1);
			if ((res <= 0 && !line) || res < 0)
				return (ft_clean(line, &check, res));
			tempbuf[res] = '\0';
		}
		if ((line && check == 1) || (tempbuf[0] == '\0' && res == 0))
			return (line);
	}
	return (NULL);
}

/* int	main(void)
{
	int fd = open("test.txt", O_RDWR);

	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
	printf("%s", get_next_line(fd));
} */