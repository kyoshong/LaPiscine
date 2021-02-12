/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trim.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:54:31 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/01 18:58:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush.h>

int		white_space(char str)
{
	return (str == ' ' || (str >= 9 && str <= 13));
}

int		check_line(char *line)
{
	int check;
	int num;
	int str;

	num = 0;
	str = 0;
	check = 0;
	while (*line)
	{
		if (*line == ':')
			check = 1;
		else
		{
			if (!white_space(*line))
			{
				if (check == 0)
					num++;
				else
					str++;
			}
		}
		line++;
	}
	return (check == 1 && num > 0 && str > 0);
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

t_dict	*trim_str(char *line)
{
	t_dict	*dic;
	char	*num;
	char	*str;

	num = (char *)malloc(sizeof(line));
	while (*line != ':')
	{
		if (white_space(*line))
			++line;
		else
		{
			*num = *line;
			++num;
			++line;
		}
	}
	str = (char *)malloc(sizeof(line));
	while (*line)
	{
		if (white_space(*line))
			++line;
		else
		{
			*str = *line;
			++str;
			++line;
		}
	}
	dic->key = num;
	dic->value = str;
	return (dic);
}
