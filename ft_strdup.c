/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 09:01:36 by jajuntti          #+#    #+#             */
/*   Updated: 2023/10/31 10:19:03 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	size_t	len;
	char	*copy;

	i = 0;
	len = ft_strlen(s1);
	copy = malloc(len * sizeof(char) + 1);
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, s1, len + 1);
	return (copy);
}
