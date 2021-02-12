/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 15:32:43 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/31 18:38:05 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check(unsigned int c)
{
	int		i;
	char	*a;

	a = "0123456789abcdef";
	write(1, "\\", 1);
	i = c / 16;
	write(1, &a[i], 1);
	i = c % 16;
	write(1, &a[i], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*temp;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= ' ' && str[i] < 127)
			write(1, &str[i], 1);
		else
			check(str[i]);
		i++;
	}
}
