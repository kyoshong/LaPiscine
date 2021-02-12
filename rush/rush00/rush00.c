/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parkjoungwan <whddhs6645@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/17 13:37:45 by parkjoung         #+#    #+#             */
/*   Updated: 2020/10/18 17:56:37 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		corner(int a, int b, int x, int y)
{
	if ((b == y || b == 1) && (a == x || a == 1))
		return (1);
	return (0);
}

int		side_1(int b, int y)
{
	if (b == y || b == 1)
		return (1);
	return (0);
}

int		side_2(int a, int x)
{
	if (a == x || a == 1)
		return (1);
	return (0);
}

void	rush(int x, int y)
{
	int a;
	int b;

	a = 1;
	b = 1;
	if (x < 1)
		return ;
	while (b <= y)
	{
		while (a <= x)
		{
			if (corner(a, b, x, y))
				ft_putchar('o');
			else if (side_1(b, y))
				ft_putchar('-');
			else if (side_2(a, x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
		a = 1;
	}
}
