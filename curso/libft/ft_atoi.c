/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 16:40:34 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/26 14:19:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi (const char *str)
{
    int i;
    int result;
    int sign;
    i = 0;
    result = 0;
    sign = 1;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
    {
        result *= 10;
        result += str[i] - 48;
        i++;
    }
    return (result * sign);
}
