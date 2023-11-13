/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:00:11 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/06 11:00:13 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *s1_point = (unsigned char *)s1;
    unsigned char *s2_point  =  (unsigned char *)s2;
    size_t i;
    i = 0;

    while(i != n)
    {
        if(s1_point[i] != s2_point[i])
            return (s1_point[i] - s2_point[i]);
        i++;
    }
    return 0;
}

