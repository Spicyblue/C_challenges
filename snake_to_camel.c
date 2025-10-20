/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 14:32:48 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/20 14:36:07 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : snake_to_camel
// Expected files   : snake_to_camel.c
// Allowed functions: malloc, free, realloc, write
// -------------------------------------------------------------------------
// Write a program that takes a single string in snake_case format
// and converts it into a string in lowerCamelCase format.
// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".
// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.
// Examples:
// $>./snake_to_camel "here_is_a_snake_case_word"
// hereIsASnakeCaseWord
// $>./snake_to_camel "hello_world" | cat -e
// helloWorld$
// $>./snake_to_camel | cat -e
// $

#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}
int     main(int ac, char **av)
{
    int i;
    char c;
    int capitalize_next;
    i = 0;
    capitalize_next = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            c = av[1][i];
            if (c == '_')
                capitalize_next = 1;
            else
            {
                if (capitalize_next)
                {
                    if (c >= 'a' && c <= 'z')
                        c -= 32;
                    capitalize_next = 0;
                }
                ft_putchar(c);
            }
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}
