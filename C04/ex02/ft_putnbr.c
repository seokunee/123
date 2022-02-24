/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:40:20 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/08 16:54:39 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_nbr(int nb)
{
	int	left;

	if (nb > 9)
		print_nbr(nb / 10);
	left = '0' + nb % 10;
	write(1, &left, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{	
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		print_nbr(nb);
	}
}
