/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:21:39 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/05 10:55:42 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int count;
	int divs;

	count = 1;
	divs = 0;
	while (count < nb)
	{
		if (nb % count == 0)
			divs++;
		count++;
	}
	if (divs == 1)
		return (1);
	else
		return (0);
}
