/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 13:49:09 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/09 11:22:55 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : last_word
// Expected files   : last_word.c
// Allowed functions: write
// ----------------------------------------------------------------------------
// Write a program that takes a string and displays its last word followed by a \n.
// A word is a section of string delimited by spaces/tabs or by the start/end of
// the string.
// If the number of parameters is not 1, or there are no words, display a newline.
// Example:
// $> ./last_word "FOR PONY" | cat -e
// PONY$
// $> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
// not$
// $> ./last_word "   " | cat -e
// $
// $> ./last_word "a" "b" | cat -e
// $
// $> ./last_word "  lorem,ipsum  " | cat -e
// lorem,ipsum$
// $>

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
int     main(int ac, char **av)
{
    int i;
    int len;
    int end;
    int start;
    
    if (ac == 2)
    {
        len = ft_strlen(av[1]);
        i = len - 1;
        // skip trailing spaces/tabs
        while (i >= 0 && (av[1][i] == ' ' || av[1][i] == '\t'))
            i--;
        end = i;
        // find the start of the last word
        while (i >= 0 && av[1][i] != ' ' && av[1][i] != '\t')
            i--;
        start = i + 1; // zero-based index so +1;
        // print the last word
        while (start <= end)
        {
            ft_putchar(av[1][start]);
            start++;
        }
    }
    ft_putchar('\n');
    return (0);
} 
