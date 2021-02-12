/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/23 01:00:43 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/30 03:36:15 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check(char a)
{
	if (a < 48 || (a > 57 && a < 65) || (a > 90 && a < 97) || a > 122)
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	while (str[i] != '\0')
	{
		if (check(str[i - 1]) == 1)
		{
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		}
		else
		{
			if (str[i] >= 65 && str[i] <= 90)
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
