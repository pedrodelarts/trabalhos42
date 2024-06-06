/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:33:52 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/06 16:42:54 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_base(long long n, char *base, size_t *counter)
{
	long long	i;
	long long	baselen;
	int			n2[50];

	i = 0;
	baselen = (long long)ft_strlen(base);
	if (n < 0)
	{
		n = -n;
		ft_putchar('-', counter);
	}
	if (n == 0)
	{
		ft_putchar('0', counter);
		return ;
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

void	ft_ptr(unsigned long long n, char *base, size_t *counter)
{
	int			i;
	int			baselen;
	long long	n2[50];

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

void	ft_putptr(va_list va, size_t *counter)
{
	void	*ptr;

	ptr = va_arg(va, void *);
	if (ptr == NULL)
	{
		ft_putstr("(nil)", counter);
		return ;
	}
	ft_putstr("0x", counter);
	ft_ptr((unsigned long long)ptr, "0123456789abcdef", counter);
}
