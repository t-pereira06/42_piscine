/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:20:09 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/12 12:20:12 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int	**range, int min, int max)
{
	int	arr_len;
	int	i;
	int	*arr;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	arr_len = max - min;
	arr = (int *) malloc(arr_len * sizeof(int));
	if (!arr)
	{
		*range = 0;
		return (0);
	}
	*range = arr;
	i = 0;
	while (i < arr_len)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr_len);
}

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = -3;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}

}
