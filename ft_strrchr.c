/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 16:23:55 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/09 19:16:41 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		res;
	int		i;

	i = 0;
	res = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			res = i;
		i++;
	}
	if (s[i] == c)
		res = i;
	if (res == -1)
		return (NULL);
	return ((char *)(s + res));
}


/*	printf("%d ", res);
	while (s != res)
	{
		s++;
		if (*s == '\0' && c != '\0')
			return (NULL);
	}
*/
