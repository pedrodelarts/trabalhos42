/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 13:33:40 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/06 16:36:41 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_strlen(char *str)
{
	int	i;

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
	int	i;

	i = 0;
	if (s == NULL)
	{
		ft_putstr("(null)", counter);
		return ;
	}
	while (s[i])
	{
		ft_putchar(s[i], counter);
		i++;
	}
}

void	ft_printtype(va_list va, char type, size_t *counter)
{
	if (type == 'c')
		ft_putchar(va_arg(va, int), counter);
	else if (type == 's')
		ft_putstr(va_arg(va, char *), counter);
	else if (type == 'd' || type == 'i')
		ft_putnbr_base(va_arg(va, int), "0123456789", counter);
	else if (type == 'u')
		ft_putnbr_base(va_arg(va, unsigned int), "0123456789", counter);
	else if (type == 'x')
		ft_putnbr_base(va_arg(va, unsigned int), "0123456789abcdef", counter);
	else if (type == 'X')
		ft_putnbr_base(va_arg(va, unsigned int), "0123456789ABCDEF", counter);
	else if (type == 'p')
		ft_putptr(va, counter);
	else if (type == '%')
		ft_putchar('%', counter);
}

int	ft_printf(const char *s, ...)
{
	va_list	va;
	size_t	counter;
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	counter = 0;
	va_start(va, s);
	while (s[i])
	{
		if (s[i] == '%')
		{
			i++;
			ft_printtype(va, s[i], &counter);
		}
		else
			ft_putchar(s[i], &counter);
		i++;
	}
	va_end(va);
	return (counter);
}

// int main()
// {
//     void *a = 0;
//     printf("%d\n", ft_printf(" %p %p ", a, a));
// }