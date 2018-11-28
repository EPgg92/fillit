/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printer.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:28:30 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/28 18:03:40 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_writechar(char c)
{
	write(0, &c, 1);
}

void	ft_printtetri(t_tetri tetri, int nb_tetri)
{
	int i;
	int j;
	int k;

	i = -1;
	j = -1;
	k = -1;
	while (++i < nb_tetri)
	{
		while (++j < NB_LINE)
		{
			while (++k < NB_COLL)
				ft_writechar(tetri[i][j][k]);
			k = -1;
			ft_writechar('\n');
		}
		j = -1;
		ft_writechar('-');
		ft_writechar('~');
		ft_writechar('-');
		ft_writechar('~');
		ft_writechar('\n');
	}
}

/*
** Just for debug...
*/
