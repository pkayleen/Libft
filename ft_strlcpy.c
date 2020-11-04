/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 18:22:08 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/04 18:32:17 by pkayleen         ###   ########.fr       */
=======
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkayleen <pkayleen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 17:17:17 by pkayleen          #+#    #+#             */
/*   Updated: 2020/11/03 15:39:20 by pkayleen         ###   ########.fr       */
>>>>>>> 97d76fc81444bee4fe6e62c36b289802fb86bef7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	int	i;

	i = 0;
	while (n != 1 && src[i] != '\0')
	{
		n--;
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
=======
size_t  ft_strlcpy(char *dst, const char *src, size_t n)
{
    int i;

    i = 0;
    while(n != 1 && src[i] != '\0')
    {
        n--;
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (ft_strlen(src));
>>>>>>> 97d76fc81444bee4fe6e62c36b289802fb86bef7
}
