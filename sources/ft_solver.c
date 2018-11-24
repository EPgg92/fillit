/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_solver.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:30:06 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/24 13:55:37 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	ft_backtraking(int side, t_map map, t_order order, t_output output)
{

	//ft_backtraking(side + 1, map, order, output);
	side++;
	map[0] = map[0];
	order[0] = order[0];
	output[0][0] = 'a';

	return 0;
}


void		ft_solver(t_output output, t_map map, int nb_tetri)
{
	int map_size;
	t_order order;

	ft_init_order(order, nb_tetri);
	ft_init_output(output);
	map_size = ft_sqrt(4 * nb_tetri);
	ft_backtraking(map_size, map, order, output);
	printf("map_size -> %d\n", map_size);
}
