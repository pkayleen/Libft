/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:16:14 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/22 03:59:27 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	len_word(char	*s, int i)
{
}

static int	search_ind(char	*s, int	i)
{

}

static char	*read_word(char *s, int i, char delimiter)
{
	char	*word;
	int		len;
	char	*tmp;
	int		j;

	len = 0;
	while (s[j] && s[j] != delimiter)
		len++;
	if (!(word = (char *)malloc(len + 1)))
		return (NULL);
	tmp = word;
	word = ft_substr(s, i, len_word());
	while (s[j] != '\0' && s[j] != delimiter)
	{
		word[j] = s[j];
		j++;
	}
	free(tmp);
	return (word);
}

static int	count_words(char *s, char delimiter)
{
	int		i;
	int		len;
	int		count;

	len = 0;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != delimiter)
		{
			if (len == 1)
				count++;
			len++;
		}
		else
			len = 0;
		i++;
	}
	return (count);
}

char		**ft_split(char const *s, char c)
{
	char	**str_split;
	int		i;
	int		j;
	int		len;

	len = count_words(s, c);
	if (!(str_split = (char **)malloc(len + 1)))
		return (NULL);
	i = 0;
	j = 0;
	while (i < len)
	{
		while (s[j] != c)
			j++;
		*str_split[i] = read_word(s, j, c);
		j = 0;
		while (j < len_word(s, i))
			j++;
		i++;
	}
	*str_split[i] = '\0';
	return (str_split);
}
