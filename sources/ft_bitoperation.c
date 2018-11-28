/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_bitoperation.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/24 17:21:02 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/28 15:34:22 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

/*
**	To call in while where you <<= 4 on in
**	get the 4 first bits of matrix unsigned char like this
**	1100
**	1000
**	1000
**	0000
**
**	Convert first line to
**	11000000000000000 (for the first line)
**	10000000000000000 (for the second line)
**	[...]
*/

unsigned short ft_get_4bits_first(unsigned short in)
{
	unsigned short out;

	out = ((in >>= 12) % 2) ? 4096 : 0;
	out += ((in >>= 1) % 2) ? 8192 : 0;
	out += ((in >>= 1) % 2) ? 16384 : 0;
	out += ((in >>= 1) % 2) ? 32768 : 0;
	return (out);
}

/*
**	If new is an unsigned short
**	past is an unsigned short and futur is equal to past ^ new
*/

int ft_check_upper_more_bits(unsigned short past, unsigned short futur)
{
	int p;
	int f;

	if (futur < past)
		return (0);
	while (past || futur)
	{
		f = futur % 2;
		p = past % 2;
		if (p != f && f == 0 && p == 1)
			return (0);
		futur >>= 1;
		past >>= 1;
	}
	return (1);
}
