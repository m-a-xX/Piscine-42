/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:21:49 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/05 14:22:08 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_prime(int nb)
{
	int count;

	count = 2;
	if (nb <= 1)
		return (0);
	while (count <= nb / count)
	{
		if (nb % count == 0)
			return (0);
		count++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (1)
	{
		if (is_prime(nb))
			return (nb);
		else
			nb++;
	}
}
