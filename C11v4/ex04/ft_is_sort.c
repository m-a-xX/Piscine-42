/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 05:17:28 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/18 21:41:10 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int count;

	count = 0;
	if (length == 0 || length == 1)
		return (1);
	while (count < length - 1 && (*f)(tab[count], tab[count + 1]) <= 0)
		count++;
	if (count == length - 1)
		return (1);
	count = 0;
	while (count < length - 1 && (*f)(tab[count], tab[count + 1]) >= 0)
		count++;
	if (count == length - 1)
		return (1);
	return (0);
}
