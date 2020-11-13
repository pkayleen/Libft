/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 00:07:22 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/14 00:35:59 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if ((!s1 && !s2) || !s)
		return (NULL);
	while (*s1 && (s1))
	{
		s[i] = s1[i];
		i++;
	}
	while (*s2 && (s2))
	{
		s[i] = s2[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
