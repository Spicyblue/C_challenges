/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:21:48 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/20 14:24:07 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : swap_bits
// Expected files   : swap_bits.c
// Allowed functions:
// -------------------------------------------------------------------------

// Write a function that takes a byte, swaps its halves (like the example) and
// returns the result.

// Your function must be declared as follows:

// unsigned char	swap_bits(unsigned char octet);

// Example:

//   1 byte
// _____________
//  0100 | 0001
//      \ /
//      / \
//  0001 | 0100

unsigned char	swap_bits(unsigned char octet)
{
    unsigned char   left_half;
    unsigned char   right_half;

    left_half = (octet & 0xF0) >> 4; // Extract left 4 bits and shift right
    right_half = (octet & 0x0F) << 4; // Extract right 4 bits and shift left
    return (left_half | right_half); // Combine both halves
}