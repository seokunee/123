/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:01:42 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/15 16:46:34 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	checkBase(char *base, unsigned int base_len);

unsigned int	un_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_base_to_len(int nbr, char *base)
{
	unsigned int	num;
	unsigned int	base_len;
	int				len;

	len = 0;
	base_len = un_strlen(base);
	if (nbr < 0)
	{
		len++;
		num = (unsigned int)(-nbr);
	}
	else
		num = (unsigned int)nbr;
	while (num > base_len - 1)
	{
		num /= base_len;
		len++;
	}
	return (len + 1);
}

void	put_nbr_to_arr(char *str, unsigned int num, char *base)
{
	unsigned int	base_len;

	base_len = un_strlen(base);
	if (num >= base_len)
		put_nbr_to_arr(str - 1, num / base_len, base);
	str[0] = base[num % base_len];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_to_len;
	int		num;
	char	*str;

	if (checkBase(base_from, un_strlen(base_from)) || un_strlen(base_from) < 2)
		return (0);
	if (checkBase(base_to, un_strlen(base_to)) || un_strlen(base_to) < 2)
		return (0);
	num = ft_atoi_base(nbr, base_from);
	base_to_len = ft_base_to_len(num, base_to);
	str = (char *)malloc(sizeof(char) * (base_to_len + 1));
	if (str == NULL)
		return (NULL);
	if (num < 0)
	{
		str[0] = '-';
		put_nbr_to_arr(str + base_to_len - 1, -num, base_to);
	}
	else
		put_nbr_to_arr(str + base_to_len - 1, num, base_to);
	str[base_to_len] = '\0';
	return (str);
}
