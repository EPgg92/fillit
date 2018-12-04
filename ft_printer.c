/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printer.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/20 14:28:30 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/30 19:25:08 by vasalome    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

static void		ft_write_fillit(t_output out, int len, int side)
{
	char	str[len];
	int		x;
	int		i;
	int		j;

	x = 0;
	i = -1;
	while (++i < side && (j = -1) < 101)
	{
		while (++j < side)
			str[x++] = out[i][j];
		if (i + 1 != side)
			str[x++] = '\n';
		else
			str[x] = '\0';
	}
	write(1, str, len);
	exit(0);
}

void			ft_printer(t_output out, int side)
{
	int		len;

	len = (side + 1) * side;
	ft_write_fillit(out, len, side);
}
