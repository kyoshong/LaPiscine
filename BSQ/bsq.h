/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 07:17:10 by hyospark          #+#    #+#             */
/*   Updated: 2020/11/05 16:55:33 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BSQ_H
# define _BSQ_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>

char	g_mdot;
char	g_mo;
char	g_mx;
int		g_mlen;
char	*g_contents;
char	**g_cmap;
char	**g_imap;

int		min(int a, int b, int c);
int		max(int a, int b, int c);
void	ft_putchar(char a);
void	ft_putstr(char *a);
int		ft_strlen(char *a);
void	print_error(void);

int		load_map(char *mapfile);
int		read_map(int fd, int z);
int		check_first_line(char *first);

void	change_map(void);
void	check_map(int col_l, int row_l);
void	print_square(int p, int k, int col_l, int row_l);

int		space_check(char b);
int		not_a_num(char n);
int		ft_atoi(char *str);
int		main(int argc, char *argv[]);

#endif
