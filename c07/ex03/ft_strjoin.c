/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:44:54 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/06 00:25:43 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dst, char *src)
{
	while (*src)
		*(dst++) = *(src++);
	return (dst);
}

int		ft_strlen(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		strlen;
	int		i;
	char	*rg;
	char	*temp;

	if (!size)
	{
		rg = ((char*)malloc(1));
		rg[0] = 0;
		return (rg);
	}
	strlen = 0;
	i = 0;
	while (i < size)
		strlen += ft_strlen(strs[i++]);
	rg = (char*)malloc(strlen + (size - 1) * ft_strlen(sep) + 1);
	temp = ft_strcat(rg, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i++]);
	}
	*temp = 0;
	return (rg);
}
