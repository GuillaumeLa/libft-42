/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:58:50 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/06 10:58:54 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc( unsigned int elementCount, unsigned int elementSize )
{
	void	*p;

	p = malloc(elementCount * elementSize);
	if(p == 0)
		return (0);
	ft_memset(p,0,elementCount * elementSize);
	return (p);
}