/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:24:59 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/29 13:25:00 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	temp = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	*range = temp;
	return (i);
}

/*int main(void)
{
	int *range;
	int min;
	int max;
	int i;

	i = 0;
	min = 5;
	max = 10;
	printf("%d\n", ft_ultimate_range(&range, min, max));
	while (i < max - min)
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
}*/