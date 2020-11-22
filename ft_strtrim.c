/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 00:29:56 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/22 01:34:31 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			check_right(unsigned int *j, const char *s1)
{
	while (s1[*j] != '\0')
		(*j)++;
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char			*s2;
	unsigned int	i;
	unsigned int	j;
	char			*tmp;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) != 0 && s1[i] != '\0')
		i++;
	j = i;
	check_right(&j, s1);
	if (!(s2 = (char *)malloc(j - i + 1)))
		return (NULL);
	while (ft_strchr(set, s1[j]) != 0 && j != i)
		j--;
	if (j != i && ft_strlen(s1) != 0)
	{
		tmp = s2;
		s2 = ft_substr(s1, i, j - i + 1);
		free(tmp);
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
