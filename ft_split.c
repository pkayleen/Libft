/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 19:16:14 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/22 20:28:15 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*read_word(const char *s, int *j, char delimiter)
{
	int		i;

	i = 0;
	while (s[i] != '\0' && s[i] != delimiter)
		i++;
	*j += i;
	return (ft_substr(s, 0, i));
}

static int	count_words(char const *s, char delimiter)
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
			len++;
			if (len == 1)
				count++;
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
	int		w_cntr;
	int		len;

	len = count_words(s, c);
	if (!(str_split = (char **)malloc(len + 1)))
		return (NULL);
	i = 0;
	j = 0;
	w_cntr = 0;
	while (w_cntr < len)
	{
		while (s[i] == c)
			i++;
		str_split[w_cntr] = read_word(&(s[i]), &j, c);
		w_cntr++;
		i += j;
		j = 0;
	}
	str_split[w_cntr] = "\0";
	return (str_split);
}
