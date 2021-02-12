/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:44:55 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/27 18:25:17 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_pre_combination_1(char **argv);
int ft_pre_shape(char **argv);
void	ft_arrange_input(char *row, char *col, char **argv);
void ft_print_error(void);

void	swap(int *a, int *b)
{ //값을 이동하기 위한 함수
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
//final 출력하는 함수
void	print_all(int table[4][4])
{
	int r;
	int c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			printf("%d", table[r][c]);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

//한 방향에서 보이는 블럭의 갯수 리턴 함수
int		count(int *arr)
{
   int i = 0;
   int j = 1;
   int c = 1;

    while (i < 3)
    {
        while (j < 4)
        {
            if(arr[i] < arr[j])
            {   c++;
				i++;
				break;
			}
			else
				j++;
        }
        j = i + 1;
    }
    return (c);
}

void	print_arr(int size, int *arr, int compare[24][5])
{ //값을 프린트 하기위한 함수
	int z = 0;
	int a = 3;
	int j = 0;
	int right[4];
	int left[4];

	while (z < 4)
	{
		right[z] = arr[z];
		left[a] = arr[z];
		z++;
		a--;
	}
	int i;
	i = 0;
	while (j < 25)
	{
		if(compare[j][0] == 0)
		{
			compare[j][4] = count(right);
			while (i < size)
			{
				compare[j][i] = arr[i];
				printf("%d", compare[i][j]);
				i++;
			}
			compare[j][5] = count(left);
		}
		j++;
	}
}

void permutation(int depth, int *arr, int compare[24][5])
{ //재귀함수 함수
	if(4 == depth)
	{ //r이 depth(0) 일때 1출력함수 호출
		print_arr(depth, arr, compare);
		printf("\n");
		return;
	}
	for(int i=depth; i<4; i++)
	{
		swap(&arr[i], &arr[depth]);
		permutation(depth+1, arr, compare);
		swap(&arr[i], &arr[depth]); //배열을 제자리로 보내주기 위함
	}
}

int     put_rows(char *row, int table[4][4], int i, int compare[24][5])
{
	int j;

	j = 0;
	while (i < 8)
	{
		while (j < 24)
		{
			if (row[i] == compare[j][4] && row[i + 4] == compare[j][5])
			{
				table[i][0] = compare[j][0];
				table[i][1] = compare[j][1];
				table[i][2] = compare[j][2];
				table[i][3] = compare[j][3];
				i++;
				if(put_rows(row, table[4][4], compare[24][5], i) == 1)
					continue;
			}
			else if (j == 23 && i == 0)
				{
				ft_print_error();
				return (1);
				}
			else if (j == 23)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int		put_cols(char *col, int table[4][4],  int i, int compare[24][i])
{
	int j;

	j = 0;
	while (i < 4)
	{
		while (j < 24)
		{
			if (col[i] == compare[j][4] && col[i + 4] == compare[j][5])
			{
				table[0][i] = compare[j][0];
				table[1][i] = compare[j][1];
				table[2][i] = compare[j][2];
				table[3][i] = compare[j][3];
				i++;
				if(put_rows(col, table[4][4], compare[24][i], i) == 1)
					continue;
			}
			else if (j == 23 && i == 0)
			{
				ft_print_error();
				return (1);
			}
			else if (j == 23)
			{
				return (1);
			}
			j++;
		}
		i++;
	}
    return (0);
}

void	rush(char **argv)
{
	char	row[8];
	char	col[8];
	int		i;
	int		j;
	int		table[4][4] = {0, };

	i = 0;
	j = 0;
	while (j < 8)
	{
		col[j] = argv[1][i];
		j++;
		i += 2;
	}
	j = 0;
	while (j < 8)
	{
		row[j] = argv[1][i];
		j++;
		i += 2;
	}

	int compare [24][5] = {0, };
	int arr[4] = {1,2,3,4};
	permutation(0, arr, compare);
	if (put_rows(row, table, 0, compare) == 0)
	{
		put_cols(col, table, 0, compare);
	}
	print_all(table);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		ft_print_error();
	}
	rush(argv);
}
