/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:01:20 by marvin            #+#    #+#             */
/*   Updated: 2024/06/04 22:01:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putchar(int c, size_t *counter)
{
	write(1, &c, 1);
	(*counter)++;
}

void	ft_putstr(char *s, size_t *counter)
{
	int i;

	i = 0;
	if (s[0] == '\0')
		return ;
	while (s[i])
	{
		ft_putchar(s[i], counter);
		i++;
	}
}

void ft_putptr(void *ptr, size_t counter)
{
	while ()
	{
		
	}
	
}
