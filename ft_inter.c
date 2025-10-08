/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inter.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:36:03 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/08 13:45:35 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : inter
// Expected files   : inter.c
// Allowed functions: write
// -------------------------------------------------------------------------
// Write a program that takes two strings and displays, without doubles, the
// characters that appear in both strings, in the order they appear in the first
// one.
// The display will be followed by a \n.
// If the number of arguments is not 2, the program displays \n.
// Examples:
// $>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// padinto$
// $>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6ewg4$
// $>./inter "rien" "cette phrase ne cache rien" | cat -e
// rien$
// $>./inter | cat -e
// $

#include <unistd.h>
void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}
int     ft_check(char *str, char c, int pos)
{
    // just to check if char c was already printed
    int i;

    i = 0;
    while (i < pos)
    {
        if (str[i] == c)
            return (0);
        i++;
    }
    return (1);
}
int main(int ac, char **av)
{
    int i;
    int j;

    i = 0;
    if (ac == 3)
    {
        while (av[1][i])
        {
            j = 0;
            while (av[2][j])
            {
                // check if char from av1 is in av2 and if it was already printed
                if (av[1][i] == av[2][j] && ft_check(av[1], av[1][i], i))
                {
                    ft_putchar(av[1][i]);
                    break ; // move to next char in av1
                }
                j++;
            }
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}