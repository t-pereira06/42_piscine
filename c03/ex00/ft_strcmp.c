/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:50:20 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/29 13:50:23 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char str1[20] = "Ola";
	char str2[20] = "Ola";
	char str3[20] = "Joao";

	printf("Primeira String: %s", str1);
	printf("\nSegunda String: %s", str2);
	printf("\nReturn: %d", ft_strcmp(str1, str3));
}
