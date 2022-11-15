/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 10:36:30 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/10 10:36:31 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = nb;
	if (res > res * nb)
                return (0);
	else if (power > 1)
		return (res * ft_recursive_power(nb, power - 1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);	
	else
		return (res);
}

int	main(void)
{
	printf("Return: %d", ft_recursive_power(-1, 2));
	return (0);
}
