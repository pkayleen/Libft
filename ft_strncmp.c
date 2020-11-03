/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:04:50 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/03 15:39:59 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int res;
	int	i;

	i = 0;
	while (*s1 != '\0' && *s2 != '\0' && n > 0)
	{
		n--;
		if (s1[i] == s2[i] && n != 0)
		{
			i++;
		}
	}
	res = s1[i] - s2[i];
	return (res);
}
