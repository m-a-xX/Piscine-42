/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 20:36:47 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/27 20:36:48 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int count;
	int tmp;

	count = 0;
	if (size < 1)
		return ;
	while (count < size - 1)
	{
		if (tab[count] > tab[count + 1])
		{
			tmp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = tmp;
			count--;
		}
		else
			count++;
	}
}
