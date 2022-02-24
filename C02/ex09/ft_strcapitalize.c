/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:33:43 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/07 13:39:16 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int	check_char(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= '0' && c <= '9')
		return (2);
	if (c >= 'A' && c <= 'Z')
		return (3);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (check_char(str[0]) == 1)
		str[0] -= 32;
	if (str[0] == '\0')
		return (str);
	while (str[i])
	{
		if (check_char(str[i - 1]) == 0 && check_char(str[i]) == 1)
			str[i] -= 32;
		i++;
	}
	return (str);
}
