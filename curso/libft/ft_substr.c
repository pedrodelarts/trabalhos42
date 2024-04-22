/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 18:27:16 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/22 16:36:17 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *ptr;

	ptr = (char *)malloc((len + 1) * (sizeof(char)));
	if (!ptr)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if ((unsigned int)i == start)
		{
			while (s[i] != '\0' && j < len)
			{
				ptr[j] = s[i];
				j++;
				i++;
			}
            ptr[j] = '\0';
			return (ptr);
		}
		i++;
	}
	return (NULL);
}

int main()
{
    const char *s = "bolas pesadas k bolinhas";
    int start = 6;
    char *ptr = ft_substr(s, start, 25);
    printf("%s", ptr);
    free (ptr);
}