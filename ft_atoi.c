/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:39:44 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/08 09:44:26 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	long	prev;
	int		i;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	while (str[i] && ft_strchr(" \t\v\n\r\f", str[i]) != NULL)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && ft_isdigit(str[i]))
	{
		prev = num;
		num = num * 10 + (long)str[i++] - '0';
		if (prev > num)
		{
			if (sign == 1)
				return (-1);
			return (0);
		}
	}
	return (sign * (int)num);
}
