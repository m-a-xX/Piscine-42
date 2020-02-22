/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:34:56 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/02 03:50:05 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strcat(char *dest, char *src)
{
	int len;
	int count;

	count = 0;
	len = ft_strlen(dest);
	while (src[count])
	{
		dest[len] = src[count];
		count++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
