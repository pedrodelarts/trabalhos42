/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 14:57:34 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/18 18:39:21 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i1;
	int i2;

	if (!little)
		return ((char *)big);
	i1 = 0;
	while (big[i1] != '\0' && i1 < (int)len)
	{
		i2 = 0;
		while (big[i1 + i2] == little[i2] && (i1 + i2) < (int)len && big[i1 + i2] != '\0'
			&& little[i2] != '\0')
			i2++;
		if (little[i2] == '\0')
			return ((char *)(big + i1));
		i1++;
	}
	return (NULL);
}

/*
int main()
{
    char little[] = "bolas";
    char big[] = "eu consumo bolas super pesadas";
    printf("%s", ft_strnstr(big, little, strlen(big)));
}*/