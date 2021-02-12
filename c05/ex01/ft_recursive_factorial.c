/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 18:14:08 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/05 18:11:06 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = i * ft_recursive_factorial(nb - 1);
	return (i);
}
