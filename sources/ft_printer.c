/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printer.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:28:30 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/24 19:22:41 by epoggio     ###    #+. /#+    ###.fr     */
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




static void print_lol(unsigned short lol, int i)
{
	unsigned short tmp;

	if (lol == 0){
		//printf("%d\n", i );
		while (i++ < 16)
			printf("0");
		return ;
	}
	tmp = lol >> 1;
	print_lol(tmp, ++i);
	printf("%d", lol % 2);
}

static void print_lol_nl(unsigned short lol)
{
	print_lol(lol, 0);
	printf("\n");
}

static void print_tab(unsigned short tab[4])
{
	int i;

	i = 0;
	while (i < 4)
		print_lol_nl(tab[i++]);
}


void lolilol(int nb_tetri, t_btetri bt)
{
	int i = 0;

	while (i < nb_tetri)
	{
		print_tab(bt[i++]);
		printf("-~-~-~-~-~-~-~-~\n" );
	}
}
