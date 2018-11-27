/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_main.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/16 22:58:00 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/26 15:46:02 by vasalome    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	main(int argc, char **argv)
{
	t_tetri		tetri;
	int			nb_tetri;
	t_btetri	bt;
	t_output	output;

	if (argc != 2)
		return (ft_usage());
	ft_init_tetri(tetri);
	nb_tetri = ft_parser(tetri, bt, argv[1]);
	//ft_printtetri(tetri, nb_tetri);
//	lolilol(nb_tetri, bt);
	ft_solver(output, bt, nb_tetri);
	return (0);
}
