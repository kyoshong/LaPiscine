/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:48:16 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/01 00:58:35 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp;

	temp = dest;
	while (*temp != 0)
		temp++;
	while (*src != 0 && nb > 0)
	{
		*temp = *(unsigned char *)src;
		temp++;
		src++;
		nb--;
	}
	*temp = '\0';
	return (dest);
}
