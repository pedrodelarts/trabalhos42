/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:24:55 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/11 18:56:31 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_line(char *buffer, int fd)
{
	int bytes;
	static char *temp_buffer;

	bytes = 0;
    temp_buffer = (char *)malloc((1 + 1) * sizeof(char));
    while (bytes >= 0)
    {
        bytes = read(fd, temp_buffer, 1);
		buffer = ft_strjoin(buffer, temp_buffer);
		if (buffer[ft_strlen(buffer)] == '\n')
			break;
    }
	free (temp_buffer);
	return(buffer);
    
}

char *get_next_line(int fd)
{
	static char *buffer;
	
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
