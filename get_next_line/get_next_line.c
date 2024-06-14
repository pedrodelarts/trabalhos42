/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:24:55 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/14 17:21:31 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*buffer_free(char *buffer, char *temp_buffer)
{
	char	*new_buffer;

	new_buffer = ft_strjoin(buffer, temp_buffer);
	free(buffer);
	return (new_buffer);
}

char	*get_line(int fd, char *buffer)
{
	int		bytes;
	char	*temp_buffer;

	bytes = 1;
	if (!buffer)
		buffer = ft_calloc(1, 1);
	temp_buffer = ft_calloc((BUFFER_SIZE + 1), sizeof(char));
	while (bytes > 0)
	{
		bytes = read(fd, temp_buffer, BUFFER_SIZE);
		if (bytes == -1)
		{
			free(temp_buffer);
			return (NULL);
		}
		temp_buffer[bytes] = 0;
		buffer = buffer_free(buffer, temp_buffer);
		if (ft_find_newline(temp_buffer))
			break ;
	}
	free(temp_buffer);
	return (buffer);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	int			i;

	i = 0;
	buffer = get_line(fd, buffer);
	if (!buffer)
		return (NULL);
	return (buffer);
}

int	main(void)
{
	int		fd;
	char	*buffer;

	fd = open("textfile.txt", O_RDONLY);
	buffer = get_next_line(fd);
	close(fd);
	printf("%s", buffer);
	free(buffer);
}
