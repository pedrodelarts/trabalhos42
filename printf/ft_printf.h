/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 16:40:20 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/06/06 16:44:21 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

void	ft_putchar(int c, size_t *counter);
void	ft_putstr(char *s, size_t *counter);
void	ft_putnbr_base(long long n, char *base, size_t *counter);
void	ft_putptr(va_list args, size_t *counter);
void	ft_ptr(unsigned long long n, char *base, size_t *counter);
void	ft_printtype(va_list va, char type, size_t *counter);
int		ft_printf(const char *s, ...);
int		ft_strlen(char *str);

#endif