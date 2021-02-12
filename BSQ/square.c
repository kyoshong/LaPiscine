/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   square.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 07:19:22 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/05 07:19:25 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_h.h"

void	change_map(void)
{
	int		i;
	int		j;

	i = 1;
	while (c_map[i][0] != '\0')
	{
		j = 0;
		while (c_map[1][j] != '\0')
		{
			if (c_map[i][j] == m_o)
				i_map[i - 1][j] = 0;
			else if (c_map[i][j] == m_dot)
				i_map[i - 1][j] = 1;
			j++;
		}
		i++;
	}
	check_map(i - 1, j - 1);
}

void	check_map(int col_l, int row_l)
{
	int i;
	int j;
	int p;
	int k;

	p = 0;
	k = 0;
	i = -1;
	while (i++ < col_l)
	{
		j = -1;
		while (j++ < row_l)
		{
			if (i_map[i][j] == 1 && i != 0 && j != 0)
				i_map[i][j] = min(i_map[i - 1][j - 1], i_map[i - 1][j], i_map[i][j - 1]) + 1;
			if (i_map[i][j] > i_map[p][k])
			{
				p = i;
				k = j;
			}
		}
	}
	print_square(p, k, col_l, row_l);
}

void	print_square(int p, int k, int col_l, int row_l)
{
	int i;
	int j;
	int n;

	n = i_map[p][k];
	i = 1;
	while (i < col_l + 1)
	{
		j = 0;
		while (j < row_l)
		{
			if ((i >= p - n + 2 && i <= p + 1) && (j >= k - n + 1 && j <= k))
				c_map[i][j] = m_x;
			ft_putchar(c_map[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
