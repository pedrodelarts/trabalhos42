/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 16:29:08 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/05/13 17:49:34 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;

    if (lst)
    {
        while(*lst)
        {
            temp = (*lst)->next;
            ft_lstdelone(*temp, del);
            (*lst) = temp;
        }
    }
}
