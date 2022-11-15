/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:57:05 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/26 13:57:07 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tmp;
		i++;
	}
}

void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size -1); i++)
		printf("%d, ", arr[i]);
		printf("%d\n", arr[size - 1]);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	size;

	size = 5;

	ft_rev_int_tab(tab, size);
	printf("Modificado: ");
	putarr(tab, size);
}

//comentar main e include e verificar norminette
