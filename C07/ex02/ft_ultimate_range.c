/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 15:19:54 by jbenali           #+#    #+#             */
/*   Updated: 2024/07/13 17:27:57 by jbenali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	size = (max - min);
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
	{
		return (-1);
	}
	while (i < size)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (size);
}
