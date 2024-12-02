/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:16:32 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/26 14:21:59 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (0);
	while (nb > (i * i))
		i++;
	return (i);
}

int	ft_is_prime(int nb)
{
	int	i;
	int	k;

	i = 2;
	k = ft_sqrt(nb);
	if (nb == 0 || nb == 1)
		return (0);
	while (i <= k)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*int main(void)
{
    printf("%d\n", ft_is_prime(15030));
}*/
