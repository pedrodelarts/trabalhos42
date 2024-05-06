/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:08:59 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/27 18:06:06 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*ptr;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	ptr = (char *)malloc((len + 1) * (sizeof(char)));
	if (!ptr)
		return (NULL);
	i = -1;
	while (s[++i])
		ptr[i] = f(i, ptr[i]);
	ptr[i] = '\0';
	return (ptr);
}

// char ft_test_function(unsigned int i, char c)
// {
//     c = 'L';
//     printf("index %u is now %c\n", i, c);
//     return(c);
// }

// int main()
// {
//     char *ptr;
//     char test_string[] = "bolas pesadas";
//     ptr = ft_strmapi(test_string, &ft_test_function);
//     printf("%s", ptr);
//     free (ptr);
// }