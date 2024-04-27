/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 18:19:25 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/27 19:15:39 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static void	ft_write(char c, int fd)
{
	write(fd, &c, 1);
}

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_write('-', fd);
		ft_write('2', fd);
		ft_putnbr(147483648, fd);
	}
	else if (n < 0)
	{
		ft_write('-', fd);
		n = -n;
		ft_putnbr(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10, fd);
		ft_putnbr(n % 10, fd);
	}
	else
		ft_write(n + 48, fd);
}