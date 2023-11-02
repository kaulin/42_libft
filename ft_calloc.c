/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:04:46 by jajuntti          #+#    #+#             */
/*   Updated: 2023/10/31 10:18:08 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t count, size_t size)
{
	void	*contiguous_chunk;

	contiguous_chunk = malloc(count * size);
	if (contiguous_chunk == NULL)
		return (NULL);
	ft_bzero(contiguous_chunk, count * size);
	return (contiguous_chunk);
}
