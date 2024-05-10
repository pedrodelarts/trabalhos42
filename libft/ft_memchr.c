/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:41:20 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/05/10 11:48:06 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int					i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	if (*str == '\0')
		return (NULL);
	while (i < (int)n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)(str + i));
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	size_t n = 18;
	const char s1[18] = "genitaAia massiva";
	int c = 'A';
	printf("%s", (char *)ft_memchr(s1, c, n));
}*/