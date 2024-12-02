/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 20:45:11 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/12 20:45:13 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			&& (i == 0 || str[i - 1] == '+'
				|| str[i - 1] == '-' || str[i - 1] == ' '))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= 'A' && str[i] <= 'Z')
			&& ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= 'a' && str[i - 1] <= 'b')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char source[100] = "";

	ft_strcapitalize(source);
	printf("%s\n", source);

	return (0);
}*/
