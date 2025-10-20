/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:53:17 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/20 13:57:45 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : reverse_bits
// Expected files   : reverse_bits.c
// Allowed functions:
// ----------------------------------------------------------------------------

// Write a function that takes a byte, reverses it, bit by bit (like the
// example) and returns the result.
// Your function must be declared as follows:
// unsigned char	reverse_bits(unsigned char octet);
// Example:
//   1 byte
// _____________
//  0010  0110
//      ||
//      \/
//  0110  0100

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char   reversed;
    int             i;

    reversed = 0;
    i = 0;
    while (i < 8)
    {
        reversed <<= 1; // shift left to make room for the next bit
        if (octet & 1) // check if the least significant bit is set
            reversed |= 1; // set the least significant bit of reversed
        octet >>= 1; // shift right to process the next bit
        i++;
    }
    return (reversed);
}