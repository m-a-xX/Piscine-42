/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 15:38:00 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/02 14:30:47 by mavileo          ###   ########.fr       */
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

int		is_find(int count, char *str, char *to_find)
{
	int count2;

	count2 = 0;
	while (str[count] && str[count] == to_find[count2])
	{
		count = count + 1;
		count2++;
	}
	if (count2 == ft_strlen(to_find))
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int count;
	int index;

	count = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[count])
	{
		if (str[count] == to_find[0])
		{
			index = count;
			if (is_find(count, str, to_find))
				return (str + index);
		}
		count++;
	}
	return (0);
}
