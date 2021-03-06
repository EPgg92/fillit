/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_countsetbits.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/17 07:55:37 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/30 17:14:11 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "fillit.h"

int	ft_countsetbits(unsigned short n)
{
	int count;

	count = 0;
	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
