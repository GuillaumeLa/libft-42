/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:42:12 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/09 11:42:14 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
static int count_words(char const *s, char c)
{
    int i;
    int trigger;
    int count = 0;

    i = 0;
    count = 0;
    trigger = 0;
    while (str)
    {
        if (str != c && trigger == 0)
        {
            trigger = 1;
            count++;
        }
        else if (*str == c)
            trigger = 0;
        i++;
    }
    return (count);
    
}

static int handle_word(char const *s, char c ,int start, int finish)
{
    char    *word;
    int        i;

    i = 0;
    word = malloc((finish - start + 1) * sizeof(char));
    while (start < finish)
        word[i++] = str[start++];
    word[i] = '\0';
    return (word);
}

char **ft_split(char const *s, char c)
{
    char **result;
    unsigned int i;
    unsigned int j;
    int        index;
    int wordcount 
    i = 0;
    j = 0;
    wordcount = count_words(s, c);
    if(!s[0])
        return 0;
    result = malloc((wordcount + 1) * sizeof(char *));
    if(result == NULL)
        return 0
    while(str[i])
    {
        if (s[i] != c && index < 0)
            index = i;
        else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
        {
            result[j] = handle_word(s,index,i)
            index = -1;
            j++;
        }
        i++;
    }
    result[j] = 0;
    return (result);
}
