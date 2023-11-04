/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:39:44 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/04 11:54:56 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Integer overflow!!!!
int	ft_atoi(const char *str)
{
	long	i;
	long	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 0;
	while (str[i] && ft_strchr(" \t\v\n\r\f", str[i]) != NULL)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		if (sign < 0)
			num = num * 10 - (str[i] - '0');
		else
			num = num * 10 + (str[i] - '0');
		i++;
	}
	return ((int)num);
}
