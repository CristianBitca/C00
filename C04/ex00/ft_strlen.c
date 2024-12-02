/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:58:01 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/15 15:58:03 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

int	main(void)
{
	char	source[20] = "Succes";
	int len;

	len = ft_strlen(source);
	printf("LEnght of string is : %d\n", len);
	return (0);
}