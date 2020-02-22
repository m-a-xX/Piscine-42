/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:44:15 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/30 12:44:17 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int		main(int ac, char **av)
{
	int count;

	count = 1;
	(void)ac;
	while (av[count])
		count++;
	count--;
	while (count > 0)
	{
		ft_putstr(av[count]);
		ft_putchar('\n');
		count--;
	}
	return (0);
}
