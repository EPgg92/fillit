/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_error.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/11/16 22:57:19 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 14:19:56 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_error(int code) // param for code error
{
	char code_error; // debug code

	//write(0, "error\n", 6); // true code
	code_error = 'a' + code; // debug code
	write(0, "error ", 6); // debug code
	write(0, &code_error, 1); // debug code
	write(0, "\n", 1); // debug code
	exit(code);
}
