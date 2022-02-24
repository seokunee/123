/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:19:41 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/01 20:49:13 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print(char a, char b, char c)
{
	if (c == '7' && b == '8' && a == '9')
	{
		write(1, "789", 3);
	}
	else if (c < b && b < a)
	{
		write(1, &c, 1);
		write(1, &b, 1);
		write(1, &a, 1);
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	c = '0';
	while (c <= '7')
	{
		b = c + 1;
		while (b <= '8')
		{
			a = b + 1;
			while (a <= '9')
			{
				ft_print(a, b, c);
				a++;
			}
			b++;
		}
		c++;
	}
}
