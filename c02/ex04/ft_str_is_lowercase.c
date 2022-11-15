/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:55:19 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/28 09:55:20 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	num;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] == ' '))
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
	char    *str = "jhwfgabfwa";
	char	*str1 = " ";
	char	*str2 = "fwfw242";

	printf("String: %s\n", str);
	printf("Return: %d\n", ft_str_is_lowercase(str));
	printf("\nString: %s\n", str1);
        printf("Return: %d\n", ft_str_is_lowercase(str1));
	printf("\nString: %s\n", str2);
        printf("Return: %d\n", ft_str_is_lowercase(str2));
	return (0);
}
