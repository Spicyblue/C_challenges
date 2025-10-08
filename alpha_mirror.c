/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:53:58 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/07 14:58:07 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : alpha_mirror
// Expected files   : alpha_mirror.c
// Allowed functions: write
// -----------------------------------------------------------------------------
// Write a program called alpha_mirror that takes a string and displays this string
// after replacing each alphabetical character by the opposite alphabetical
// character, followed by a newline.
// 'a' becomes 'z', 'Z' becomes 'A'
// 'd' becomes 'w', 'M' becomes 'N'
// and so on.
// Case is not changed.
// If the number of arguments is not 1, display only a newline.
// Examples:
// $>./alpha_mirror "abc"
// zyx
// $>./alpha_mirror "My horse is Amazing." | cat -e
// Nb slihv rh Znzarmt.$
// $>./alpha_mirror | cat -e
// $
// $>

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     main(int ac, char **av)
{
    int i;
    char c;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            c = av[1][i];
            if (c >= 'a' && c <= 'z')
                c = 'z' - (c - 'a');
            else if (c >= 'A' && c <= 'Z')
                c = 'Z' - (c - 'A');
            ft_putchar(c);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}