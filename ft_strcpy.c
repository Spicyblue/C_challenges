/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 16:19:52 by okochulo          #+#    #+#             */
/*   Updated: 2025/09/11 16:26:50 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Assignment name  : ft_strcpy
//Expected files   : ft_strcpy.c
//Allowed functions:
//----------------------------------------------------------------------------
//Reproduce the behavior of the function strcpy (man strcpy).
//Your function must be declared as follows:
//char    *ft_strcpy(char *s1, char *s2);

#include <unistd.h>

char	*ft_strcpy(char	*s1, char *s2)
{
	size_t	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
