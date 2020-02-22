/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 16:43:47 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/18 20:35:15 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len_dest(long nbr, int len_to);

int		ft_strlen(char *str);

int		get_number(char *nbr, char *base_from, int len_from)
{
	int		count;

	count = 0;
	while (base_from[count])
	{
		if (nbr[len_from] == base_from[count])
			return (count);
		count++;
	}
	return (-1);
}

int		check(char *b)
{
	int		count;
	int		count2;

	count = 0;
	while (b[count])
	{
		count2 = count + 1;
		while (b[count2])
		{
			if (b[count2] == b[count] || b[count] == '-' || b[count] == '+' ||
				b[count] <= ' ' || b[count] > '~' || b[count2] == '-' ||
				b[count2] == '+' || b[count2] <= ' ' || b[count2] > '~')
				return (0);
			count2++;
		}
		count++;
	}
	if (count < 2)
		return (0);
	return (1);
}

long	atoi_base(char *nbr, char *base_from, int len_from)
{
	int		count;
	int		neg;
	long	res;

	count = 0;
	neg = 1;
	res = 0;
	while (nbr[count] == ' ' || (nbr[count] >= 9 && nbr[count] <= 13))
		count++;
	while (nbr[count] == '+' || nbr[count] == '-')
	{
		if (nbr[count] == '-')
			neg *= -1;
		count++;
	}
	while (get_number(nbr, base_from, count) != -1)
	{
		res = res * len_from + get_number(nbr, base_from, count);
		count++;
	}
	return (res * neg);
}

void	itoa_base(long nbr, char *base_to, char *res, int len_alloc)
{
	int		len;
	int		neg;

	if (nbr < 0)
	{
		neg = 1;
		nbr *= -1;
		res[0] = '-';
	}
	else
		neg = 0;
	len = ft_strlen(base_to);
	while (len_alloc > neg)
	{
		res[len_alloc - 1] = base_to[nbr % len];
		nbr /= len;
		len_alloc--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*res;
	int		len_from;
	int		len_to;
	int		len_alloc;
	long	value;

	len_from = ft_strlen(base_from);
	len_to = ft_strlen(base_to);
	if (check(base_from) == 0 || check(base_to) == 0)
		return (NULL);
	value = atoi_base(nbr, base_from, len_from);
	len_alloc = len_dest(value, len_to);
	if (!(res = malloc(sizeof(char) * (len_alloc + 1))))
		return (NULL);
	itoa_base(value, base_to, res, len_alloc);
	res[len_alloc] = '\0';
	return (res);
}
