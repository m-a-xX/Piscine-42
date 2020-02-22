/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 12:44:26 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/07 02:40:53 by mavileo          ###   ########.fr       */
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

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] < s2[count])
			return (-1);
		else if (s1[count] > s2[count])
			return (1);
		count++;
	}
	return (0);
}

int		main(int ac, char **av)
{
	int		count;
	char	*tmp;

	count = 1;
	while (count < ac - 1)
	{
		if (ft_strcmp(av[count], av[count + 1]) == 1)
		{
			tmp = av[count];
			av[count] = av[count + 1];
			av[count + 1] = tmp;
			count = 1;
		}
		else if (ft_strcmp(av[count], av[count + 1]) != 1)
			count++;
	}
	count = 1;
	while (count < ac)
	{
		ft_putstr(av[count]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}
