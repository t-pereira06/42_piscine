/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:51:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/27 13:51:06 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (c < n)
	{
		dest[i] = '\0';
                c++;
	}

	return dest;
}

int     main(void)
{
	char    arr1[15] = "south africa";
	char    arr2[15] = "mexico";

	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	ft_strncpy(arr2, arr1, 8);
	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	return (0);
}
