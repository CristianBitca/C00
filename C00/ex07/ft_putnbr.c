/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 11:54:42 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/10 16:08:32 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb < 0)
	{
		if (nb <= -10)
		{
			ft_putnbr(nb / 10);
		}
		if (nb > -10)
			write(1, "-", 1);
		c = (nb % 10 * -1) + '0';
		write(1, &c, 1);
	}
	if (nb >= 0)
	{
		if (nb >= 10)
		{
			ft_putnbr(nb / 10);
		}
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

/*void check(int i)
{
	printf("%d ->\n", i);
	ft_putnbr(i);
	printf("\n");
}

int	main(void)
{
	check(0);
	check(-1);
	check(1);
	check(-2147483648);
	check(2147483647);
	return (0);
}*/
