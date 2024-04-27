/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:49:57 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/23 19:04:04 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = (void *)malloc(nmemb * size);
    
    if (!ptr)
        return(NULL);
    ft_bzero(ptr, nmemb);
    return (ptr);
}