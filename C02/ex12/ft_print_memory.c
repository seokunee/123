/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:53:36 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/13 16:04:34 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_puthex(unsigned int nb)
{
	ft_putchar("0123456789abcdef"[nb / 16]);
	ft_putchar("0123456789abcdef"[nb % 16]);
}

void	ft_puthex_char(unsigned char *str, unsigned int add)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		ft_puthex(str[i + add]);
		if (i % 2 == 1)
			ft_putchar(' ');
		if (str[i + add] == '\0')
		{
			i++;
			break ;
		}
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 == 1)
			write(1, " ", 1);
		i++;
	}
}

void	ft_putstr(unsigned char *str, unsigned int add, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < 16 && i < size)
	{
		if (str[i + add] < 32 || str[i + add] > 126)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, &str[i + add], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				j;

	i = 0;
	if (size == 0)
		return (0);
	while (i < size)
	{
		j = 7;
		while (j >= 0)
		{
			ft_puthex((unsigned long long)(addr + i) >> j * 8 & 0xff);
			j--;
		}
		write(1, ": ", 2);
		ft_puthex_char((unsigned char *)addr, i);
		ft_putstr((unsigned char *)addr, i);
		i += 16;
		size -= 16;
	}
	return (addr);
}
