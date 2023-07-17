/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 17:40:03 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/15 17:57:23 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	while (str[i] != '\0')
	{
		if (to_find[i] == '\0')
			return (to_find[i - i2]);
		if (str[i] == tofind[i2])
			i2++;
		else
			i2 = 0;
		i++;
	}
	return (NULL);
}
