/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_power_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:19:55 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/08 15:22:43 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : is_power_of_2
// Expected files   : is_power_of_2.c
// Allowed functions: None
// ---------------------------------------------------------------------------
// Write a function that determines if a given number is a power of 2.
// This function returns 1 if the given number is a power of 2, otherwise it returns 0.
// Your function must be declared as follows:
// int	    is_power_of_2(unsigned int n);

#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
    if (n == 0)
        return (0);
    while (n % 2 == 0)
        n /= 2;
    return (n == 1);
}
