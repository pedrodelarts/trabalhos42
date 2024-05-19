/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 18:41:20 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/05/19 17:52:46 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cc;

	str = (unsigned char *)s;
	cc = (unsigned char)c;
	i = 0;
	while (n > i)
	{
		if (*str == cc)
			return (str);
		i++;
		str++;
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