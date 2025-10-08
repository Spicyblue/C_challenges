/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:53:07 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/08 13:45:22 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : ft_strdup
// Expected files   : ft_strdup.c
// Allowed functions: malloc
// -------------------------------------------------------------------------

// Reproduce the behavior of the function strdup (man strdup).
// Your function must be declared as follows:
// char    *ft_strdup(char *src);

#include <stdlib.h>
char    *ft_strdup(char *src)
{
    char    *dup;
    int     i;

    i = 0;
    while (src[i])
        i++;
    dup = (char *)malloc(sizeof(char) * (i + 1));
    if (!dup)
        return (NULL);
    i = 0;
    while (src[i])
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}