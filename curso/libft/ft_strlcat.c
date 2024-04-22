/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:25:53 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/18 23:49:13 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t	i1;
	size_t	i2;
	size_t	dest_len;
	size_t	src_len;

	i1 = 0;
    dest_len = ft_strlen(dst);
	src_len = ft_strlen(src);
    i2 = dest_len;

	if (dest_len < (size - 1) && size > 0)
	{
		while (src[i1] && dest_len + i1 < size - 1)
		{
			dst[i2] = src[i1];
			i2++;
			i1++;
		}
		dst[i2] = '\0';
	}
	if (dest_len > size)
		dest_len = size;
	return (dest_len + src_len);
}