/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:18:37 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/14 17:21:34 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char	*get_line(int fd, char *buffer);
size_t	ft_strlen(const char *s);
char	*get_next_line(int fd);
char	*ft_strjoin(char const *buffer1, char const *buffer2);
char	*ft_strchr(const char *string, int searchedChar);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t elementCount, size_t elementSize);
char	*buffer_free(char *buffer, char *temp_buffer);
int		ft_find_newline(char *buffer);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

#endif