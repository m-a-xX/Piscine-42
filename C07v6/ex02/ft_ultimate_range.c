/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 16:43:03 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/12 10:05:02 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int count;
	int *tab;

	count = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	else
	{
		if (!(tab = (int*)malloc(sizeof(*tab) * (max - min))))
			return (-1);
		while (min < max)
		{
			tab[count] = min;
			count++;
			min++;
		}
		*range = tab;
		return (count);
	}
}
