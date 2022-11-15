/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 14:18:15 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/28 14:18:17 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (i < size && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (c < size)
	{
		dest[i - 1] = '\0';
                c++;
	}

	return (i);
}

int     main(void)
{
	char    arr1[15] = "south africa";
	char    arr2[15] = "mexico";

	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	printf("Caracteres transferidos: %d\n", ft_strlcpy(arr2, arr1, 8));
	printf("Destination: %s\n", arr2);
	return (0);
}
