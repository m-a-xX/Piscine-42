/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:41:24 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/31 23:39:37 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] <= 'Z' && str[count] >= 'A')
			count++;
		else
			return (0);
	}
	return (1);
}
