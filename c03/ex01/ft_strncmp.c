/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:43:00 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/03 09:43:02 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int	main(void)
{
	char str1[20] = "bomdiaaa";
	char str2[20] = "Ola";
	char str3[20] = "bomdiaaa";

	printf("Primeira String: %s", str1);
	printf("\nSegunda String: %s", str3);
	printf("\nReturn: %d", ft_strncmp(str1, str3, 5));
}
