/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:02:06 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/06 11:02:08 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int strlcpy(char *dest, const char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    j = 0;
    while (src[i] != '\0') {
        if (size && (i < (size - 1))) {
            dest[i] = src[i];
            j++;
        }
        i++;
    }
    dest[j] = '\0';
    return (i);
}