/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_parser.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/16 23:01:57 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/17 09:46:01 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"



static void ft_check(t_tetri tetri, int nb)
{
	unsigned short stb;
	int z;
	int x;
	int y;

	z = -1;
	while (++z < nb && !(stb = 0))
	{
		while (++x < NB_LINE && !(y = 0))
			while (++y < NB_COLL)
				if (tetri[z][]

	}
	ft_printtetri(tetri);


}


static int	ft_septetri(t_tetri tetri, char *str, int ret)
{
	int		nb_tetri;
	int		z;
	int		x;
	char	*l;

	z = -1;
	nb_tetri = ret / H_BLOCKNL + 1;
	while (++z < nb_tetri && (x = -1) < 42)
		while ((l = ft_strsep(&str, "\n")) && ++x < NB_LINE)
			(ft_strlen(l) == NB_COLL) ? \
					ft_strcpy(tetri[z][x], l) : ft_error(3); // code error d
	ft_check(tetri, nb_tetri);
	return (nb_tetri);
}

static int	ft_read(t_tetri tetri, char *filename)
{
	char	buff[BUFF_READ + 1];
	int		ret;
	int		fd;

	fd = open(filename, O_RDONLY);
	ret = read(fd, buff, BUFF_READ);
	ret % 21 == 20 ? buff[ret] = 0 : ft_error(1); // code error: b
	(read(fd, NULL, 1)) ? ft_error(2) : (ret = ft_septetri(tetri, buff, ret));
	// code error: c
	return (ret);
}

int			ft_parser(t_tetri tetri, char *filename)
{
	int		nb_tetri;
	nb_tetri = ft_read(tetri, filename);
	return (0);
}
