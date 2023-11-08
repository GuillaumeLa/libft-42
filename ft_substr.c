/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:00:06 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/08 15:00:09 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start,unsigned int len)
{
    unsigned int i;
    unsigned int count;
    char *result;

    i = 0;
    count = 0;
    result = (char *)malloc(len * sizeof(char))
    while(s[i])
    {
        if(i <= start && len != count)
        {
            result[count] = s[i];
            count++;
        }
        i++;
    }
    return (result);
}
