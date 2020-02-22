/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:42:37 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/01 13:59:44 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_int_min(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putchar('1');
	ft_putchar('4');
	ft_putchar('7');
	ft_putchar('4');
	ft_putchar('8');
	ft_putchar('3');
	ft_putchar('6');
	ft_putchar('4');
	ft_putchar('8');
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		print_int_min();
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

void	convert_print(int *rem, int res, int count_rem)
{
	int *a;
	int *b;
	int *c;

	a = rem;
	b = &res;
	c = &count_rem;
	while (res)
	{
		rem[count_rem] = res % 16;
		res = res / 16;
		count_rem++;
	}
	ft_putchar('\\');
	while (count_rem >= 0)
	{
		if (rem[count_rem] < 10)
			ft_putnbr(rem[count_rem]);
		else if (rem[count_rem] > 9 && rem[count_rem] < 17)
			ft_putchar(rem[count_rem] + 87);
		count_rem--;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int count;
	int count_rem;
	int res;
	int rem[50];

	count = 0;
	count_rem = 0;
	while (str[count])
	{
		if (str[count] < 32 || str[count] == 127)
		{
			res = str[count];
			convert_print(rem, res, count_rem);
		}
		else
			ft_putchar(str[count]);
		count++;
	}
}
