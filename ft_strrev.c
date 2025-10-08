/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:00:59 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/08 13:35:09 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : ft_strrev
// Expected files   : ft_strrev.c
// Allowed functions:
// ---------------------------------------------------------------------

// Write a function that reverses (in-place) a string.
// It must return its parameter.
// Your function must be declared as follows:
// char    *ft_strrev(char *str);

#include <stdio.h>
char    *ft_strrev(char *str)
{
    size_t  i;
    size_t  len;
    char    temp;

    len = 0;
    while (str[len])
        len++;
    i = 0;
    while (i < len / 2)
    {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
        i++;
    }
    return (str);
}
