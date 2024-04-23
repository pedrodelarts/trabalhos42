/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:48:31 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/04/23 20:14:32 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_wordcount(char *s, char c)
{
    int i;
    int words;

    i = 0;

    while(s[i])
    {
        if (s[i] != c)
            words++;
        while (s[i] != c)
            i++;
        while (s[i] == c)
            i++;
    }
    return (words);
}

static char **ft_spliter(char *s, char c, char **temp)
{
    int i;

    words = ft_wordcount(s, c);

}

char **ft_split(char const *s, char c)
{
    
}


/*count words
  alocar mem para array de strings
  cria loop para:
  saltar separadores
  ver quantos caracteres tenho a ate ao final da string
  alocar mem para a string
  copiar para a string
  */

 int main()
 {
    char *s = "              ola             como        est     ";
    printf("%d\n", wordcount(s, ' '));
 }