/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:41:44 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/31 23:41:53 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] <= 'z' && str[count] >= 'a')
			str[count] = str[count] - 32;
		count++;
	}
	return (str);
}
