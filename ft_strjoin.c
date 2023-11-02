/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:29:43 by jajuntti          #+#    #+#             */
/*   Updated: 2023/10/31 10:19:19 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(ft_strlen(s1) + len + 1);
	if (str == NULL)
		return (NULL);
	ft_strlcat(str, s1, len + 1);
	ft_strlcat(str + ft_strlen(s1), s2, len + 1);
	return (str);
}
