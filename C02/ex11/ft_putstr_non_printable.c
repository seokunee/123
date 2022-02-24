/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ffff.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 12:49:05 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/12 19:21:20 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hex(int num)
{
	char	*hexx;

	hexx = "0123456789abcdef";
	write(1, &hexx[num / 16], 1);
	write(1, &hexx[num % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			write(1, "\\", 1);
			hex((unsigned char)str[i]);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
