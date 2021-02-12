/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 21:47:36 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/05 18:11:14 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long long	temp;

	temp = 1;
	if (nb <= 0)
		return (0);
	while (temp * temp <= nb)
	{
		if (temp * temp == nb)
			return (temp);
		temp++;
	}
	return (0);
}
