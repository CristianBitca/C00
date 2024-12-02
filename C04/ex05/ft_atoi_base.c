/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:08:27 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/25 14:30:38 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	i = 0;
	while (*base++)
		i++;
	return (i);
}

int	sign_number(int i, char *str)
{
	int	sign;

	sign = 1;
	while (str[i] == '-' || str[i] == '+' || str[i] == ' ')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	return (sign);
}

int	check_number(int i, char *str, char *base)
{
	int	j;

	while (str[i])
	{
		j = 0;
		while (base[j])
		{
			if (str[i] != base[j] && base[j])
				return (0);
			else
				return (j);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	power;

	i = 0;
	res = 1;
	power = check_base(base);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)
		|| str[i] == '+' || str[i] == '-')
		i++;
	sign = sign_number(i, str);
	while (check_number(i, str, base) != 0)
	{
		res = (check_number(i, str, base));
	}
	return (res * sign);
}

int	main(void)
{
	printf("%d", ft_atoi_base("  +----+-95645", "0123456789"));
	return (0);
}
