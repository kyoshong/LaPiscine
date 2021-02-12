/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/21 01:12:24 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/22 14:36:55 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_combn2(int a, int i)
{
	while (i < 10)
	{
		print_putchar(a + '0');
		i += 1;
		print_putchar(i + '0');
		if (a < 10)
		{
			write(1, ", ", 2);
		}
		ft_print_combn2(a, i);
	}
}

void	ft_print_combn(int n)
{
	int i;
	int a;

	i = n;
	a = 0;
	if (n > 0 && n < 10)
	{
		while (n > 0)
		{
			while (a < 10)
			{
				print_putchar(a + '0');
				i = a + 1;
				print_putchar(i + '0');
				if (a < 10)
				{
					write(1, ", ", 2);
				}
				ft_print_combn2(a, i);
				a++;
			}
			n--;
		}
	}
}
