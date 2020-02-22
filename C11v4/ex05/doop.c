/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 05:27:07 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/18 04:51:05 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "doop.h"

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
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
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

int		calcul(int ac, char **av)
{
	int (*f_tab[5])(int a, int b);

	(void)ac;
	f_tab[0] = add;
	f_tab[1] = sub;
	f_tab[2] = mult;
	f_tab[3] = div;
	f_tab[4] = mod;
	if (av[2][0] == '+')
		return (f_tab[0](ft_atoi(av[1]), ft_atoi(av[3])));
	else if (av[2][0] == '-')
		return (f_tab[1](ft_atoi(av[1]), ft_atoi(av[3])));
	else if (av[2][0] == '*')
		return (f_tab[2](ft_atoi(av[1]), ft_atoi(av[3])));
	else if (av[2][0] == '/')
		return (f_tab[3](ft_atoi(av[1]), ft_atoi(av[3])));
	else if (av[2][0] == '%')
		return (f_tab[4](ft_atoi(av[1]), ft_atoi(av[3])));
	else
		return (0);
}

int		main(int ac, char **av)
{
	(void)ac;
	if (ac != 4)
		return (0);
	if (ft_atoi(av[3]) == 0 && av[2][0] == '/')
	{
		ft_putstr("Stop : division by zero\n");
		return (0);
	}
	else if (ft_atoi(av[3]) == 0 && av[2][0] == '%')
	{
		ft_putstr("Stop : modulo by zero\n");
		return (0);
	}
	else
	{
		ft_putnbr(calcul(ac, av));
		ft_putchar('\n');
	}
	return (0);
}
