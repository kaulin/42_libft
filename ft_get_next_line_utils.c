/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line_utils.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jajuntti <jajuntti@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:56:53 by jajuntti          #+#    #+#             */
/*   Updated: 2024/02/01 12:00:38 by jajuntti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// Frees one argument pointer also resetting it to null, and returns the other
char	*clean(char *waste_pointer, char *return_pointer)
{
	free(waste_pointer);
	waste_pointer = NULL;
	return (return_pointer);
}
