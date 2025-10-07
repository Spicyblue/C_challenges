/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 12:42:40 by okochulo          #+#    #+#             */
/*   Updated: 2025/10/07 12:46:49 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

// Assignment name  : rotone
// Expected files   : rotone.c
// Allowed functions: write
// ----------------------------------------------------------------------------

// Write a program that takes a string and displays it, replacing each of its
// letters by the next one in alphabetical order.
// 'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.
// The output will be followed by a \n.
// If the number of arguments is not 1, the program displays \n.
// Example:
// $>./rotone "abc"
// bcd
// $>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
// Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
// $>./rotone "AkjhZ zLKIJz , 23y " | cat -e
// BlkiA aMLJKa , 23z $
// $>./rotone | cat -e
// $
// $>
// $>./rotone "" | cat -e
// $
// $>

#include <unistd.h>
int main(int ac, char **av)
{
    int i;
    char c;

    i = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            c = av[1][i];
            if ((c >= 'a' && c < 'z') || (c >= 'A' && c < 'Z'))
                c += 1;
            else if (c == 'z')
                c = 'a';
            else if (c == 'Z')
                c = 'A';
            write(1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}