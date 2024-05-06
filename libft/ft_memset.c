/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:37:21 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/29 15:58:10 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = (char *)s;
	while (i < n)
	{
		s2[i] = c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char i[6] = "batata";
	ft_memset(i, '0', 6);
	write(1, i, 6);
}*/