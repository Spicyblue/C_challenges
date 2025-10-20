/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:24:15 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/20 14:32:24 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : union
// Expected files   : union.c
// Allowed functions: write
// ---------------------------------------------------------------------------
// Write a program that takes two strings and displays, without doubles, the
// characters that appear in either one of the strings.
// The display will be in the order characters appear in the command line, and
// will be followed by a \n.
// If the number of arguments is not 2, the program displays \n.
// Example:
// $>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
// zpadintoqefwjy$
// $>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
// df6vewg4thras$
// $>./union "rien" "cette phrase ne cache rien" | cat -e
// rienct phas$
// $>./union | cat -e
// $
// $>
// $>./union "rien" | cat -e
// $
// $>

#include <unistd.h>
int     is_char_in_str(char c, char *str, int up_to_index)
{
    int i;

    i = 0;
    while (i < up_to_index)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}
int     main(int ac, char **av)
{
    int i;
    int j;

    if (ac == 3)
    {
        // Process first string
        i = 0;
        while (av[1][i])
        {
            if (!is_char_in_str(av[1][i], av[1], i))    //check in first string only
                write(1, &av[1][i], 1);  //write if not found or is first occurrence
            i++;
        }
        // Process second string
        j = 0;
        while (av[2][j])
        {
            if (!is_char_in_str(av[2][j], av[1], i) &&
                !is_char_in_str(av[2][j], av[2], j))
                write(1, &av[2][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
    return (0);