/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:47:10 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/20 13:52:41 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : print_bits
// Expected files   : print_bits.c
// Allowed functions: write
// ---------------------------------------------------------------------------
// Write a function that takes a byte, and prints it in binary WITHOUT A NEWLINE
// AT THE END.
// Your function must be declared as follows:
// void	print_bits(unsigned char octet);
// Example, if you pass 2 to print_bits, it will print "00000010"

#include <unistd.h>
void	print_bits(unsigned char octet)
{
    int             i;
    unsigned char   mask;
    char            bit;

    i = 7;
    while (i >= 0)
    {
        mask = 1 << i;
        if (octet & mask)
            bit = '1'; 
        else
            bit = '0';
        write(1, &bit, 1);
        i--;
    }
}