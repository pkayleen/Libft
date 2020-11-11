/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 17:02:21 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/11 16:51:27 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize_buf)
{
	unsigned int	i;
	unsigned int	len1;
	unsigned int	len2;

	i = 0;
	len1 = 0;
	if (dstsize_buf == 0)
		return (ft_strlen(dst));
	while ((dst[i] != '\0') && (i < dstsize_buf))
		i++;
	len1 = i;
	len2 = 0;
	if (i >= dstsize_buf)
	{
		dst[ft_strlen(dst)] = '\0';
		return (len1 + ft_strlen(src));
	}
	while ((src[len2] != '\0') && (len2 < dstsize_buf - len1 - 1))
	{
		dst[i + len2] = src[len2];
		len2++;
	}
	if (i < dstsize_buf)
		dst[i + len2] = '\0';
	return (len1 + ft_strlen(src));
}
