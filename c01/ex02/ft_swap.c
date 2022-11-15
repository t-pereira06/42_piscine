/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:24:15 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/26 10:24:17 by tsodre-p         ###   ########.fr       */
 /*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(void)
{
	int	i;
	int	j;

	i = 15;
	j = 20;

	int	*a = &i;
	int	*b = &j;

	ft_swap(a,b);
	printf("i should be 15 and it is: %u\n", *a);
	printf("j should be 20 and it is : %u", *b);
	return (0);
}

//ver norminette depois de eliminar main
