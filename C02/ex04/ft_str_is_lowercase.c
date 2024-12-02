/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:46:49 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/12 19:46:52 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && 'z' >= str[i])
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	source[20] = "succes";

	printf("%d\n", ft_str_is_lowercase(source));

	return (0);
}*/
