/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:41:13 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/31 23:39:26 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] <= 'z' && str[count] >= 'a')
			count++;
		else
			return (0);
	}
	return (1);
}
