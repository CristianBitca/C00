/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 12:53:17 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/10 15:42:06 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	row(int x, char f, char m, char l)
{
	int	i;

	if (x > 0)
		ft_putchar(f);
	i = 0;
	while (i < x - 2)
	{
		ft_putchar(m);
		i++;
	}
	if (x > 1)
		ft_putchar(l);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	if (y > 0)
		row(x, 'A', 'B', 'C');
	i = 0;
	while (i < y - 2)
	{
		row(x, 'B', ' ', 'B');
		i++;
	}
	if (y > 1)
		row(x, 'A', 'B', 'C');
}
