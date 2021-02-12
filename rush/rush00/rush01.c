/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 13:25:28 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/18 18:34:24 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int		corner_1(int a, int b, int x, int y)
{
	if (a == 1 && b == 1)
	{
		return (1);
	}
	if (a == x && b == y && y != 1 && x != 1)
	{
		return (1);
	}
	return (0);
}

int		corner_2(int a, int b, int x, int y)
{
	if ((a == 1 && b == y) || (a == x && b == 1))
	{
		return (1);
	}
	return (0);
}

int		side(int a, int b, int x, int y)
{
	if (a == 1 || a == x || b == 1 || b == y)
	{
		return (1);
	}
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
			if (corner_1(a, b, x, y))
				ft_putchar('/');
			else if (corner_2(a, b, x, y))
				ft_putchar('\\');
			else if (side(a, b, x, y))
				ft_putchar('*');
			else
				ft_putchar(' ');
			a++;
		}
		a = 1;
		ft_putchar('\n');
		b++;
	}
}
