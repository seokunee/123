/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 19:26:51 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/16 14:40:34 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_tab(int *tab)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = tab[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

void	put_queens(int *tab, int cur, int *count)
{
	int	i;
	int	j;

	i = 0;
	if (cur == 10)
	{
		print_tab(tab);
		*count = *count + 1;
		return ;
	}
	else
	{
		while (i < 10)
		{
			j = 0;
			while (j < cur && i != tab[j] && abs(tab[j] - i) != cur - j)
				j++;
			if (j >= cur)
			{
				tab[cur] = i;
				put_queens(tab, cur + 1, count);
			}
			i++;
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	tab[10];
	int	cur;
	int	count;

	cur = 0;
	count = 0;
	put_queens(tab, cur, &count);
	return (count);
}
