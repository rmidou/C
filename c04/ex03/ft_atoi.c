/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:39:04 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/16 19:06:56 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	test(int *i, int *moins, int *total, char *str)
{
	int	booleen;

	booleen = 1;
	if (str[*i] == 45)
		*moins++;
	while ((str[*i] >= '0') && (str[*i] <= '9'))
	{
		*total *= 10;
		*total += str[*i] - 48;
		booleen = 0;
		(*i)++;
	}
	return (booleen);
}

int	ft_atoi(char *str)
{
	int	i;
	int	moins;
	int	total;
	int	booleen;

	booleen = 1;
	i = 0;
	moins = 0;
	total = 0;
	while (booleen && str[i] != '\0')
	{
		booleen = test(&i, &moins, &total, str);
		i++;
	}
	if ((moins % 2) == 1)
		total *= -1;
	return (total);
}
/*
int	main(void)
{
	printf("%d",ft_atoi("   -------fgdjg++71514  566hkrbg"));
}
*/
