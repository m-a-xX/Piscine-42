/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 01:48:06 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/01 18:26:44 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	space(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	char count1;
	char count2;
	char count3;

	count1 = '0';
	while (count1 < '8')
	{
		count2 = count1 + 1;
		while (count2 < '9')
		{
			count3 = count2 + 1;
			while (count3 <= '9')
			{
				ft_putchar(count1);
				ft_putchar(count2);
				ft_putchar(count3);
				if (count1 != '7' || count2 != '8' || count3 != '9')
					space();
				count3++;
			}
			count2++;
		}
		count1++;
	}
}
