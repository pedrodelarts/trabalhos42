/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:57:34 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/05/20 13:59:00 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i1;
	size_t	i2;

	if (little[0] == '\0')
		return ((char *)big);
	i1 = 0;
	while (big[i1] != '\0' && i1 < len)
	{
		i2 = 0;
		while (big[i1 + i2] == little[i2] && (i1 + i2) < len
			&& little[i2] != '\0')
			i2++;
		if (little[i2] == '\0')
			return ((char *)(big + i1));
		i1++;
	}
	return (NULL);
}

/*
int	main(void)
{
	char little[] = "bolas";
	char big[] = "eu consumo bolas super pesadas";
	printf("%s", ft_strnstr(big, little, strlen(big)));
}*/