/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 19:55:39 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/12 19:55:42 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (32 <= str[i] && 126 >= str[i])
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	char	source[20] = "SUCCESdsa1321^%%#@";

	printf("%d\n", ft_str_is_printable(source));

	return (0);
}*/