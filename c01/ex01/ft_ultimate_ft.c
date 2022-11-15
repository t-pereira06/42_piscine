/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:25:25 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/26 09:26:14 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	*********p_nbr;
	int	********p_nbr2;
	int	*******p_nbr3;
	int	******p_nbr4;
	int	*****p_nbr5;
	int	****p_nbr6;
	int	***p_nbr7;
	int	**p_nbr8;
	int	*p_nbr9;
	int	nbr;

	p_nbr9 = &nbr;
	p_nbr8 = &p_nbr9;
	p_nbr7 = &p_nbr8;
	p_nbr6 = &p_nbr7;
	p_nbr5 = &p_nbr6;
	p_nbr4 = &p_nbr5;
	p_nbr3 = &p_nbr4;
	p_nbr2 = &p_nbr3;
	p_nbr = &p_nbr2;

	ft_ultimate_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}
