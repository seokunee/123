/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:54:56 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/17 11:19:34 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	unsigned int	num;
	unsigned int	c_nb;

	num = 2;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb == 2 || nb == 3)
		return (0);
	c_nb = (unsigned int)nb;
	while (num * num <= c_nb)
	{
		if (num * num == c_nb)
			return ((int)num);
		num++;
	}
	return (0);
}
