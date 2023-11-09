/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:18:19 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/08 15:18:23 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strjoin(char const *s1, char const *s2)
{
    int s1_len;
    int s2_len;
    int i;
    int j;

    s1_len = ;
    s2_len = ;
    i = 0;
    j = 0;
    char *result;
    result = (char *) malloc((s1_len + s2_len) * sizeof(char));
    while(s1[i])
    {
        result[i] = s1[i]
        i++;
    }
    while(s2[j])
    {
        result[i+j] = s2[j]
        j++;
    }
    return(result);
}