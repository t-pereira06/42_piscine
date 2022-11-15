/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:29:21 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/27 11:29:23 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int	main(void)
{
	char	arr1[15] = "south africa";
	char	arr2[15] = "mexico";

	printf("Source: %s\n", arr1);
        printf("Destination: %s\n", arr2);
	ft_strcpy(arr2, arr1);
	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	return (0);
}
