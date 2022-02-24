/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 15:47:13 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/08 14:41:48 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	print_top_bottom(int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0 || i == width - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		i++;
	}
	ft_putchar('\n');
}

void	print_body(int width)
{
	int	i;

	i = 0;
	while (i < width)
	{
		if (i == 0 || i == width - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int	i;

	i = 0;
	if (width > 0 && height > 0)
	{
		while (i < height)
		{
			if (i == 0 || i == height - 1)
				print_top_bottom(width);
			else
				print_body(width);
			i++;
		}
	}
}


void	ft_putchar(char c);
