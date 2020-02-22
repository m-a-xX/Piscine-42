/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:35:20 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/02 03:14:07 by mavileo          ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	count;

	count = 0;
	len = ft_strlen(dest);
	while (src[count] && count < nb)
	{
		dest[len] = src[count];
		count++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
