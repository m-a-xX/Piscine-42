/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:42:09 by mavileo           #+#    #+#             */
/*   Updated: 2019/08/31 23:42:52 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_char_is_low(char c)
{
	if (c <= 'z' && c >= 'a')
		return (1);
	else
		return (0);
}

int		ft_char_is_alphanum(char c)
{
	if ((c <= 'z' && c >= 'a') ||
		(c <= 'Z' && c >= 'A') ||
		(c <= '9' && c >= '0'))
		return (1);
	else
		return (0);
}

int		ft_char_is_up(char c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int count;
	int white;

	count = 0;
	white = 1;
	while (str[count])
	{
		if (ft_char_is_up(str[count]))
			str[count] = str[count] + 32;
		count++;
	}
	count = 0;
	while (str[count])
	{
		if (white == 1 && ft_char_is_low(str[count]))
			str[count] = str[count] - 32;
		white = 0;
		if (!ft_char_is_alphanum(str[count]))
			white = 1;
		count++;
	}
	return (str);
}
