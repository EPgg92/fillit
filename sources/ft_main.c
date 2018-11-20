/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_main.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/16 22:58:00 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 14:31:56 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	main(int argc, char **argv)
{
	t_tetri		tetri;
	int			nb_tetri;
	t_map		map;
	t_output	output;

	if (argc < 2)
		ft_error(0); // code error: a
	ft_init_tetri(tetri);
	nb_tetri = ft_parser(tetri, map, argv[1]);
	ft_printtetri(tetri, nb_tetri);
	ft_solver(output, map, nb_tetri);
	return (0);
}
