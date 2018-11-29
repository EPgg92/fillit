/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_main.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/16 22:58:00 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/29 23:43:26 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	main(int argc, char **argv)
{
	t_tetri			tetri;
	int					nb_tetri;
	t_lst_coord lc;

	if (argc != 2)
		return (ft_usage());
	ft_init_tetri(tetri);
	nb_tetri = ft_parser(tetri, argv[1]);
	ft_transform(tetri, nb_tetri, lc);
	//ft_printtetri(tetri, nb_tetri);
	//ft_printcoord(lc, nb_tetri);
	ft_solver(nb_tetri, lc);

	return (0);
}
