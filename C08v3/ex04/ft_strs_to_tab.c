/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 19:20:43 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/11 20:46:20 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char				*ft_strdup(char *src)
{
	char	*dest;
	int		len;
	int		count;

	count = 0;
	len = ft_strlen(src) + 1;
	if (!(dest = malloc(sizeof(char) * len)))
		return (0);
	while (count < len)
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str *tab;
	int			count;

	count = 0;
	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (tab = NULL);
	while (count < ac)
	{
		tab[count].size = ft_strlen(av[count]);
		tab[count].str = av[count];
		tab[count].copy = ft_strdup(av[count]);
		count++;
	}
	tab[count].str = 0;
	return (tab);
}
