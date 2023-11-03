/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:04:46 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/03 10:12:20 by jajuntti         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*chunk;

	chunk = malloc(count * size);
	if (chunk == NULL)
		return (NULL);
	ft_bzero(chunk, count * size);
	return (chunk);
}
