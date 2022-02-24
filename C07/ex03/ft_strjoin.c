/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:34:04 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/15 15:33:50 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	total_strs_len(char **strs, int size)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (i < size)
	{
		count += ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

void	write_str(char *s, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	k = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			s[k] = strs[i][j];
			k++;
			j++;
		}	
		j = 0;
		while (sep[j] && i != size - 1)
		{
			s[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	s[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	char	*s;

	len = ft_strlen(sep) * (size - 1) + total_strs_len(strs, size);
	if (size == 0)
	{
		s = malloc(1);
		return (s);
	}
	s = (char *)malloc(sizeof(char) * len + 1);
	if (s == 0)
		return (0);
	write_str(s, strs, sep, size);
	return (s);
}
