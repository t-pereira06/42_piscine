/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:40:40 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/26 11:40:42 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = (*a) / (*b);
	mod = (*a) % (*b);
	*a = div;
	*b = mod;
}

int	main(void)
{
	int	i = 10;
	int	j = 5;
	int	*a = &i;
	int	*b = &j;

	printf("a= %d\n", i);
	printf("b= %d\n", j);
	ft_ultimate_div_mod(a, b);
	printf("resultado div %d\n", *a);
	printf("resultado mod %d", *b);
}
//comentar main e include e passar no norminette
