/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 12:45:23 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/08 12:49:53 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name	: ft_strspn
// Expected files	: ft_strspn.c
// Allowed functions: None
// -----------------------------------------------------------
// Reproduce exactly the behavior of the strspn function 
// (man strspn).
// The function should be prototyped as follows:
// size_t	ft_strspn(const char *s, const char *accept);

#include <stdio.h>
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i;
    size_t j;
    i = 0;
    while (s[i])
    {
        j = 0;
        while (accept[j])
        {
            if (s[i] == accept[j])
                break ;
            j++;
        }
        if (!accept[j])
            return (i);
        i++;
    }
    return (i);
}