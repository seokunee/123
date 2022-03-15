/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 13:45:58 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/24 15:46:57 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "doop.h"

int		ft_atoi(char *str);
void	ft_putnbr(int nb);

int	check_error(int y, char **av)
{
	if (y == 0 && av[2][0] == '/')
	{
		write(1, "Stop : division by zero\n", 24);
		return (1);
	}
	if (y == 0 && av[2][0] == '%')
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (1);
	}
	return (0);
}

int	check_oper(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	if (len != 1)
		return (0);
	if (str[0] != '+' || str[0] != '-' || str[0] != '*'\
		|| str[0] != '/' || str[0] != '%')
		return (0);
	return (1);
}

void	do_cul(int (**operator)(int, int), char c, int x, int y)
{
	int	result;

	if (c == '+')
		result = operator[0](x, y);
	else if (c == '-')
		result = operator[1](x, y);
	else if (c == '*')
		result = operator[2](x, y);
	else if (c == '/')
		result = operator[3](x, y);
	else if (c == '%')
		result = operator[4](x, y);
	else
		result = 0;
	ft_putnbr(result);
}

int	main(int ac, char **av)
{
	int	x;
	int	y;
	int	(*operator[5])(int, int);

	operator[0] = &ft_plus;
	operator[1] = &ft_minus;
	operator[2] = &ft_mul;
	operator[3] = &ft_div;
	operator[4] = &ft_rem;
	if (check_oper(av[2]))
		return (0);
	if (ac == 4)
	{
		x = ft_atoi(av[1]);
		y = ft_atoi(av[3]);
		if (check_error(y, av))
			return (0);
		else
			do_cul(operator, av[2][0], x, y);
	}
	return (0);
}
