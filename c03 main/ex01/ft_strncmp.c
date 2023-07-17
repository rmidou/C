/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:20:53 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/15 16:25:34 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	int	ls1;

	i = 0;
	ls1 = 0;
	while (s1[i] != '\0' && i <= n)
		i++;
	ls1 = i;
	i = 0;
	while (s2[i] != '\0' && i <= n)
		i++;
	return (ls1 - i);
}

/*
int		main(void)
{
	char	*s1, *s2;

	s1 = "ceciestuntest";
	s2 = "aeciest";
	printf("%d\n", ft_strncmp(s1, s2, 1));
	printf("%d\n", ft_strncmp(s1, s2, 0));
	printf("%d\n", strncmp(s1, s2, 1));
	printf("%d\n", strncmp(s1, s2, 0));
}
*/