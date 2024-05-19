/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:08:59 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/05/13 17:40:51 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*ptr;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	ptr = (char *)malloc((len + 1) * (sizeof(char)));
	if (!ptr)
		return (NULL);
	i = -1;
	while (s[++i])
		ptr[i] = f(i, s[i]);
	ptr[i] = '\0';
	return (ptr);
}

// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// char	mapi(unsigned int i, char c)
// {
// 	static int indexArray[11] = {0};

// 	if (i > 10 || indexArray[i] == 1)
// 		write(1, "wrong index\n", 12);
// 	else
// 		indexArray[i] = 1;
// 	if (c >= 'a' && c <= 'z')
// 		return (c - 32);
// 	else if (c >= 'A' && c <= 'Z')
// 		return (c + 32);
// 	else
// 		return (c);
// }

// int		main(int argc, const char *argv[])
// {
// 	char	*str;
// 	char	*strmapi;

// 	alarm(5);
// 	str = (char *)malloc(sizeof(*str) * 12);
// 	if (argc == 1 || !str)
// 		return (0);
// 	else if (atoi(argv[1]) == 1)
// 	{
// 		strcpy(str, "LoReM iPsUm");
// 		strmapi = ft_strmapi(str, &mapi);
// 		ft_print_result(strmapi);
// 		if (strmapi == str)
// 			ft_print_result("\nA new string was not returned");
// 		if (strmapi[11] != '\0')
// 			ft_print_result("\nString is not null terminated");
// 	}
// 	return (0);
// }