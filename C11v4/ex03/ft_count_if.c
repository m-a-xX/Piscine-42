/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 23:47:15 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/18 00:11:19 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int length, int (*f)(char*))
{
	int count;
	int res;

	count = 0;
	res = 0;
	while (count < length)
	{
		if (f(tab[count]))
			res++;
		count++;
	}
	return (res);
}
