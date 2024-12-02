/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:49:26 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/12 19:49:29 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('A' <= str[i] && 'Z' >= str[i])
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	source[20] = "SUCCES";

	printf("%d\n", ft_str_is_uppercase(source));

	return (0);
}*/