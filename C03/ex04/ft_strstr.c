/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 18:16:46 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/09 11:44:45 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return (str);
	len = ft_strlen(to_find);
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			while (str[i + j] == to_find[j] && str[i + j] && to_find[j])
				j++;
			if (j == len)
				return (str + i);
			j = 0;
		}
		i++;
	}
	return (0);
}
