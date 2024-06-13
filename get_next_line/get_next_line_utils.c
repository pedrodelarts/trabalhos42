/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:50:00 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/13 20:55:54 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *buffer1, char *buffer2)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = (char *)malloc((ft_strlen(buffer1) + ft_strlen(buffer2) + 1)
			* sizeof(char));
	i = -1;
	j = -1;
	while (buffer1[++i] != '\0')
		ptr[i] = buffer1[i];
	while (buffer2[++j] != '\0')
		ptr[i + j] = buffer2[j];
	ptr[i + j] = '\0';
	free(buffer1);
	return (ptr);
}

char	*ft_strchr(const char *string, int searchedChar )
{
	char	*str;

	str = (char *)string;
	while (*str != searchedChar && *str != 0)
		str++;
	if (*str == searchedChar)
		return (str);
	else
		return (NULL);
}
// int	ft_find_newline(char *buffer)
// {
// 	int i;

// 	i = 0;
// 	while (buffer[i])
// 	{
// 		if (buffer[i] == '\n')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }
