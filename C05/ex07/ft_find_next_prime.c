/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 21:14:09 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/23 21:14:11 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_sqrt(int nb)
{
    int    i;

    i = 0;
    if (nb == 0)
        return (0);
    while (nb > (i * i))
        i++;
    return (i);
    
}

int ft_is_prime(int nb)
{
    int    i;
    int    k;

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

int ft_find_next_prime(int nb)
{
	if (nb <= 1)
        return (2);
    while (ft_is_prime(nb) != 1)
        nb++;
    return (nb);
}

int main(void)
{
    printf("%d\n", ft_find_next_prime(15031));
}
