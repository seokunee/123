/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:34:27 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/02 14:14:52 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(int a, int x)
{
	int	b;
	int	c;
	int	y;
	int	z;

	b = '0' + a / 10;
	c = '0' + a % 10;
	y = '0' + x / 10;
	z = '0' + x % 10;
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, " ", 1);
	write(1, &y, 1);
	write(1, &z, 1);
	if (a != 98 || x != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	x;
	int	stop;

	a = 0;
	x = 1;
	stop = 1;
	while (stop)
	{
		if (a < x)
			ft_print(a, x);
		x++;
		if (x > 99)
		{
			a++;
			x = a + 1;
		}
		if (a == 98 && x == 99)
		{
			ft_print(a, x);
			stop = 0;
		}
	}
}
