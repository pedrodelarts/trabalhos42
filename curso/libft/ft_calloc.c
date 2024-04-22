/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 23:49:57 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/19 00:11:05 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *calloc(size_t nmemb, size_t size)
{
    void *ptr;

    ptr = (void *)malloc(nmemb * size);
    
    if (!ptr)
        return(NULL);
    ft_bzero(ptr, nmemb);
    return (ptr);
}