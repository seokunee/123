/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:30:17 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/16 15:22:53 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	unsigned int	num;
	unsigned int	c_nb;

	num = 2;
	c_nb = (unsigned int)nb;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (num * num <= c_nb)
	{
		if (c_nb % num == 0)
			return (0);
		num++;
	}
	return (1);
}
