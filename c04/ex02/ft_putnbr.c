/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbiron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:42:10 by nbiron            #+#    #+#             */
/*   Updated: 2023/07/13 13:08:30 by nbiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_display(int nb)
{
	int	remain;
	int	tab[45];
	int	counter;

	remain = nb;
	counter = 0;
	while (remain >= 10)
	{
		tab[counter] = ((remain % 10) + 48);
		remain = remain / 10;
		counter++;
	}
	if (remain > 0)
		ft_putchar (48 + remain);
	else if (remain == 0)
		ft_putchar(48);
	while ((counter) >= 0)
	{
		ft_putchar(tab[counter - 1]);
		counter--;
	}
}

void	ft_nbnegative(int nb)
{
	ft_putchar(45);
	if (nb == -2147483648)
	{
		ft_display(214748364);
		ft_putchar(8 + 48);
	}
	else
		ft_display(nb * (-1));
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
		ft_nbnegative(nb);
	else
		ft_display(nb);
}
