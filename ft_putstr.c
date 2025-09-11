/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:10:22 by okochulo          #+#    #+#             */
/*   Updated: 2025/09/11 16:15:41 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Assignment name  : ft_putstr
//Expected files   : ft_putstr.c
//Allowed functions: write
//------------------------------------------------------------------------------
//Write a function that displays a string on the standard output.
//The pointer passed to the function 
//contains the address of the string's first character.
//Your function must be declared as follows:
//void	ft_putstr(char *str);

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
