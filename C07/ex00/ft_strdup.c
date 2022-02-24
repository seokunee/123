/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:16:38 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/19 12:33:24 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *src)
{
	int	len;

	len = 0;
	while (src[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*s;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(src);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
