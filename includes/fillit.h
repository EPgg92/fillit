/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:17:57 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/26 15:37:55 by vasalome    ###    #+. /#+    ###.fr     */
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
typedef unsigned short	t_map[16];
typedef unsigned short	t_btetri[16][4];
typedef int				t_order[26];
typedef char			t_output[LIMIT_SIDE][LIMIT_SIDE];

void					ft_error();
int						ft_usage();
int						ft_parser(t_tetri tetri, t_btetri bt, char *fn);
void					ft_init_tetri(t_tetri tetri);
void					ft_printtetri(t_tetri tetri, int nb_tetri);
void					ft_writechar(char c);
void					ft_init_output(t_output output);
void					ft_solver(t_output output, t_btetri bt, int nb_tetri);
void					ft_init_order(t_order order, int nb_tetri);
unsigned short			ft_get_4bits_first(unsigned short in);
void					ft_init_map(t_map map);
void 					manif_pour_tous(int nb_tetri, t_btetri bt); // to remove

#endif
