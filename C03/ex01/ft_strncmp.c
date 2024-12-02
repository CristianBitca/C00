/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbitca <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 21:15:00 by cbitca            #+#    #+#             */
/*   Updated: 2024/08/24 20:06:43 by cbitca           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*void	test(char *s1, char *s2)
{
	printf("%d\n", ft_strncmp(s1, s2, 3));
	printf("%d\n", strncmp(s1, s2, 3));
	printf("\n");
}

int    main(void)
{
    test("", "");
    test("abc", "");
    test("", "abc");
    test("under", "under");
    test("vision", "visison");
    test("extr\0a", "extr\0a");
    test("one more", "\0one more");
    test("extra", "extra");
    test("if is \n is oc", "is");
    test("la", "last");
    return (0);
}*/
