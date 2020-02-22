/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:38:42 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/18 00:39:51 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	len_dest;
	unsigned int	len_src;

	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	if (size < 1)
		return (len_src);
	if (size < len_dest)
		return (len_src + size);
	count = 0;
	while (src[count] != '\0' && count + len_dest < size - 1)
	{
		dest[len_dest + count] = src[count];
		count++;
	}
	dest[len_dest + count] = '\0';
	return (len_dest + len_src);
}
