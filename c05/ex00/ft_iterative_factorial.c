/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:41:33 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/06 15:41:35 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (i);
	while (i < nb)
	{
		res =  res * (i + 1);
		i++;
	}
	return (res);
}

int	main(void)
{
	printf("Return: %d", ft_iterative_factorial(-1));
	return (0);
}
