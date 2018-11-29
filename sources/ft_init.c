/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_init.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:21:17 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/28 18:03:30 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_init_tetri(t_tetri tetri)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i < NB_TETRI && !(j = -1))
		while (++j < NB_LINE && !(k = -1))
			while (++k < NB_COLL)
				tetri[i][j][k] = 0;
}

void	ft_init_output(t_output output)
{
	int i;
	int j;

	i = -1;
	while (++i < LIMIT_SIDE && !(j = -1))
		while (++j < LIMIT_SIDE)
			output[i][j] = 0;
}


void	ft_re_init_output(t_output init_output, int side)
{
	int i;
	int j;

	i = -1;
	while (++i < side && !(j = -1))
		while (++j < side)
			init_output[i][j] = '.';
}
