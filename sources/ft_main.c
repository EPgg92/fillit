/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_main.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/16 22:58:00 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/30 18:51:54 by vasalome    ###    #+. /#+    ###.fr     */
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
	ft_solver(c);
	return (0);
}
