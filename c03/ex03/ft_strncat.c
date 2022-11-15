/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:58:43 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/03 10:58:44 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	countdest(char *dest)
{
	int	i;

	i = 0;
	while (*dest != '\0')
	{
		i++;
		dest++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	c;
	int	i;

	i = 0;
	c = countdest(dest);
	while (i < nb && src[i] != '\0')
	{
		dest[c + i] = src[i];
		i++;
	}
	dest[c + i] = '\0';
	return (dest);
}

int	main(void)
{
	char	arr1[25] = "canada";
	char	arr2[25] = "france";

	printf("Source: %s\n", arr1);
        printf("Destination: %s\n", arr2);
	ft_strncat(arr2, arr1, 5);
	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	return (0);
}
