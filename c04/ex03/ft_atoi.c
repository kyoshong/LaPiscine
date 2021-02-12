/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 05:28:53 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/02 13:04:16 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		space_check(char b)
{
	if (b == ' ' || b == '\n' || b == '\r' || b == '\t' || b == '\f')
		return (1);
	else if (b == '\v')
		return (1);
	return (0);
}

int		not_a_num(char n, int check, int i)
{
	if (n < '0' || n > '9' || n == 0)
	{
		if (check % 2 != 0)
			i = -i;
		return (i);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int check;

	check = 0;
	i = 0;
	while (space_check(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			check++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = (i * 10) + (*str - '0');
		str++;
		if ((not_a_num(*str, check, i)) != 0)
		{
			i = not_a_num(*str, check, i);
			return (i);
		}
	}
	return (i);
}
