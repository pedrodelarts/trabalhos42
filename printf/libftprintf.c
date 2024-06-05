/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:23:16 by marvin            #+#    #+#             */
/*   Updated: 2024/05/30 15:23:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_printtype(va_list va, size_t *counter, char type)
{
    if (type == 'c')
        ft_putchar(va_arg(va, int), counter);
    if (type == 's')
        ft_putstr(va_arg(va, char *), counter);
    // if (type == 'p')
    //     ft_putptr(va_arg(va, void *), counter);
}

int ft_printf(const char *s, ...)
{
    va_list va;
    size_t counter;
    size_t i;

    if(!s)
        return (0);
    counter = 0;
    va_start(va, s);
    while(s[i])
    {
        if (s[i] == '%')
        {
            i++;
            ft_printtype(va, &counter, s[i]);
        }
        else
            ft_putchar(s[i], &counter);
        i++;
    }
    va_end(va);
    return (counter);
}

int main()
{
    char *a = "a";
    printf("%d", printf("%p", a));
    // printf("%d", ft_printf("cb%sbc", a));
}