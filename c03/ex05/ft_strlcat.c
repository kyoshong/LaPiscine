/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:49:42 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/01 00:48:35 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	count(char *dest)
{
	unsigned int i;

	i = 0;
	while (dest[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				j;
	unsigned int	destlen;
	unsigned int	srclen;
	char			*dtem;
	char			*stem;

	j = -1;
	dtem = dest;
	stem = src;
	destlen = count(dest);
	srclen = count(src);
	if (size > destlen)
	{
		while (++j < (int)size - destlen)
		{
			dest[destlen + j] = src[j];
		}
		dest[size - 1] = 0;
	}
	if (size < destlen)
		return (srclen + size);
	else
		return (srclen + destlen);
}
