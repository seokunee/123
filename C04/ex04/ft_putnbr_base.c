/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:15:51 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/17 14:25:28 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	check_double_plus_minus(char *base, unsigned int base_len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (i < base_len)
	{
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '-')
			return (1);
		if (base[i] == '+')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putbase(unsigned int nb, unsigned int base_len, char *base)
{
	if (nb > base_len - 1)
		ft_putbase(nb / base_len, base_len, base);
	write(1, &base[nb % base_len], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (base_len < 2)
		return ;
	if (check_double_plus_minus(base, base_len))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putbase(-nbr, base_len, base);
	}
	else
		ft_putbase(nbr, base_len, base);
}
