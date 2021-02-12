/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joupark <joupark@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 14:49:21 by joupark           #+#    #+#             */
/*   Updated: 2020/10/18 18:10:48 by joupark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		corner_1(int a, int b, int x)
{
	if (b == 1 && (a == 1 || a == x))
		return (1);
	return (0);
}

int		corner_2(int a, int b, int x, int y)
{
	if (b == y && (a == 1 || a == x))
		return (1);
	return (0);
}

int		side(int a, int b, int x, int y)
{
	if (a == x || a == 1 || b == y || b == 1)
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
			if (corner_1(a, b, x))
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
		a = 1;
		b++;
	}
}
