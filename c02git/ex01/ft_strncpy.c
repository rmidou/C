/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 11:42:07 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/17 14:27:15 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int		main()
{
	int i;
	char dest[] = "Epic fail !!!!!";
	char src[] = "Success";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 15), dest);
	i = 9;
	while (i < 15)
	{
		if (dest[i] != '\0')
		{
			printf("FAIL! Remainder of dst must be filled with `\\0' characters, got %c (\\%x) at pos %d\n", dest[i], dest[i], i);
			return (1);
		}
		i++;
	}
	return (0);
}
*/
