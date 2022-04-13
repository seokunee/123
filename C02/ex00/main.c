/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seokchoi <seokchoi@42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 20:44:15 by seokchoi          #+#    #+#             */
/*   Updated: 2022/02/05 20:47:38 by seokchoi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char *ft_strcpy(char *dest, char *src);

int	main(void)
{
	char src[6] = "hello";
	char dest[6];

	ft_strcpy(dest, src);
	printf("%s", dest);
	return (0);
}
