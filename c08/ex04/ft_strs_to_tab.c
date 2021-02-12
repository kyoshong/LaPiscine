/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 21:05:55 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/06 01:59:19 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int					ft_str_length(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char				*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	if ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)) == 0)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*temp;

	ac = ac + 0;
	if ((temp = malloc(sizeof(t_stock_str) * (ac + 1))) == 0)
		return (NULL);
	i = 0;
	while (ac > i)
	{
		temp[i].size = ft_str_length(av[i]);
		temp[i].str = av[i];
		temp[i].copy = ft_strdup(av[i]);
		i++;
	}
	temp[i] = (struct s_stock_str){0, 0, 0};
	return (temp);
}
