/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 17:09:54 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/27 17:55:54 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int		i;
	
	i = -1;
	while (s[++i])
		f(i, &s[i]);
    return;
}

// void test_function(unsigned int i, char *c)
// {
//     c = "L";
//     printf("index %u is now a %c\n", i, *c);
// }

// int main()
// {
//     char test_string[] = "bolas pesadas";
//     ft_striteri(test_string, &test_function);
//     return 0;
// }