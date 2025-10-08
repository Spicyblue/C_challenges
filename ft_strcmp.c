/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 10:34:14 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/08 13:45:17 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : ft_strcmp
// Expected files   : ft_strcmp.c
// Allowed functions:
// ---------------------------------------------------------------------------
// Reproduce the behavior of the function strcmp (man strcmp).
// Your function must be declared as follows:
// int    ft_strcmp(char *s1, char *s2);

int    ft_strcmp(char *s1, char *s2)
{
    while (*s1 && (*s1 == *s2))
    {
        s1++;
        s2++;
    }
    return (*(unsigned char *)s1 - *(unsigned char *)s2);
}