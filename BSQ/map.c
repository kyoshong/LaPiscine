/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 07:18:33 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/05 07:18:37 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_h.h"

int		read_map(int fd, int z)
{
	int i;
	int j;

	i = 0;
	j = 0;
	contents = (char *)malloc(1024 + 1);
	if (read(fd, &contents, 1024))
	{
		while(contents[z] != 0)
		{
			if (contents[z++] == '\n')
			{
				i++;
				j = 0;
			}
			else
				c_map[i][j++] = contents[z];
		}
		if (check_first_line(c_map[0]))
		{
			change_map();
			return (1);
		}
	}
	return (0);
}

int		check_first_line(char *first)
{
	int		i;
	int		leng;

	i = 1;
	if ((leng = ft_strlen(first)) < 3)
		return (0);
	if (i < 4)
	{
		if (space_check(first[leng - i]))
			return (0);
		i++;
	}
	m_dot = first[leng - 1];
	m_o = first[leng - 2];
	m_x = first[leng - 3];
	first[leng - 3] = '\0';
	m_len = ft_atoi(first);
	if (m_dot == m_o || m_x == m_o || m_dot == m_x || m_len == 0)
		return (0);
	return (1);
}
