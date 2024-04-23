/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:07:24 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/23 18:26:15 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int     set_verify(const char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == c)
			return (1);
        i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = ft_strlen(s1);
	while (s1[i] != '\0' && (set_verify(s1[i], set) == 1))
		i++;
	while (s1[j] != '\0' && (set_verify(s1[j], set) == 1))
		j--;
	ptr = ft_substr(s1, (unsigned int)i, j - i - 1);
	return (ptr);
}

int	main(void)
{
	char *set = "a";
	char *s = "aaaaaaaaabolasa";
	char *ptr = ft_strtrim(s, set);

	printf("%s", ptr);
	free(ptr);
}