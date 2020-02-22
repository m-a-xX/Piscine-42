/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:41:03 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/31 23:45:54 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_numeric(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] <= '9' && str[count] >= '0')
			count++;
		else
			return (0);
	}
	return (1);
}
