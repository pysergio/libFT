/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungurea <sungurea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 17:06:06 by sungurea          #+#    #+#             */
/*   Updated: 2018/08/20 00:41:31 by sungurea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c,
			size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
int 	ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(char *str);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(char *s, int c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strncat(char *dest, char *src, size_t nb);
int		ft_strncmp(char *s1, char *s2, size_t len);
char	*ft_strncpy(char *dest, char *src, size_t n);
char	*ft_strnstr(char *str, char *to_find, size_t len);
char	*ft_strrchr(char *s, int c);
char	*ft_strstr(char *str, char *to_find);
int		ft_tolower(int c);
int		ft_toupper(int c);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);
char	*ft_strnew(size_t size);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s, void (*f)(char *));

#endif
