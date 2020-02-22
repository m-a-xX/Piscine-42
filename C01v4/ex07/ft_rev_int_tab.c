/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 20:36:32 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/27 20:36:33 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int count;
	int mid;
	int tmp;

	count = 0;
	mid = size / 2;
	size--;
	while (count < mid)
	{
		tmp = tab[count];
		tab[count] = tab[size];
		tab[size] = tmp;
		count++;
		size--;
	}
}
