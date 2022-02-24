/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:53:14 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/05 18:56:49 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size)
	{
		tmp = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = tmp;
		i++;
		size--;
	}
}
