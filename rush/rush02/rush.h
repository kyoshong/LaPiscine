/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 19:27:37 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/01 18:59:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_dict
{
	char *key;
	char *value;
}				t_dict;

char	get_dict(char *argv, char *dir);
void	dict(int argc, char *argv[]);
int		counter(int i);
int		countover_tho(int i);
int		check_line(char *line);
int		white_space(char str);
void	ft_putstr(char *str);
int		counter(int i);
int		countover_tho(int i);
t_dict	*trim_str(char *line);

#endif
