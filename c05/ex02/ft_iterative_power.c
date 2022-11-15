/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:48:44 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/10 09:48:46 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (1);
	while (power > 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int	main(void)
{
	printf("Return: %d", ft_iterative_power(5, 3));
	return (0);
}
