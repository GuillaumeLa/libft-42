/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:03:54 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/06 11:03:56 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void *ft_calloc( unsigned int elementCount, unsigned int elementSize);
int	ft_isascii(int c);
char *ft_itoa(int n); 
void *ft_memcpy(void *dest, const void *src, unsigned int count);
char **ft_split(char const *s, char c); 
void ft_striteri(char *s, void (*f)(unsigned int, char*));
void *ft_memchr(const void *s, int c, unsigned int n);
void *ft_memmove(void *dest, const void *src, unsigned int n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
unsigned int ft_strlcpy(char *dest, const char *src, unsigned int size);
int ft_strncmp(const char *s1, const char *s2, unsigned int n);
char *ft_strtrim(char const *s1, char const *set);
int ft_toupper( int character );
int	ft_atoi(char *str);
int	ft_isalnum(int c);
int	ft_isdigit(int c);
char *ft_strrchr(const char *s, int c);
char *ft_strjoin(char const *s1, char const *s2);
int ft_strlen(char *str);
char    *ft_strnstr(char *str, char *to_find, int n);
char *ft_substr(char const *s, unsigned int start,unsigned int len);  
void ft_bzero(void *s, unsigned int n);
int	ft_isalpha(int c);
int	ft_isprint(int c);
int	ft_isalnum(int c); 
void * ft_memset( void * pointer, int value, unsigned int count );  
char    *ft_strdup(char *src);
unsigned int strlcat(char *dst, const char *src, unsigned int size); 
char *ft_strrchr(const char *s, int c);
int ft_tolower( int character );
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(char *s, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
#endif

