/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 19:18:37 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/13 20:52:46 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
# define GET_NEXT_LINE

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

char	*get_line(char *buffer, int fd);
int		ft_strlen(char *s);
char	*get_next_line(int fd);
char	*ft_strjoin(char *buffer1, char *buffer2);
// int		ft_find_newline(char *buffer);
char	*ft_strchr(const char *string, int searchedChar);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#endif