/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:50:00 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/14 17:23:36 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(const char *buffer1, const char *buffer2)
{
	char	*ptr;
	int		i;
	int		j;
	int		totalsize;

	totalsize = (ft_strlen(buffer1) + ft_strlen(buffer2));
	ptr = (char *)malloc((totalsize + 1) * sizeof(char));
	if (!ptr || !buffer1 || !buffer2)
		return (NULL);
	i = -1;
	j = -1;
	while (buffer1[++i] != '\0')
		ptr[i] = buffer1[i];
	while (buffer2[++j] != '\0')
		ptr[i + j] = buffer2[j];
	ptr[i + j] = 0;
	return (ptr);
}

void	ft_bzero(void *s, size_t n)
{
	char	*str;
	size_t	i;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	char	*res;

	res = malloc(elementSize * elementCount);
	if (!res)
		return (NULL);
	ft_bzero(res, elementSize * elementCount);
	return (res);
}

int	ft_find_newline(char *buffer)
{
	int	i;

	i = 0;
	while (buffer[i])
	{
		if (buffer[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}
