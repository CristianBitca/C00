/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochernov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 21:30:24 by ochernov          #+#    #+#             */
/*   Updated: 2024/08/09 22:10:39 by ochernov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	prn_row(int x, char b, char m, char e)
{
	int	i;

	if (x > 0)
		ft_putchar(b);
	i = 0;
	while (i++ < x - 2)
		ft_putchar(m);
	if (x > 1)
		ft_putchar(e);
	ft_putchar('\n');
}

void	rush_(int x, int y, char *s)
{
	int	i;

	if (y > 0)
		prn_row(x, s[0], s[4], s[1]);
	i = 0;
	while (i++ < y - 2)
		prn_row(x, s[5], s[6], s[5]);
	if (y > 1)
		prn_row(x, s[2], s[4], s[3]);
}

void	rush_x(int x, int y, int n)
{
	if (n == 0)
		rush_(x, y, "oooo-| ");
	else if (n == 1)
		rush_(x, y, "/\\\\/** ");
	else if (n == 2)
		rush_(x, y, "AACCBB ");
	else if (n == 3)
		rush_(x, y, "ACACBB ");
	else
		rush_(x, y, "ACCABB ");
}

void	rush(int x, int y)
{
	rush_x(x, y, 3);
}
