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

// #include "libft.h"
// #include <stdio.h>

// static int	count_words(char const *str, char c)
// {
// 	int	i;
// 	int	trigger;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	trigger = 0;
// 	while (str[i])
// 	{
// 		if (str[i] != c && trigger == 0)
// 		{
// 			trigger = 1;
// 			count++;
// 		}
// 		else if (str[i] == c)
// 			trigger = 0;
// 		i++;
// 	}
// 	printf("%d\n",count);
// 	return (count);
// }

// static char	*handle_word(char const *str, int start, int finish)
// {
// 	char	*word;
// 	int		i;

// 	i = 0;
// 	word = malloc((finish - start + 1) * sizeof(char));
// 	while (start < finish)
// 		word[i++] = str[start++];
// 	word[i] = '\0';
// 	//printf("%s\n",word);
// 	return (word);
// }

// char	**ft_split(char const *str, char c)
// {
// 	char			**result;
// 	unsigned int	i;
// 	unsigned int	j;
// 	int				index;
// 	int				trigger;

// 	i = 0;
// 	j = 0;
// 	if (!str[0])
// 		return (0);

// 	trigger = 0;
// 	result = malloc((count_words(str, c) + 1) * sizeof(char *));
// 	if (result == NULL)
// 		return (0);
// 	while (str[i])
// 	{
		
// 	}
// 	result[j] = 0;
// 	return (result);
// }

// int main()
// {
// 	int i;
// 	char *str = "                  olol";
// 	char **result  = ft_split(str, ' ');
// 	while(i != 5)
// 	{
// 		printf("%s \n",result[i]);
// 		i++;
// 	}

// 	return 0;	
// }