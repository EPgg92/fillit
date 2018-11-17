/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_parser.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/16 23:01:57 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/17 11:21:52 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"


static unsigned short	ft_placeupleft(unsigned short stb)
{
	unsigned short tmp;

	tmp = 0;
	(ft_countsetbits(stb) == 4) ? (tmp = stb << 1) : ft_error(5); // code error f
	while (ft_countsetbits(tmp) == 4 && tmp > stb)
	{
		if (tmp == 47104 || tmp == 55296 || tmp == 23552 || tmp == 39040 \
				|| tmp == 35200 || tmp == 39936 || tmp == 39168)
			break ;
		stb = tmp;
		tmp = stb << 1;
	}
	return (stb);
}

static void 	ft_check(t_tetri tetri, int nb)
{
	unsigned short stb;
	int z;
	int x;
	int y;

	z = -1;
	while (++z < nb && !(stb = 0))
	{
		x = -1;
		while (++x < NB_LINE && (y = -1) > -42)
			while (++y < NB_COLL)
				if (tetri[z][x][y] == '#' || tetri[z][x][y] == '.')
				 	stb = (tetri[z][x][y] == '#') ? (stb << 1) + 1 : (stb << 1);
				else
					ft_error(4); // code error e
		stb = ft_placeupleft(stb);
		//printf("%c -> %d\n", 'A' + z, stb );
		while (--x > -1 && (y = NB_COLL - 1))
			while (y > -1)
			{
				tetri[z][x][y--] = (stb % 2 == 1) ? 'A' + z : '.';
				stb >>= 1;
			}
	}
}


static int	ft_septetri(t_tetri tetri, char *str, int ret)
{
	int		nb_tetri;
	int		z;
	int		x;
	char	*l;

	z = -1;
	nb_tetri = ret / 21 + 1;
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
