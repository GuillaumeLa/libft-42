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

#include "libft.h"
#include <stdio.h>
size_t ft_strlen(const char *str)
{	
	size_t i = 0;
	while(str[i])
		i++;
	return i;
}
static int count_words(char const *str, char c)
{
	int i;
	int trigger;
	int count = 0;

	i = 0;
	count = 0;
	trigger = 0;
	while (str[i])
	{
		if (str[i] != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (str[i] == c)
			trigger = 0;
		i++;
	}
	return (count);
	
}

static char * handle_word(char const *str,int start, int finish)
{
	char    *word;
	int        i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	printf("%s \n",word);
	return (word);
}

char **ft_split(char const *str, char c)
{
	char **result;
	unsigned int i;
	unsigned int j;
	int        index;
	int wordcount;
	i = 0;
	j = 0;
	wordcount = count_words(str, c);
	if(!str[0])
		return 0;
	result = malloc((wordcount + 1) * sizeof(char *));
	if(result == NULL)
		return 0;
	while(str[i])
	{
		if (str[i] != c && index < 0)
			index = i;
		else if ((str[i] == c || i == ft_strlen(str)) && index >= 0)
		{
			result[j] = handle_word(str,index,i);
			index = -1;
			j++;
		}
		i++;
	}
	result[j] = 0;
	return (result);
}

// int main()
// {
// 	char *str = "pomme de terre  r";
// 	char **result  = ft_split(str, ' ');
	
// }