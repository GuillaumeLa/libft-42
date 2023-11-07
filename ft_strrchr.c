/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:03:04 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/06 11:03:06 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *strrchr(const char *s, int c)
{
    int buffer 
    buffer = 0
    while(str[i])
    {
        if(str[i] == c)
            buffer = i;
        i++;
    }
    if(buffer == 0)
        return (0);
    return buffer

}