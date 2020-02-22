/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 23:39:45 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/18 00:14:07 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while (s1[count] || s2[count])
	{
		if (s1[count] < s2[count])
			return (-1);
		else if (s1[count] > s2[count])
			return (1);
		count++;
	}
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int		count;
	int		size;
	char	*tmp;

	count = 0;
	size = 0;
	while (tab[size])
		size++;
	while (count < size - 1)
	{
		if (ft_strcmp(tab[count], tab[count + 1]) == 1)
		{
			tmp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = tmp;
			count = 0;
		}
		else if (ft_strcmp(tab[count], tab[count + 1]) != 1)
			count++;
	}
}
