/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosong <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:20:56 by hosong            #+#    #+#             */
/*   Updated: 2020/10/18 18:21:22 by hosong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		corner_1(int a, int b, int y)
{
	if (a == 1 && b == 1)
		return (1);
	if (a == 1 && b == y)
		return (1);
	return (0);
}

int		corner_2(int a, int b, int x, int y)
{
	if (a == x && b == 1)
		return (1);
	if (a == x && b == y)
		return (1);
	return (0);
}

int		side(int a, int b, int x, int y)
{
	if (a == 1 || a == x || b == 1 || b == y)
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
			if (corner_1(a, b, y))
				ft_putchar('A');
			else if (corner_2(a, b, x, y))
				ft_putchar('C');
			else if (side(a, b, x, y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
		a = 1;
	}
}
