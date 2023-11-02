/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:58:27 by jajuntti          #+#    #+#             */
/*   Updated: 2023/11/02 14:00:26 by jajuntti         ###   ########.fr       */
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
	while (str[i] && str[i] == ' ')
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
