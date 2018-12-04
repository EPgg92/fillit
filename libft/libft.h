/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: epoggio <epoggio@student.le-101.fr>        +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/11 20:06:09 by epoggio      #+#   ##    ##    #+#       */
/*   Updated: 2018/11/20 13:35:21 by epoggio     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *b, size_t n);
size_t				ft_strlen(const char *str);
char				*ft_strchr(const char *s, int c);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strrchr(const char *s, int c);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strreplace(char *dst, char chr, char repl_chr);
size_t				ft_strspn(const char *s, const char *charset);
size_t				ft_strcspn(const char *s, const char *charset);
char				*ft_strsep(char **stringp, const char *delim);
int					ft_countsetbits(unsigned short n);
int					ft_sqrt(int nb);

#endif
