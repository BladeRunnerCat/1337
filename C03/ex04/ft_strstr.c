/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbenali <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:04:46 by jbenali           #+#    #+#             */
/*   Updated: 2024/07/03 13:05:03 by jbenali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(char *str, char *to_find)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
    if (to_find[j] == '\0')
        return (str);
    while (str[i] != '\0')
    {
        while (str[i + j] == to_find[j] && str[i + j] != '\0')
            j++;
        if (to_find[j] == '\0')
        {
            return (str + i);
        }
            
        i++;
        j = 0;
    }
    return (0);
}
int main()
{
    char h[] = " qwe hb qwe qwe";
    char hb[] = "hb";
    printf("%s", ft_strstr(h,hb)); 
}