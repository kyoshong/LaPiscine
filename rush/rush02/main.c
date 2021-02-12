/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:25:22 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/31 20:01:29 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rush.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *a)
{
	while (*a)
	{
		ft_putchar(*a);
		a++;
	}
}

int		strlen(char *a)
{
	int i;

	i = 0;
	while (a[i] != 0)
		i++;
	return (i);
}

int		main(int argc, char const *argv[])
{
	dict(argc, argv);
	return (0);
}

