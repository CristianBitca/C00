/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:12:50 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/29 14:12:52 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_len(int size, char **str)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (str[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_join(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;
	int		len;

	len = ft_len(size, strs) + (size - 1) * ft_strlen(sep) + 1;
	str = (char *)malloc(sizeof(char) * len);
	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[k++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < size - 1)
			str[k++] = sep[j++];
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size == 0)
	{
		str = (char *)malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	str = ft_join(size, strs, sep);
	return (str);
}

/*int main(void)
{
	char *strs[3] = {"Hello", "World", "!"};
	char *sep = " ";
	char *str;

	str = ft_strjoin(3, strs, sep);
	printf("%s", str);
	return (0);
}*/