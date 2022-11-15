/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:17:48 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/10 16:17:50 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (2);
	while (i <= nb / i)
	{
		if (nb % i == 0)
		{
			return (ft_find_next_prime(nb + 1));
		}
		i++;
	}
	return (nb);
}

int	main(void)
{
	int     num = 340;
	printf("Number: %d\n", num);
	printf("Return: %d" , ft_find_next_prime(num));
}

