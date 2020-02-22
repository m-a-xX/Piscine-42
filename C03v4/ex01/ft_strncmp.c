/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:34:32 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/02 03:07:08 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int count;

	count = 0;
	while ((s1[count] || s2[count]) && count < n)
	{
		if (s1[count] < s2[count])
			return (-1);
		else if (s1[count] > s2[count])
			return (1);
		count++;
	}
	return (0);
}
