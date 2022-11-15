/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 17:04:02 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/10/12 17:04:03 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_size(char **strs, int size, char *sep)
{
	int	i;
	int	t_size;

	i = 0;
	while (i < size)
	{
		t_size += ft_strlen(strs[i]);
		i++;
	}
	if (size == 1)
		return (t_size + ft_strlen(sep));
	return (t_size + ft_strlen(sep) * (size - 1));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		a;
	int		b;
	char	*str;

	if (size <= 0)
		return ((char *) malloc(sizeof(char)));
	str = (char *) malloc(total_size(strs, size, sep) * sizeof(char) + 1);
	a = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < ft_strlen(strs[i]))
			str[a++] = strs[i][j++];
		b = 0;
		while (b < ft_strlen(sep) && i != (size - 1))
			str[a++] = sep[b++];
		i++;
	}
	str[a] = '\0';
	return (str);
}
#include <stdio.h>
int	main(void)
{
	char 	*string[10];
	char	*str;

	string[0] = "Ola";
	string[1] = "pessoal";
	string[2] = "incrivel";

	str = ft_strjoin(3, string, "-");
	printf("%s\n", str);
	free(str);
}
