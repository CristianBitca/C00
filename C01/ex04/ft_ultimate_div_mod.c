/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 02:10:18 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/10 17:18:34 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	var1;
	int	var2;

	var1 = *a;
	var2 = *b;
	*a= var1 / var2;
	*b = var1 % var2;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 15;
	b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("Div %d\n", a);
	printf("Mod %d\n", b);
	return (0);
}*/
