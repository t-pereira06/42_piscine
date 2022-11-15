/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 11:25:28 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/26 11:25:29 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	i;
	int	j;
	int	*div;
	int	*mod;

	i = 10;
	j = 5;
	div = &i;
	mod = &j;
	ft_div_mod(i, j, div, mod);
	printf("Value of a is: %d", *div);
	printf("Value of b is : %d", *mod);
}
