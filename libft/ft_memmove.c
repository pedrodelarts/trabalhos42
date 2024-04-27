/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 22:41:13 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/17 05:54:55 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int		i;
	char	*s1;
	char	*s2;

	if (!dest || !src)
		return (NULL);
	s1 = (char *)src;
	s2 = (char *)dest;
	if (dest > src)
	{
		i = (int)(n);
		while (i >= 0)
		{
			s2[i] = s1[i];
			i--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

/*
int	main(void)
{
	char s1[] = "small ballsaaa";
	char s2[] = "small ballsaaa";
	ft_memmove(s1 + 2, s1, strlen(s1));
	printf("%s", s1);
    printf("\n");
	memmove(s2 + 2, s2, strlen(s1));
	printf("%s", s2);
}*/