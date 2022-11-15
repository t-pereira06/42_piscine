/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 15:12:58 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/28 15:12:59 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	num;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126) || (str[i] == ' '))
		{
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
	char    *str = "Tiago*(*&$@#";
	char	*str1 = " ";
	char	*str2 = "\n";

	printf("String: %s\n", str);
	printf("Return: %d\n", ft_str_is_printable(str));
	printf("\nString: %s\n", str1);
        printf("Return: %d\n", ft_str_is_printable(str1));
	printf("\nString: %s\n", str2);
        printf("Return: %d\n", ft_str_is_printable(str2));
	return (0);
}
