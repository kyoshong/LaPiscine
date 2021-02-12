/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 01:28:50 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/01 04:50:20 by hyospark         ###   ########.fr       */
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

int		main(int argc, char *argv[])
{
	int		i;
	int		j;
	int		argct;

	argct = argc;
	i = 1;
	j = 0;
	if (argct > 1)
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
