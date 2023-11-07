/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 11:02:54 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/06 11:02:56 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char    *ft_strnstr(char *str, char *to_find, int n)
{
    int    i;
    int    j;

    i = 0;
    if (!to_find[0])
        return (str);
    if (!str[0])
        return (0);
    while (str[i] && i != n)
    {
        j = 0;
        while (str[i + j] == to_find[j] )
        {
            j++;
            if (!to_find[j])
                return (str + i);
        }
        i++;
    }
    return (0);
}

