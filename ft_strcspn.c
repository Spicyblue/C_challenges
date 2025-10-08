/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:36:33 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/08 12:44:42 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name	: ft_strcspn
// Expected files	: ft_strcspn.c
// Allowed functions: None
// ---------------------------------------------------------------
// Reproduce exactly the behavior of the function strcspn
// (man strcspn).
// The function should be prototyped as follows:
// size_t	ft_strcspn(const char *s, const char *reject);

#include <stdio.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
    size_t i;
    size_t j;

    i = 0;
    while (s[i])
    {
        j = 0;
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}