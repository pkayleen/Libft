/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 00:29:56 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/18 00:32:01 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_endset(char *str, char *set)
{
	int	i;

	i = 0;
	while (str[i] != set[0])
		i++;
	if (strchr(set, str[i]) != 0)
		i++;
	if (i == ft_strlen(str))
		return (1);
	else
		return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	char			*s2;
	unsigned int	len;
	unsigned int	i;
	unsigned int	j;

	if (!s1 || !set)
		return(NULL);
	len = ft_strlen(set);
	s2 = (char *)malloc(ft_strlen(s1) - len + 1);
	i = 0;
	while (strchr(set, s1[i], len) != 0 && s1[i] != '\0')
		i++;

	while(s1[i] != '\0' && )
	j = 0;
	while (s1[i] != '\0' && strncmp(s1, set, len) != 0 && check_endset(s1, set))
	{
		s2[j] = s1[i];
		i++;
		j++;
	}
	s2[j] = '\0';
	return (s2);
}
