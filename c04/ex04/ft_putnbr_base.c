/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 05:29:33 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/03 21:04:27 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int		checkbase(char *base)
{
	int i;
	int j;

	i = 0;
	if (base[0] == 0)
		return (0);
	while (base[i])
	{
		if (base[i] == ' ' || base[i] == '+')
			return (0);
		i++;
	}
	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (0);
		}
		i++;
	}
	return (i);
}

int		change_nag(int nbr)
{
	write(1, "-", 1);
	nbr *= -1;
	return (nbr);
}

void	printc(char *base, int a)
{
	while (a >= 0)
	{
		write(1, &base[a], 1);
		a--;
	}
}

void	put_index(char *tbase, char *base, int c, int nbr)
{
	int i;

	i = 0;
	while (1)
	{
		if (nbr / c == 0)
		{
			tbase[i] = base[nbr % c];
			printc(tbase, i);
			break ;
		}
		tbase[i++] = base[nbr % c];
		nbr = nbr / c;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		c;
	char	tbase[255];

	c = checkbase(base);
	if (c != 0)
	{
		if (nbr == -2147483648)
		{
			ft_putnbr_base(nbr / c, base);
			write(1, &(base[-(nbr % c)]), 1);
		}
		else
		{
			if (nbr < 0)
				nbr = change_nag(nbr);
			put_index(tbase, base, c, nbr);
		}
	}
}
