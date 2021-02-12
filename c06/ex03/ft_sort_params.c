/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 03:04:04 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/04 06:34:47 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		print_all(int argc, char *argv[])
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_putchar(argv[i]);
			i++;
			write(1, "\n", 1);
		}
	}
	return (0);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (1)
	{
		if (*s1 != *s2)
			break ;
		if (*s1 == 0 || *s2 == 0)
			break ;
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else if (*s1 < *s2)
		return (-1);
	return (1);
}

void	swap(char **str, char **src)
{
	char *temp;

	temp = *str;
	*str = *src;
	*src = temp;
}

int		main(int argc, char *argv[])
{
	int		i;
	int		argct;
	char	**argvt;

	argct = argc;
	argvt = argv;
	i = 1;
	if (argc > 2)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argvt[i], argvt[i + 1]) == 1)
			{
				swap(&argvt[i], &argvt[i + 1]);
				i = 1;
			}
			else
				i++;
		}
	}
	print_all(argc, argv);
	return (0);
}
