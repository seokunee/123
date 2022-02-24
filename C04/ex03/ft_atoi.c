/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:55:00 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/08 20:56:06 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_atoi(char *str)
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
	while (str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result * n);
}
