/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:50:30 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/28 11:50:31 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			i++;
		}
		if ((str[i] < '/') && (str[i + 1] == ' '))
		{
			i = i + 2;
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
				i++;
		}
		if ((str[i] < '\') || (str[i] == ' '))
		{
			i++;
			str[i] = str[i] - 32;
		}
		else if (i != 0)
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
				i++;
		}
        }
        return (str);
}

int	main(void)
{
	char    str[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("String: %s\n", str);
	printf("Return: %s\n", ft_strcapitalize(str));
	return (0);
}
