/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:23:32 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/16 15:24:41 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	unsigned int	num;
	unsigned int	c_nb;
	int				stop;

	stop = 1;
	if (nb <= 1)
		return (2);
	if (nb == 2 || nb == 3)
		return (nb);
	c_nb = (unsigned int)nb;
	while (stop)
	{
		stop = 0;
		num = 2;
		while (num * num <= c_nb)
		{
			if (c_nb % num == 0)
				stop = 1;
			num++;
		}
		if (stop == 0)
			return ((int)c_nb);
		c_nb++;
	}
	return ((int)c_nb);
}
