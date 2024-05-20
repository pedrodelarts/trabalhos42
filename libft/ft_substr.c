/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:27:16 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/05/20 14:17:21 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	char	*ptr;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ptr = (char *)malloc((len + 1) * (sizeof(char)));
	if (!ptr)
		return (NULL);
	j = 0;
	while (j < len)
	{
		ptr[j] = s[start + j];
		j++;
	}
	ptr[j] = '\0';
	return (ptr);
}

/*
int	main(void)
{
	const char *s = "bolas pesadas k bolinhas";
	int start = 6;
	char *ptr = ft_substr(s, start, 25);
	printf("%s", ptr);
	free (ptr);
}*/