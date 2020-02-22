/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:41:55 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/28 08:41:57 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] <= 'Z' && str[count] >= 'A')
		{
			str[count] = str[count] + 32;
			count++;
		}
		else
			count++;
	}
	return (str);
}
