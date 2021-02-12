/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 05:23:39 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/03 21:04:18 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

int		leng(char *src)
{
	int length;

	length = 0;
	while (src[length])
		length++;
	return (length);
}

bool	space_check(char b)
{
	if (b == ' ' || b == '\n' || b == '\r')
		return (true);
	else if (b == '\t' || b == '\f' || b == '\v')
		return (true);
	return (false);
}

bool	base_check(char *base)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (base == 0 || leng(base) <= 1)
		return (false);
	while (base[i])
	{
		if (base[i] == ' ' || base[i] == '+' || space_check(base[i]))
			return (false);
		i++;
	}
	i = 0;
	while (base[i + 1])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j++])
				return (false);
		}
		i++;
	}
	return (true);
}

int		change(char *base, char str)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (base[i] == str)
			return (i);
		i++;
	}
	return (-1);
}

int		ft_atoi_base(char *str, char *base)
{
	int i;
	int minus;
	int final;
	int blen;

	final = 0;
	blen = leng(base);
	minus = 1;
	if (!base_check(base))
		return (0);
	while (space_check(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while ((i = change(base, *str)) > -1)
	{
		final *= blen;
		final += i;
		str++;
	}
	return (final * minus);
}
