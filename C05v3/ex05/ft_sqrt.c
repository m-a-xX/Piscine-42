/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 10:21:25 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/05 14:10:14 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int count;

	count = 1;
	if (count <= 0)
		return (0);
	while (count < nb / count)
		count++;
	if (count * count == nb)
		return (count);
	else
		return (0);
}
