/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 13:58:45 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/20 14:11:35 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : wdmatch
// Expected files   : wdmatch.c
// Allowed functions: write
// -------------------------------------------------------------------------
// Write a program that takes two strings and checks whether it's possible to
// write the first string with characters from the second string, while respecting
// the order in which these characters appear in the second string.
// If it's possible, the program displays the string, followed by a \n, otherwise
// it simply displays a \n.
// If the number of arguments is not 2, the program displays a \n.
// Examples:
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
// faya$
// $>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
// $
// $>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
// quarante deux$
// $>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
// $
// $>./wdmatch | cat -e
// $

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 3)
    {
        i = 0;
        j = 0;
        while (av[1][i] && av[2][j])
        {
            if (av[1][i] == av[2][j])
                i++;
            j++;
        }
        if (av[1][i] == '\0')
        {
            i = 0;
            while (av[1][i])
            {
                ft_putchar(av[1][i]);
                i++;
            }
        }
    }
    ft_putchar('\n');
    return (0);
}