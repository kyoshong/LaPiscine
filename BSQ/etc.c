/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   etc.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 07:40:13 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/05 07:41:49 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq_h.h"

int		min(int a, int b, int c)
{
	int n;

	n = a;
	if (n > b)
		n = b;
	if (n > c)
		n = c;
	return (n);
}

int		max(int a, int b, int c)
{
	int n;

	n = a;
	if (n < b)
		n = b;
	if (n < c)
		n = c;
	return (n);
}

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *a)
{
	int i;

	i = 0;
	while (i)
	{
		ft_putchar(a[i]);
		i++;
	}
}

int		ft_strlen(char *a)
{
	int i;

	i = 0;
	while (a[i] != 0)
		i++;
	return (i);
}
