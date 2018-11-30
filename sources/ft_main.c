/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_main.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/16 22:58:00 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/30 16:12:21 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

int	main(int argc, char **argv)
{
	t_tetri			tetri;
	t_container		c;

	if (argc != 2)
		return (ft_usage());
	ft_init_tetri(tetri);
	c.nb_tetri = ft_parser(tetri, argv[1]);
	ft_transform(tetri, c.nb_tetri, c.lc);
	//ft_printtetri(tetri, nb_tetri);
	//ft_printcoord(c.lc, c.nb_tetri);
	ft_solver(c);

	return (0);
}
