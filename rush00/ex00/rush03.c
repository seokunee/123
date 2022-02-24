/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihulee <jihulee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:00:13 by jihulee           #+#    #+#             */
/*   Updated: 2022/02/05 18:27:16 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	print_top_bottom(int width)
{
	int		i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
			ft_putchar('A');
		else if (i == width - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		i++;
	}
	ft_putchar('\n');
}

void	print_body(int width)
{
	int		i;

	i = 0;
	while (i < width)
	{
		if (i == 0 || i == width - 1)
			ft_putchar('B');
		else
			ft_putchar(' ');
		i++;
	}
	ft_putchar('\n');
}

void	rush(int width, int height)
{
	int		i;

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
