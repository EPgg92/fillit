/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fillit.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:17:57 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 14:18:38 by epoggio     ###    #+. /#+    ###.fr     */
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
# include "../libft/libft.h"

# define NB_LINE 4
# define NB_COLL 4
# define LIMIT_SIDE 16
# define NB_TETRI 26
# define H_BLOCK (NB_COLL + 1) * NB_LINE
# define H_BLOCKNL H_BLOCK + 1
# define BUFF_READ (H_BLOCK + 1) * NB_TETRI - 1

typedef char			t_tetri[NB_TETRI][NB_LINE][NB_COLL + 1];
typedef unsigned short	t_map[16];
typedef char			t_output[LIMIT_SIDE][LIMIT_SIDE];

void					ft_error();
int						ft_parser(t_tetri tetri, t_map map, char *filename);
void					ft_init_tetri(t_tetri tetri);
void					ft_printtetri(t_tetri tetri, int nb_tetri);
void					ft_writechar(char c);
void					ft_init_output(t_output output);
void					ft_solver(t_output output, t_map map, int nb_tetri);

#endif
