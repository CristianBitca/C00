/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochernov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 21:23:57 by ochernov          #+#    #+#             */
/*   Updated: 2024/08/11 18:57:20 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);
void	rush_x(int x, int y, int n);

int	main(int argc, char **argv)
{
	if (argc == 1)
		rush(5, 5);
	else if (argc == 3)
		rush(argv[1][0] - '0', argv[2][0] - '0');
	else if (argc == 4)
		rush_x(argv[1][0] - '0', argv[2][0] - '0', argv[3][0] - '0');
	else
		write(1, "wrong number of parameters", 26);
	return (0);
}
