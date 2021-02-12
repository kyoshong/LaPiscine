/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 07:18:17 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/05 07:18:21 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_h.h"

void	check_input(int z, int i, int j)
{
	while (read(0, &contents[z], 1))
	{
		if (contents[z++] == '\n')
		{
			i++;
			j = 0;
		}
		else
			c_map[i][j++] = contents[z];
		if (i == m_len)
		{
			change_map();
			break ;
		}
	}
}

void	std_input(int z)
{
	contents = (char *)malloc(1024 + 1);
	while (read(0, &contents[z], 1) && contents[z] != '\n')
		z++;
	if (check_first_line(contents))
	{
		check_input(z, 0, 0);
	}
	else
		print_error();
}

int		load_map(char *mapfile)
{
	int		fd;
	if ((fd = open(mapfile, O_RDONLY)) < 0)
		return (0);
	else
		read_map(fd, 0);
	close(fd);
	return (1);
}

int		main(int argc, char *argv[])
{
	int i;

	i = 1;
	if (argc == 1)
	{
		std_input(0);
		free(contents);
	}
	while (i < argc)
	{
		if (load_map(argv[i]))
			free(contents);
		else
			print_error();
		i++;
		if (argc > 2)
			ft_putchar('\n');
	}
	return (0);
}
