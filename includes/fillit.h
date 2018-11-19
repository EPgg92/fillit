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
# define H_BLOCK (NB_COLL + 1) * NB_LINE
# define H_BLOCKNL H_BLOCK + 1
# define NB_TETRI 26
# define BUFF_READ (H_BLOCK + 1) * NB_TETRI - 1

typedef char	t_tetri[NB_TETRI][NB_LINE][NB_COLL + 1];

void			ft_error();
int				ft_parser(t_tetri tetri, char *filename);
void			ft_init_tetri(t_tetri tetri);
void			ft_printtetri(t_tetri tetri, int nb_tetri);
void 			ft_writechar(char c);

#endif
