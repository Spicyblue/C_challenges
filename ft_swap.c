/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:34:51 by okochulo          #+#    #+#             */
/*   Updated: 2025/09/11 16:40:45 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Assignment name  : ft_swap
//Expected files   : ft_swap.c
//Allowed functions:
//------------------------------------------------------------------------------
//Write a function that swaps the contents of two integers the adresses
//of which are passed as parameters.
//Your function must be declared as follows:
//void	ft_swap(int *a, int *b);

#include <unistd.h>

void	ft_swap(int *a,	int *b)
{
	int	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
