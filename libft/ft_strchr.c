/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 20:02:22 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/05/10 12:05:30 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	unsigned char	cc;

	cc = (char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == cc)
			return ((char *)(s + i));
		i++;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}
/*
int	main(void)
{
	int c;
	c = 'f';
	char *str = "\0";
	printf("%s\n", (char *)ft_strchr(str, c));
}*/