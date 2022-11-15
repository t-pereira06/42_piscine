/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsodre-p <tsodre-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:53:55 by tsodre-p          #+#    #+#             */
/*   Updated: 2022/09/27 14:53:57 by tsodre-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
        int     i;
        int     num;

        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= 'a' && str[i] <= 'z')
                        num = 1;
                        i++;
                else if (str[i] >= 'A' && str[i] <= 'Z')
                        num = 1;
                        i++;
                else if (str[i] == ' ')
                        num = 1;
                        i++;
                else
                        num = 0;
                break ;
        }
        return (num);
}

int	main(void)
{
	char    *str = "south africa";
	char	*str1 = " ";
	char	*str2 = "mexico2";

	printf("String: %s\n", str);
	printf("Return: %d\n", ft_str_is_alpha(str));
	printf("\nString: %s\n", str1);
        printf("Return: %d\n", ft_str_is_alpha(str1));
	printf("\nString: %s\n", str2);
        printf("Return: %d\n", ft_str_is_alpha(str2));
	return (0);
}
