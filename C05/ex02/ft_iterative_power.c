/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 21:50:26 by jbenali           #+#    #+#             */
/*   Updated: 2024/07/07 21:51:53 by jbenali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	while (power > i)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
