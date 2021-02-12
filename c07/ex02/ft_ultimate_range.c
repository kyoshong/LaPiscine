/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:44:38 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/06 00:13:46 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*rg;
	int	j;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	j = max - min - 1;
	if ((rg = malloc(j * sizeof(int))) == NULL)
	{
		*range = 0;
		return (-1);
	}
	*range = rg;
	i = 0;
	while (i <= j)
	{
		rg[i] = min + i;
		i++;
	}
	return (j + 1);
}
