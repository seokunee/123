/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42.kr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:16:08 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/06 13:46:50 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_number(int nb)
{
	char	left;

	if (nb > 9)
		ft_print_number(nb / 10);
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
		ft_print_number(nb);
	}
}
