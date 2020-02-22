/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:20:28 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/05 12:49:42 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int count;
	int res;

	count = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (count <= nb)
	{
		res = res * count;
		count++;
	}
	return (res);
}
