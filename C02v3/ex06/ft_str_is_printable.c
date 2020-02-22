/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:41:34 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/31 23:39:44 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	int count;
	int res;

	count = 0;
	res = 1;
	while (str[count])
	{
		if (str[count] < 127 && str[count] >= 32)
			count++;
		else
			return (0);
	}
	return (1);
}
