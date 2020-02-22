/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 16:43:23 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/10 23:23:30 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		sl(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		dl(char **strs, int size)
{
	int count;
	int len;

	len = 0;
	count = 0;
	while (count < size)
	{
		len = len + sl(strs[count]);
		count++;
	}
	return (len);
}

char	*double_strcat(int size, char **strs, char *sep, char *dest)
{
	int count;
	int count2;
	int s;

	count = 0;
	count2 = 0;
	s = 0;
	while (s < size)
	{
		count = 0;
		while (strs[s][count])
			dest[count2++] = strs[s][count++];
		count = 0;
		if (s < size - 1)
		{
			while (sep[count])
				dest[count2++] = sep[count++];
		}
		s++;
	}
	dest[count2] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		count;
	int		s;

	s = 0;
	count = 0;
	if (size <= 0)
	{
		dest = malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	dest = malloc(sizeof(char) * ((dl(strs, size) + sl(sep) * (size - 1) + 1)));
	if (dest == NULL)
		return (0);
	dest = double_strcat(size, strs, sep, dest);
	return (dest);
}
