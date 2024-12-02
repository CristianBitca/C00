/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 12:53:17 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/11 19:47:01 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_row(int x, char first, char midlle, char last)
{
	int	i;

	if (x > 0)
		ft_putchar(first);
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(midlle);
		i++;
	}
	if (x > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (x > 0 && y > 0)
	{
		if (y > 0)
			print_row(x, 'A', 'B', 'C');
		i = 0;
		while (i < y - 2)
		{
			print_row(x, 'B', ' ', 'B');
			i++;
		}
		if (y > 1)
			print_row(x, 'A', 'B', 'C');
	}
	else
		write(1, "The value of X and Y need to be more then 0\n", 45);
}
