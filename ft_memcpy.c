/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 09:55:20 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/03 15:26:35 by jajuntti         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	i = 0;
	if (src == dst)
		return (dst);
	while (i < n)
	{
		to[i] = from[i];
		i++;
	}
	return (dst);
}
