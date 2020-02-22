/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 16:42:32 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/09 04:46:32 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int count;
	int *tab;

	count = 0;
	if (min >= max)
	{
		tab = NULL;
		return (0);
	}
	if (!(tab = malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		tab[count] = min;
		min++;
		count++;
	}
	return (tab);
}
