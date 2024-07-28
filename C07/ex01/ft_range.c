/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 14:57:26 by jbenali           #+#    #+#             */
/*   Updated: 2024/07/13 15:18:24 by jbenali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int	*inrange;
	int	size;
	int	mini;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	mini = min;
	size = (max - min);
	inrange = malloc (sizeof(int) * size);
	while (i < size)
	{
		inrange[i] = mini;
		i++;
		mini++;
	}
	return (inrange);
}
