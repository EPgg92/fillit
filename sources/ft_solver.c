/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_solver.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:30:06 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/24 18:50:59 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

static int	ft_backtraking(int side, t_btetri bt, t_order order, t_output output)
{

	//ft_backtraking(side + 1, map, order, output);
	side++;
	bt[0][0] = bt[0][0] ;
	order[0] = order[0];
	output[0][0] = 'a';

	return (0);
}


void		ft_solver(t_output output, t_btetri bt, int nb_tetri)
{
	int side;
	t_order order;

	ft_init_order(order, nb_tetri);
	ft_init_output(output);
	side = ft_sqrt(4 * nb_tetri);
	ft_backtraking(side, bt, order, output);
	printf("map_size -> %d\n", side);
}


// heuristiques :
// ne pas pas backtrack sur deux meme pieces mais inverser leurs ordres.
