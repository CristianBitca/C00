/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:39:17 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/12 19:39:21 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('0' <= str[i] && '9' >= str[i])
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	source[20] = "1212";

	printf("%d\n", ft_str_is_numeric(source));

	return (0);
}*/
