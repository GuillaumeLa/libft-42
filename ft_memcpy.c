/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:01:40 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/06 11:01:42 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void *ft_memcpy(void *dest, const void *src, unsigned int count)
{
    unsigned int  i;

    i = 0;
    char *dest_pointed = (char *) dest;
    char *src_pointed = (char *) src;
    while(src_pointed[i] && count != i)
    {
        dest_pointed[i] = src_pointed[i];
        i++;
    }
    return dest;
}