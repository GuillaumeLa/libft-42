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
#include <stdlib.h>

static void * ft_memset( void * pointer, int value, unsigned int count )
{
    unsigned int  i;

    i = 0;
    char *dest_pointed = (char *) pointer;
    while(dest_pointed[i] && count != i)
    {
        dest_pointed[i] = value;
        i++;
    }
    return pointer;
}

void * calloc( unsigned int elementCount, unsigned int elementSize )
{
    void *p;

    p = malloc(elementCount * elementSize);
    if(p == 0)
        return 0
    ft_memset(p,0,elementCount * elementSize)
    return p;
}