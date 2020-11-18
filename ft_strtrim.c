/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 00:29:56 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/18 09:18:47 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char					*ft_strtrim(char const *s1, char const *set)
{
	char				*s2;
	unsigned long int	len;
	unsigned int		i;
	unsigned int		j;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(set);
	s2 = (char *)malloc(ft_strlen(s1) - len + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (ft_strchr(set, s1[i]) != 0 && s1[i] != '\0')
		i++;
	j = i;
	i--;
	while (s1[j] != '\0')
		j++;
	j--;
	while (ft_strchr(set, s1[j]) != 0 && j != i)
		j--;
	if (j != i)
		s2 = ft_substr(s1, i + 1, j - i);
	s2[j] = '\0';
	return (s2);
}
