/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:40:53 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/01 18:55:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush.h>

char	get_dict(char *argv, char *dir)
{
	int fd;
	char *str;
	int i;
	char *line;

	i = 0;
	str = (char *)malloc(1024);
	if ((fd = open(argv, O_RDONLY)) == -1)
		ft_putstr("Dict Error\n");
	else
	{
		while((read(fd, &str, 1024)) != 0)
		{
			if (str[i] == '\n')
			{
				line[i] = 0;
				break;
			}
			else
				line[i] = str[i];
			i++;
		}
	}
	return (line);
}

void	dict(int argc, char *argv[])
{
	if (argc > 3)
		ft_putstr("Error\n");
	else if (argc == 2)
	{
		if (38 < strlen(argv[2]))
			ft_putstr("Error\n");
		else
			get_dict(argv[2], "numbers.dict");
	}
	else if (argc == 3)
	{
		if (38 < strlen(argv[3]))
			ft_putstr("Error\n");
		else
			get_dict(argv[3], argv[2]);
	}
}

void	ft_putstr(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
}

int		counter(int i)
{
	while (i <= 3)
	{
		if (i == 1)
		{
			write(1, "&일의자리 ", 7);
		}
		else if (i == 2)
		{
			write(1, "&십의자리 ", 12);
		}
		else if (i == 3)
			write(1, "&백 ", 8);
		i--;
	}
	return 0;
}
int		countover_tho(int i)
{
	int i_line; // 줄 수 카운트
	int a;
	i_line = 28; // 기준 100
	while (i > 3)
	{
		if (i / 3 >= 1)
		{
			a = i / 3;
			counter(a);
			i_line = i_line + a;
			write(1, &i_line, 15);
		}
		i-3;
	}
	return 0;
}
