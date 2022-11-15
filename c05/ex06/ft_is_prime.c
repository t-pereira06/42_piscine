/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:43:07 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/10 14:43:08 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	while (i <= nb / i)
	{
		if(nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(void)
{
	int	num = 10;
	printf("Number: %d\n", num);
	printf("Return: %d" , ft_is_prime(num));
}
