/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:34:31 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/15 16:01:17 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	int_ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check_isspace(char c)
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (i < 6)
	{
		if (c == "\t\n\v\r\f "[i])
			check = 1;
		i++;
	}
	return (check);
}

int	checkBase(char *base, unsigned int base_len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (int_ft_strlen(base) <= 1)
		return (1);
	while (i < base_len - 1)
	{
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '-' || base[i + 1] == '-')
			return (1);
		if (base[i] == '+' || base[i + 1] == '+')
			return (1);
		if (check_isspace(base[i]) == 1 || check_isspace(base[i + 1]))
			return (1);
		i++;
	}
	return (0);
}

int	find_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	result;
	int	i;
	int	n;

	n = 1;
	i = 0;
	result = 0;
	while (check_isspace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	while (find_base(base, str[i]) != -1)
	{
		result *= int_ft_strlen(base);
		result += find_base(base, str[i]);
		i++;
	}
	return (result * n);
}
