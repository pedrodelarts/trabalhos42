/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:38:23 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/23 18:23:51 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	int		i;
	int		j;

	ptr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	i = -1;
	j = -1;
	while (s1[++i] != '\0')
		ptr[i] = s1[i];
	while (s2[++j] != '\0')
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}

// int	main(void)
// {
// 	char *ptr;
// 	char *s1 = "bolas ";
// 	char *s2 = "pesadas";
// 	ptr = ft_strjoin(s1, s2);
// 	printf("%s", ptr);
// 	free(ptr);
// }