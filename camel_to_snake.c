/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 14:58:54 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/07 15:05:34 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : camel_to_snake
// Expected files   : camel_to_snake.c
// Allowed functions: malloc, realloc, write
// ------------------------------------------------------------------------------
// Write a program that takes a single string in lowerCamelCase format
// and converts it into a string in snake_case format.
// A lowerCamelCase string is a string where each word begins with a capital letter
// except for the first one.
// A snake_case string is a string where each word is in lower case, separated by
// an underscore "_".
// Examples:
// $>./camel_to_snake "hereIsACamelCaseWord"
// here_is_a_camel_case_word
// $>./camel_to_snake "helloWorld" | cat -e
// hello_world$
// $>./camel_to_snake | cat -e
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

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            c = av[1][i];
            if (c >= 'A' && c <= 'Z')
            {
                ft_putchar('_');
                c += 32;
            }
            ft_putchar(c);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}