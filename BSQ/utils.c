/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 07:18:46 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/05 07:18:49 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_h.h"

int		check_row_l(void)
{
	int i;
	int j;
	int cnt;

	cnt = 0;
	i = 1;
	while (c_map[i][0])
	{
		j = 0;
		while (c_map[i][j])
		{
			j++;
			cnt++;
		}
		if (cnt / i != j)
			return (0);
		i++;
	}
	return(1);
}

int		space_check(char b)
{
	if (b == ' ' || b == '\n' || b == '\r' || b == '\t' || b == '\f')
		return (1);
	else if (b == '\v')
		return (1);
	return (0);
}
int		not_a_num(char n)
{
	if (n < '0' || n > '9')
	{
		return (1);
	}
	return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int j;
	 
	j = 0;
	i = 0;
	while (str[j])
	{
		if (space_check(str[j]) || not_a_num(str[j++]))
			return (0);
		i = (i * 10) + (str[j] - '0');
		j++;
	}
	return (i);
}
