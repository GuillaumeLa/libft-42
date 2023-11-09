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

void *calloc( unsigned int elementCount, unsigned int elementSize);
int	ft_isascii(int c);
char *ft_itoa(int n); 
void *ft_memcpy(void *dest, const void *src, unsigned int count);
ft_split.c   
ft_striteri.c
ft_memchr.c  
ft_memmove.c  
ft_memcmp.c  
unsigned int strlcpy(char *dest, const char *src, unsigned int size);
int strncmp(const char *s1, const char *s2, unsigned int n);
char *ft_strtrim(char const *s1, char const *set);
int ft_toupper( int character );
int	ft_atoi(char *str);
int	ft_isalnum(int c);
int	ft_isdigit(int c);

char *strrchr(const char *s, int c);
char *ft_strjoin(char const *s1, char const *s2);
int ft_strlen(char *str);
char    *ft_strnstr(char *str, char *to_find, int n);
char *ft_substr(char const *s, unsigned int start,unsigned int len);  
void bzero(void *s, unsigned int n);
int	ft_isalpha(int c);
int	ft_isalnum(int c); 


void * ft_memset( void * pointer, int value, unsigned int count );  
char    *ft_strdup(char *src);
unsigned int strlcat(char *dst, const char *src, unsigned int size); 
ft_strmapi.c  
char *strrchr(const char *s, int c);
int ft_tolower( int character );

#endif

