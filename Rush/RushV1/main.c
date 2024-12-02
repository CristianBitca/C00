/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 13:15:23 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/10 15:26:58 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush(int x, int y);

int	main(int argc, char **argv)
{
	if(argc == 1)
		rush(24, 10);
	else if(argc == 3)
		rush(argv[1][0] - '0', argv[2][0] - '0');
	else
		write(1, "wrong number of parameters", 26);
	return (0);
}
