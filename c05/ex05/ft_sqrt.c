/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:14:53 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/10 12:14:54 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	double	temp, sqrt;

	sqrt = nb /2;
	temp = 0;
	if (nb > 0)
	{
		while (sqrt != temp)
		{
			temp = sqrt;
			sqrt = (nb/temp + temp) / 2;
		}
		if(sqrt == (int)sqrt)
		{
			return(sqrt);
		}
	}
	return (0);
}

int	main(void)
{
	int	num = 26;
	printf("Number is: %d\n", num);
	printf("Return: %d", ft_sqrt(num));
	return (0);
}
