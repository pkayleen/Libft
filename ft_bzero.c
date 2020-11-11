/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/11 20:15:25 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/11 20:30:55 by pkayleen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
