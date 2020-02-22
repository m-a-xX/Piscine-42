/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 01:17:42 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/11 20:44:13 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
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
}

void	ft_show_tab(struct s_stock_str *par)
{
	int count;
	int len;

	count = 0;
	len = 0;
	while (par[len].str)
		len++;
	while (count < len)
	{
		ft_putstr(par[count].str);
		ft_putchar('\n');
		ft_putnbr(par[count].size);
		ft_putchar('\n');
		ft_putstr(par[count].copy);
		ft_putchar('\n');
		count++;
	}
}
