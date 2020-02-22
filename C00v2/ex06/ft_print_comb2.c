/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 01:54:18 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/27 01:54:21 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 10 && nb > -1)
		ft_putchar(nb + 48);
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

void	ft_print_comb2(void)
{
	int count1;
	int count2;

	count1 = 0;
	while (count1 < 99)
	{
		count2 = count1 + 1;
		while (count2 < 100)
		{
			if (count1 < 10)
				ft_putchar('0');
			ft_putnbr(count1);
			ft_putchar(' ');
			if (count2 < 10)
				ft_putchar('0');
			ft_putnbr(count2);
			if (count1 != 98 || count2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			count2++;
		}
		count1++;
	}
}
