/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_main.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/16 22:58:00 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/17 11:56:11 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"


void ft_init_tetri(t_tetri tetri)
{
	int i = -1;
	int j = -1;
	int k = -1;
	while (++i < NB_TETRI)
	{
		while (++j < NB_LINE)
		{
			while (++k < NB_COLL)
				tetri[i][j][k] = 48 + k; // bzero(NB_COLL + 1) && no k
			k = -1;
		}
		j = -1;
	}
}

int main(int argc, char **argv)
{
	t_tetri tetri;

	if (argc < 2)
	 	ft_error(0); // code error: a
	ft_init_tetri(tetri);
	ft_parser(tetri, argv[1]);
	ft_printtetri(tetri);

	/*
	** Lis le readme!!!!!
	** C'est rigolo ! 
	*/


	// solve

	return (0);
}
