/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:57:45 by jbenali           #+#    #+#             */
/*   Updated: 2024/07/13 13:56:50 by jbenali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	pputs(char *src, char *str)
{
	int	i;

	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = malloc (sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	pputs(src, str);
	return (str);
}
