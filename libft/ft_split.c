/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldaniel- <ldaniel-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 20:56:06 by ldaniel-          #+#    #+#             */
/*   Updated: 2021/06/28 11:57:58 by ldaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	words;

	i = 0;
	words = 0;
	while ((s[i] != '\0') && (s[i] == c))
		i++;
	while (s[i] != '\0')
	{
		while ((s[i] != '\0') && (s[i] != c))
			i++;
		words++;
		while ((s[i] != '\0') && (s[i] == c))
			i++;
	}
	return (words);
}

static size_t	word_size(char const *s, char c)
{
	size_t	j;

	j = 0;
	while ((s[j] != '\0') && s[j] != c)
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	size_t	k;
	size_t	index;
	size_t	words;
	char	**splited;

	k = 0;
	index = 0;
	words = count_words(s, c);
	splited = malloc((words + 1) * sizeof(char *));
	if (splited == NULL)
		return (NULL);
	while (s[k] != '\0')
	{
		if ((s[k] != '\0') && (s[k] != c))
		{
			splited[index] = ft_substr(s, k, word_size(&s[k], c));
			k = (k + word_size(&s[k], c) - 1);
			index++;
		}
		k++;
	}
	splited[index] = NULL;
	return (splited);
}
