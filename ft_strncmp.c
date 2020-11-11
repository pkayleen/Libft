/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 17:04:50 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/11 18:33:13 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char	*)s1;
	str2 = (unsigned char	*)s2;
	i = 0;
	while ((*str1) && (*str2) && (i < n))
	{
		str1++;
		str2++;
		i++;
		if (*str1 != *str2)
			return (*str1 - *str2);
	}
	return (*str1 - *str2);
}
