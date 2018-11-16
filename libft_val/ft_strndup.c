/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: vasalome <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/30 14:13:07 by vasalome     #+#   ##    ##    #+#       */
/*   Updated: 2018/11/01 15:50:53 by vasalome    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "./includes/libft.h"

char	*strndup(const char *src, size_t n)
{
	int		i;
	int		len;
	char	*duplic;

	i = 0;
	len = (ft_strlen(src) < n) ? ft_strlen(src) : n;
	if (!(duplic = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	i = 0;
	while (*src)
	{
		duplic[i] = src[i];
		i += 1;
	}
	duplic[i] = '\0';
	return (duplic);
}
