/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:03:19 by okochulo          #+#    #+#             */
/*   Updated: 2025/09/11 12:42:22 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Assignment name  : fizzbuzz
//Expected files   : fizzbuzz.c
//Allowed functions: write
//------------------------------------------------------------------------------
// Write a program that prints the numbers from 1 to 100,
// each separated by a newline.
// If the number is a multiple of 3, it prints 'fizz' instead.
// If the number is a multiple of 5, it prints 'buzz' instead.
// If the number is both a multiple of 3 and a multiple of 5, 
// it prints 'fizzbuzz' instead.
//
//Example:
//$>./fizzbuzz
//1
//2
//fizz
//4
//buzz
//fizz
//7
//8
//fizz
//buzz
//11
//fizz
//13
//14
//fizzbuzz
//[...]
//97
//98
//fizz
//buzz
//$>

#include <unistd.h>

int	print_number(int n)
{
	char	c;

	if (n > 9)
		print_number(n / 10);
	c = n % 10 + '0';
	write(1, &c, 1);
	return (0);
}

void	fizz(void)
{
	write (1, "fizz", 4);
	write (1, "\n", 1);
}

void	buzz(void)
{
	write (1, "buzz", 4);
	write (1, "\n", 1);
}

void	fizzbuzz(void)
{
	write (1, "fizzbuzz", 8);
	write (1, "\n", 1);
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			fizzbuzz();
		else if (i % 3 == 0)
			fizz();
		else if (i % 5 == 0)
			buzz();
		else
		{
			print_number(i);
			write (1, "\n", 1);
		}
		i++;
	}
	return (0);
}
