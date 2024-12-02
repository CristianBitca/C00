/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 20:13:21 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/10 20:13:23 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = temp;
		size--;
		i++;
	}
}

/*int main(void)
{
    int    tab[5] = {1, 2, 3, 4, 5};

    ft_rev_int_tab(tab, 5);
	for (int i = 0; i < 5; i++)
    {
        printf("%d", tab[i]);
    }
    return (0);
}*/
