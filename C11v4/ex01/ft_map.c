/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 21:19:04 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/18 00:10:53 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *res;
	int count;

	count = 0;
	if (!(res = malloc(sizeof(int) * (length - 1))))
		return (0);
	while (count < length)
	{
		res[count] = f(tab[count]);
		count++;
	}
	return (res);
}
