/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:59:19 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/28 09:59:21 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	num;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] == ' '))
		{
			num = 1;
			i++;
		}
		else
		{
			num = 0;
			break;
		}
	}

	return num;
}

int	main(void)
{
	char    *str = "JGFGFGW";
	char	*str1 = " ";
	char	*str2 = "FJWU421";

	printf("String: %s\n", str);
	printf("Return: %d\n", ft_str_is_uppercase(str));
	printf("\nString: %s\n", str1);
        printf("Return: %d\n", ft_str_is_uppercase(str1));
	printf("\nString: %s\n", str2);
        printf("Return: %d\n", ft_str_is_uppercase(str2));
	return (0);
}
