/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:49:07 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/15 17:01:56 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	ft_strcat(char *dest, char *src, unsigned int nb)
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i2] != '\0' && i2 <= nb)
	{
		dest[i] = src[i2];
		i2++;
		i++;
	}
	if i2 != nb
		dest[i] = '\0';
	return (*dest);
}

/*
int		main(void)
{
	char				dest[50] = "bonjour";
	char				*src;
	unsigned int		size;

	size = 5;
	src = " les amis";
	printf(".%s.\n", strncat(dest, src, size));
}
*/