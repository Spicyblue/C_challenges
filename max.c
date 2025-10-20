/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:51:16 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/20 13:46:30 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : max
// Expected files   : max.c
// Allowed functions:
// ---------------------------------------------------------------------------

// Write the following function:

// int		max(int* tab, unsigned int len);

// The first parameter is an array of int, the second is the number of elements in
// the array.

// The function returns the largest number found in the array.

// If the array is empty, the function returns 0.

int		max(int* tab, unsigned int len)
{
    unsigned int    i;
    int             max_value;

    if (len == 0)
        return (0);
    max_value = tab[0];
    i = 1;
    while (i < len)
    {
        if (tab[i] > max_value)
            max_value = tab[i];
        i++;
    }
    return (max_value);
}