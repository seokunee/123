/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:19:31 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/19 14:27:50 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*bf;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	bf = malloc(sizeof(int) * (max - min));
	if (bf == NULL)
		return (-1);
	*range = bf;
	while (min < max)
	{
		bf[i] = min;
		i++;
		min++;
	}
	return (i);
}
