/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:44:23 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/06 01:39:20 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		*ft_range(int min, int max)
{
	int		*rg;
	int		i;
	int		j;

	if (min >= max)
		return (0);
	j = max - min - 1;
	if (rg = malloc(j * sizeof(int)) == NULL)
		return (0);
	i = 0;
	while (i <= j)
	{
		rg[i] = min + j;
		j++;
	}
	return (rg);
}

int main(void)
{
	printf("%d", ft_range(3, 5)[0]);
	return 0;
}
