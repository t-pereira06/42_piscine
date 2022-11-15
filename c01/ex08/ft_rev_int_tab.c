/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:33:59 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/26 14:34:06 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	trd;

	while (size > 0)
	{
		i = 0;
		while (i < size - 1)
		{
			while (tab[i] > tab[i + 1])
			{
				trd = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = trd;
			}
			i++;
		}
		size--;
	}
}

void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size - 1); i++)
		printf("%d, ", arr[i]);
		printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	tab[] = {10, 5, 4, 7, 1};
	int	size;

	size = 5;
	ft_sort_int_tab(tab, size);
	printf("Modificado: ");
	putarr(tab, size);
}

