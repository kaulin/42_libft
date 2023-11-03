/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:47:38 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/03 15:37:43 by jajuntti         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_i;
	size_t	src_i;
	size_t	len;

	dst_i = 0;
	src_i = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	while (dst[dst_i])
		dst_i++;
	while (dst_i < (dstsize - 1) && src[src_i])
	{
		dst[dst_i] = src[src_i];
		dst_i++;
		src_i++;
	}
	dst[dst_i] = 0;
	return (len);
}
