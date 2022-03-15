/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 12:30:06 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/21 17:10:15 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	front;
	int	back;

	front = 0;
	back = 0;
	i = 0;
	if (length == 1 || length == 0)
		return (1);
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			back++;
		else if ((*f)(tab[i], tab[i + 1]) < 0)
			front++;
		else
		{
			back++;
			front++;
		}
		i++;
	}
	if (front == length - 1 || back == length - 1)
		return (1);
	return (0);
}
