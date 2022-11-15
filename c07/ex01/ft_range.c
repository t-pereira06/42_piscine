/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:17:56 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/12 12:17:57 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	arr_len;
	int	i;
	int	*arr;

	if (min > max)
		return (NULL);
	arr_len = max - min;
	arr = (int *) malloc(arr_len * sizeof(int));
	i = 0;
	while (i < arr_len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
#include <stdio.h>
int	main(void)
{
	int	i;
	int	*arr;

	arr = ft_range(-1, 10);
	i = 0;
	while (i < 11)
	{
		printf("%d", arr[i]);
		i++;
	}
}
