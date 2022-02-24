/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:32:53 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/19 12:33:42 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == 0)
		return (0);
	while (min < max)
	{
		arr[i] = min;
		i++;
		min++;
	}
	return (arr);
}
