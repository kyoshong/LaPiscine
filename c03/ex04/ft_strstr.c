/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 22:49:30 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/29 22:51:49 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp;
	int		count;

	temp = to_find;
	count = -1;
	if (*to_find == 0)
		return (char *)str;
	while (*str != 0)
	{
		if (*str != *to_find)
		{
			count = -1;
			to_find = temp;
		}
		if (*str == *to_find)
		{
			to_find++;
			count++;
			if (*to_find == 0)
				return (str - count);
		}
		if (*str++ == 0)
			return (0);
	}
	return (0);
}
