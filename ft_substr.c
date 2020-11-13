/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 21:58:29 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/13 22:20:14 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*subs;
	unsigned int	i;
	unsigned int	j;

	i = 0;
	subs = (char *)malloc(len * sizeof(char) + 1);
	while (i != start)
	{
		i++;
	}
	j = 0;
	while (j != len - 1 && s[i] != '\0')
	{
		subs[j] = s[i];
		i++;
		j++;
	}
	return (subs);
}
