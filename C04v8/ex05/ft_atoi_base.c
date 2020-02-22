/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mavileo <mavileo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 18:29:50 by mavileo           #+#    #+#             */
/*   Updated: 2019/09/14 07:38:24 by mavileo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_base(char *base)
{
	int count;
	int count2;

	count = 0;
	while (base[count])
	{
		count2 = count + 1;
		if (base[count] == '+' || base[count] == '-' || base[count] <= 32
			|| base[count] > 126)
			return (1);
		while (base[count2])
		{
			if (base[count] == base[count2])
				return (1);
			count2++;
		}
		count++;
	}
	if (count < 2)
		return (1);
	return (count);
}

int		pass_whites(char *nbr)
{
	int count;

	count = 0;
	while (nbr[count] == ' ' || nbr[count] == '\v' || nbr[count] == '\f' ||
			nbr[count] == '\t' || nbr[count] == '\n' || nbr[count] == '\r')
		count++;
	return (count);
}

int		change(char *str, char *base, int count)
{
	unsigned int	len;
	int				count2;
	int				res;

	res = 0;
	len = check_base(base);
	while (str[count])
	{
		count2 = 0;
		while (base[count2])
		{
			if (str[count] == base[count2])
			{
				res = res * len + count2;
				break ;
			}
			count2++;
		}
		if (base[count2] == '\0')
			break ;
		count++;
	}
	return (res);
}

int		ft_atoi_base(char *str, char *base)
{
	int				res;
	int				neg;
	unsigned int	count;
	unsigned int	len;

	len = check_base(base);
	count = pass_whites(str);
	neg = 0;
	res = 0;
	if (len > 1)
	{
		while (str[count] == '+' || str[count] == '-')
		{
			if (str[count] == '-')
				neg++;
			count++;
		}
		res = change(str, base, count);
	}
	if (neg % 2 == 1)
		res *= -1;
	return (res);
}
