/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 22:46:36 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/12 22:46:38 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size != 0)
		while (i < size - 1 && (src[i] || dest[i]))
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	return (src_len);
}

/*int	main(void)
{
	char	source[20] = "Succes";
	char	destination[20];
	char 	test[20];
	unsigned int	size;

	size = 20;
	printf("Copied string size is: %d\n", ft_strlcpy(destination, source, size));
	printf("Source string is: %s\n", source);
	printf("Copied string is: %s\n", destination);

	return (0);
}*/
