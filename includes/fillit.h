/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:17:57 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/29 23:47:21 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h> // to remove
# include "../libft/includes/libft.h"

# define NB_LINE 4
# define NB_COLL 4
# define LIMIT_SIDE 16
# define NB_TETRI 26
# define H_BLOCK (NB_COLL + 1) * NB_LINE
# define H_BLOCKNL H_BLOCK + 1
# define BUFF_READ (H_BLOCK + 1) * NB_TETRI - 1

typedef char			t_tetri[NB_TETRI][NB_LINE][NB_COLL + 1];
typedef char			t_output[16][16];
typedef struct    		s_points
{
	int             	x;
	int             	y;
}                 		t_points;
typedef struct    		s_coord
{
	t_points        	minos[4];
	char            	letter;
	//t_output			out;
}                 		t_coord;
typedef t_coord   		t_lst_coord[NB_TETRI];

void					ft_error();
int						ft_usage();
int						ft_parser(t_tetri tetri, char *fn);
void					ft_init_tetri(t_tetri tetri);
void					ft_writechar(char c);
void					ft_init_output(t_output output);
void	        ft_re_init_output(t_output init_output, int side);
int           ft_transform(t_tetri tetri, int nb_tetri, t_lst_coord lc);
int           ft_solver(int nb_tetri, t_lst_coord lc);

int ft_wipe_piece(t_output out, t_lst_coord lc, int l, int side);
int ft_change_place_x(t_output out, t_lst_coord lc, int side, int i, int j, int l);
int ft_change_place_y(t_output out, t_lst_coord lc, int side, int i, int j, int l);
int ft_place_piece(t_output out, t_lst_coord lc, int side, int i, int j , int l, int nb_tetri);

// to remove
void			ft_printcoord(t_lst_coord lc, int nb_tetri);
void			ft_printtetri(t_tetri tetri, int nb_tetri);
void			print_out(t_output out);

#endif
