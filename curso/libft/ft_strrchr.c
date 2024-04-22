/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 22:49:45 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/22 15:55:16 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t  i;

    if (*s == '\0')
		return NULL;
    i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
        i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	int c;
	c = 'a';
	char *str = "\0";
	printf("%s\n", (char *)ft_strrchr(str, c));
}*/