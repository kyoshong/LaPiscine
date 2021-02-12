/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:47:56 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/30 04:13:26 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (1)
	{
		if (dest[i] == '\0')
		{
			if (src[0] == '\0')
				return (dest);
			while (src[j] != '\0')
			{
				dest[i + j] = src[j];
				j++;
				if (src[j] == '\0')
				{
					dest[i + j] = '\0';
					return (dest);
				}
			}
		}
		i++;
	}
}
