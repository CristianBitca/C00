/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 15:54:40 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/12 15:55:11 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && 'z' >= str[i])
			|| ('A' <= str[i] && 'Z' >= str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(void)
{
	char	source[20] = "sad";

	printf("%d\n", ft_str_is_alpha(source));

	return (0);
}