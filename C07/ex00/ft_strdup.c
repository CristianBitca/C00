/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 19:11:26 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/29 20:53:14 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	n;
	int	i;

	n = ft_strlen(src);
	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*str;

	str = malloc(ft_strlen(src) + 1);
	ft_strcpy(str, src);
	return (str);
}

/*int main()
{
	char source[] = "GeeksForGeeks";
	char* test;
	char* target;

	target = ft_strdup(source);
	test = strdup(source); 
 	printf("%s", target);
	return 0;
}*/
