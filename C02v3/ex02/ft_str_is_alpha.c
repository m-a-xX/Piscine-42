/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:40:52 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/31 23:38:48 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if ((str[count] <= 'z' && str[count] >= 'a') ||
			(str[count] <= 'Z' && str[count] >= 'A'))
			count++;
		else
			return (0);
	}
	return (1);
}
