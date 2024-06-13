/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:24:55 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/13 20:55:43 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_line(char *buffer, int fd)
{
	int bytes;
	char *temp_buffer;

	bytes = 1;
	buffer = (char *)malloc(1 * sizeof(char));
    temp_buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
    while (bytes > 0)
    {
        bytes = read(fd, temp_buffer, BUFFER_SIZE);
		temp_buffer[bytes] = '\0';
		buffer = ft_strjoin(buffer, temp_buffer);
		if (ft_strchr(temp_buffer, '\n'))
			break ;
    }
	free (temp_buffer);
	return(buffer);
    
}

char *get_next_line(int fd)
{
	static char *buffer;
	int i;

	i = 0;
	buffer = get_line(buffer, fd);
	return(buffer);
}

int main()
{
	int fd;
	char *buffer;

	fd = open("textfile.txt", O_RDONLY);
	buffer = get_next_line(fd);
	close(fd);
	printf("%s", buffer);
	free (buffer);
}
