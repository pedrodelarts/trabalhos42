/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 18:11:34 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/15 15:46:42 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;
	char *s1temp;
	char *s2temp;

	s1temp = (char *)s1;
	s2temp = (char *)s2;

	i = 0;
	while (s1temp[i] != '\0' && s2temp[i] != '\0' && i < n)
	{
		if (s1temp[i] > s2temp[i])
			return (1);
		if (s1temp[i] < s2temp[i])
			return (-1);
		i++;
	}
	return (0);
}
/*
int main()
{
	size_t n = 8;
	const char s1[8] = "olabolas";
	const char s2[8] = "zzzzzzzz";
	int result = ft_memcmp(s1, s2, n);
	printf("%d", result);
}*/