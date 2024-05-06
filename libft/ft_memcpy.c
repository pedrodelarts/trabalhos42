/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 17:30:20 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/29 15:58:20 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*s1;
	char	*s2;

	i = 0;
	s1 = (char *)src;
	s2 = (char *)dest;
	while (i < n)
	{
		s2[i] = s1[i];
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char s2[] = "bigggggggggggg";
	char s1[] = "";
	char s2x[] = "bigggggggggggg";
	char s1x[] = "";
	printf("%zu\n", strlen(s1));
	printf("%zu\n", strlen(s2));
	ft_memcpy(s2, s1, strlen(s2));
	printf("%s\n", s1);
	memcpy(s2x, s1x, strlen(s2x));
	printf("%s\n", s1x);
}*/