/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 20:28:10 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/18 20:35:18 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			len_dest(long nbr, int len_to)
{
	int		count;
	long	nb;

	nb = nbr;
	count = 0;
	if (nb < 0)
		nb *= -1;
	while (nb >= len_to)
	{
		count++;
		nb /= len_to;
	}
	count++;
	if (nbr < 0)
		count++;
	return (count);
}

int			ft_strlen(char *str)
{
	int		count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
