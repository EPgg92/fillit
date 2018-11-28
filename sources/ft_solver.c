/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_solver.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:30:06 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/28 17:02:23 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"




static void ft_place_piece(t_map map, t_bpiece piece, int side)
{
	int shift_side;
	int shift_position;
	int line;
	int line_map = 0;
	unsigned short tmp;

	line = 0;
	shift_position = 0;
	shift_side = 16 - side;
	while (line_map < side || line < NB_LINE)
	{
		tmp = piece[line] >> shift_side;
		if (ft_countsetbits(tmp) == ft_countsetbits(piece[line]))
		{
			tmp = map[line + line_map] ^ piece[line];
			ft_check_upper_more_bits(map[line + line_map], tmp);

		}
	// 0000 0000 0000 0011
	// 0011 0000 0000 0000
	}
}

static int	ft_backtraking(int side, t_btetri bt, \
							t_order order, t_output output)
{
	// nb of tetri find in order ...

	t_map map;
	//t_bpiece piece;

	int i;

	ft_init_map(map);
	i = -1;
	while (i++ < NB_TETRI)
	{
		if (!(order[i]) || i == NB_TETRI - 1)
			return (1);

	ft_place_piece(map, bt[i], side);
	//ft_backtraking(side + 1, map, order, output);

	}
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
