/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:30:13 by okochulo          #+#    #+#             */
/*   Updated: 2025/09/11 16:32:46 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Assignment name  : ft_strlen
//Expected files   : ft_strlen.c
//Allowed functions:
//------------------------------------------------------------------------------
//Write a function that returns the length of a string.
//Your function must be declared as follows:
//int	ft_strlen(char *str);

#include <unistd.h>

int	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
