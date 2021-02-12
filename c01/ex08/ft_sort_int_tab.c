/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/22 16:40:50 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/27 22:34:45 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int a;
	int temp;

	a = 0;
	while (a + 1 < size)
	{
		if (tab[a] > tab[a + 1])
		{
			temp = tab[a];
			tab[a] = tab[a + 1];
			tab[a + 1] = temp;
			a = 0;
		}
		else
			a++;
	}
}
