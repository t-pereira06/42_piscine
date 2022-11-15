/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:47:02 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/03 14:47:04 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	count(char *dest)
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = count(dest);
	while (i < size && src[i] != '\0')
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (count(dest) + count(&src[i]));
}

int	main(void)
{
	char	arr1[25] = "andre";
	char	arr2[25] = "matador";

	printf("Source: %s\n", arr1);
        printf("Destination: %s\n", arr2);
	printf("Caracteres: %d\n", ft_strlcat(arr2, arr1, 3));
	printf("Source: %s\n", arr1);
	printf("Destination: %s\n", arr2);
	return (0);
}
