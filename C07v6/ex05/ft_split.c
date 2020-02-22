/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 01:41:19 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/12 11:48:17 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		check_seps(char c, char *charset, char *str, int count)
{
	int count2;

	count2 = 0;
	if (count == -1)
	{
		while (charset[count2])
		{
			if (c == charset[count2])
				return (1);
			count2++;
		}
		return (0);
	}
	else
	{
		while (check_seps(str[count], charset, "  ", -1))
			count++;
		return (count);
	}
}

int		count_words(char *str, char *charset)
{
	int count;
	int count_words;

	count = 0;
	count_words = 0;
	while (str[count])
	{
		while (!check_seps(str[count], charset, "  ", -1))
			count++;
		count_words++;
		while (check_seps(str[count], charset, "  ", -1))
			count++;
	}
	count = 0;
	return (count_words);
}

int		len(char *str, char *charset)
{
	int count;

	count = 0;
	if (charset[0] == 0)
	{
		while (str[count])
			count++;
		return (count);
	}
	else
	{
		while (!check_seps(str[count], charset, "  ", -1))
			count++;
		return (count);
	}
}

char	**no_sep(char *str)
{
	char	**res;
	int		count;

	count = 0;
	if (!(res = malloc(sizeof(char *) * 2)))
		return (0);
	if (!(res[0] = malloc(sizeof(char) * (len(str, "\0") + 1))))
		return (0);
	while (str[count])
	{
		res[0][count] = str[count];
		count++;
	}
	res[0][count] = '\0';
	res[1] = 0;
	return (res);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		count;
	int		count2;
	int		c_w;

	count = 0;
	c_w = 0;
	if (len(charset, "\0") < 1)
		return (no_sep(str));
	res = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	while (str[count])
	{
		count2 = 0;
		if (!check_seps(str[count], charset, "  ", -1))
		{
			res[c_w] = malloc(sizeof(char) * (len(str + count, charset) + 1));
			while (!check_seps(str[count], charset, "  ", -1))
				res[c_w][count2++] = str[count++];
			res[c_w][count2] = '\0';
			c_w++;
		}
		count = check_seps(str[count], charset, str, count);
	}
	res[c_w] = 0;
	return (res);
}
