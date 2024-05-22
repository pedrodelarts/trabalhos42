/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-jesu <pde-jesu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:48:31 by pde-jesu          #+#    #+#             */
/*   Updated: 2024/05/22 14:53:44 by pde-jesu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(const char *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static void	ft_freesplit(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static char	**ft_spliter(char const *s, char c, int i, int j, int wordlen,
		char **arstr)
{
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			wordlen = 0;
			while (s[i] != '\0' && s[i] != c && ++wordlen)
				i++;
			arstr[j++] = ft_substr(s, i - wordlen, wordlen);
			if (!arstr[j - 1])
			{
				ft_freesplit(arstr);
				return (NULL);
			}
		}
		else
			i++;
	}
	arstr[j] = NULL;
	return (arstr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		wordlen;
	char	**arstr;

	i = 0;
	j = 0;
	wordlen = 0;
	if (!s)
		return (NULL);
	if (!(arstr = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *))))
		return (NULL);
	ft_spliter(s, c, i, j, wordlen, arstr);
	return (arstr);
}

// int main(void)
// {
//     char const *str = "Hello,World,This,Is,A,Test";
//     char **result = ft_split(str, ',');

//     if (result == NULL)
//     {
//         printf("Error: ft_split returned NULL\n");
//         return (1);
//     }

//     // Print the split strings
//     for (int i = 0; result[i] != NULL; i++)
//     {
//         printf("%s\n", result[i]);
//     }

//     for (int i = 0; result[i] != NULL; i++)
//     {
//         free(result[i]);
//     }
//     free(result);

//     return (0);
// }