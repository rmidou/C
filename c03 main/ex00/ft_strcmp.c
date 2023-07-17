/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 15:43:37 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/15 16:18:06 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ls1;

	i = 0;
	ls1 = 0;
	while (s1[i] != '\0')
		i++;
	ls1 = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	return (ls1 - i);
}
/*
int		main(void)
{
	char	*str1;
	char	*str2;

	str1 = "adwwafwDWQfww";
	str2 = "adwwafwDWQfw";
	printf("%d\n", ft_strcmp(str1, str2));
	printf("%d\n", strcmp(str1, str2));
}


*/