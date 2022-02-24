/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 20:16:06 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/21 18:54:39 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_all(int *arr, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = arr[i] + '0';
		write(1, &c, 1);
		i++;
	}
	if (arr[0] != 10 - n)
		write(1, ", ", 2);
}

void	ft_print(int *arr, int n, int index)
{
	int	i;

	if (index == 0)
		i = arr[index] + 1;
	else
		i = arr[index - 1] + 1;
	while (i <= 10 - n + index)
	{
		arr[index] = i;
		if (index == n - 1)
			print_all(arr, n);
		else
			ft_print(arr, n, index + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	index;

	index = 0;
	arr[0] = -1;
	ft_print(arr, n, index);
}
