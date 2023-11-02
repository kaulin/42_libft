/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:08:14 by jajuntti          #+#    #+#             */
/*   Updated: 2023/10/26 16:04:55 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*to;
	unsigned char	*from;
	size_t			i;

	to = (unsigned char *)dst;
	from = (unsigned char *)src;
	if (src == dst)
		return (dst);
	if (src + len - 1 >= dst && src + len - 1 <= dst + len - 1)
	{
		i = len - 1;
		while (i >= 0)
		{
			to[i] = from[i];
			i--;
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
