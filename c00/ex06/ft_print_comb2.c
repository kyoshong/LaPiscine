/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 19:03:22 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/21 04:13:17 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			ft_putchar((a / 10 + '0'));
			ft_putchar((a % 10 + '0'));
			write(1, " ", 1);
			ft_putchar((b / 10 + '0'));
			ft_putchar((b % 10 + '0'));
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
