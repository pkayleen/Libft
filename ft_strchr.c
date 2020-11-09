/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 15:04:01 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/09 16:14:43 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	printf("%c ", s[i]);
	while (*s != c)
	{
		s++;
		if (s[i] == '\0' && c != '\0')
			return (NULL);
		printf("%c ", s[i]);
	}
	return ((char *)s);
}
