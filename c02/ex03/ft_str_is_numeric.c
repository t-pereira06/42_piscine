/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:50:39 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/28 09:50:40 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	num;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') || (str[i] == ' '))
		{
			num = 1;
			i++;
		}
		else
		{
			num = 0;
			break ;
		}
	}
	return (num);
}

/*int	main(void)
{
	char    *str = "8274521";
	char	*str1 = " ";
	char	*str2 = "243mexico";

	printf("String: %s\n", str);
	printf("Return: %d\n", ft_str_is_numeric(str));
	printf("\nString: %s\n", str1);
        printf("Return: %d\n", ft_str_is_numeric(str1));
	printf("\nString: %s\n", str2);
        printf("Return: %d\n", ft_str_is_numeric(str2));
	return (0);
}*/
