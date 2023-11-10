/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:01:56 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/06 11:01:58 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	// unsigned int size_dest;
	unsigned int size_src;
	
	size_src = ft_strlen((char *)src);
	// size_dest = ft_strlen(dest);
	i = 0;
	j = 0;

	while (dest[i] && size > i)
		i++;
	if(i < size)
		return(i + size_src);
	while (src[j])
	{
		if(j < size -i - 1)
		{
			dest[i] = src[j];
		}
		i++;
		src++;
	}
	dest[i] = '\0';
	return(i+j);
}