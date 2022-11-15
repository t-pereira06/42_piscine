/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:38:18 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/03 10:38:20 by tsodre-p         ###   ########.fr       */
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

char	*ft_strcat(char *dest, char *src)
{
	int	c;

	c = countdest(dest);
	while (*src != '\0')
	{
		dest[c] = *src;
		c++;
		src++;
	}
	dest[c] = '\0';
	return (dest);
}

int	main(void)
{
	char	arr1[25] = "america";
	char	arr2[25] = "portugal";

	printf("Source: %s\n", arr1);
        printf("Destination: %s\n", arr2);
	ft_strcat(arr2, arr1);
	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	return (0);
}
