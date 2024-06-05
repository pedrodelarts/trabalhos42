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

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

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

void ft_putnbr_base(long long n, char *base, size_t *counter)
{
	int i;
	int baselen;
	long long n2[50];

	i = 0;
	baselen = ft_strlen(base);

	if (n < 0)
	{
		ft_putchar('-', counter);
		n = -n;
	}
	while (n)
	{
		n2[i] = n % baselen;
		n = n / baselen;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[n2[i]], counter);
}

void ft_ptr(unsigned long long n, char *base, size_t *counter)
{
	int i;
	int baselen;
	long long n2[50];
	
	i = 0;
	baselen = ft_strlen(base);
	while (n)
	{
		n2[i] = n % baselen;
		n = n / baselen;
		i++;
	}
	while (--i >= 0)
		ft_putchar(base[n2[i]], counter);
}

void    ft_putptr(va_list args, size_t *counter)
{
    unsigned long long	ptr;

    ptr = va_arg(args, unsigned long long);
    ft_putstr("0x", counter);
    ft_ptr(ptr, "0123456789abcdef", counter);
}