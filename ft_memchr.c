/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:59:57 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/06 10:59:59 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memchr(const void *s, int c, unsigned int n)
{
	char *s_point = (char *) s;
	unsigned int i;
	i = 0;
	while(i != n)
	{
		if (s_point[i] == c)
			return (s_point + i);
	}
	return (0);
}
