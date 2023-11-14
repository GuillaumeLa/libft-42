/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:26:28 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/08 16:26:30 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char charac, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == charac)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_count_charinset(char const *s1, char const *set)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s1[i])
	{
		if (!ft_inset(s1[i], set))
			count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		sizenew;
	int		j;
	int		i;
	char	*result;

	i = 0;
	j = 0;
	if(s1 == NULL || set == NULL)
		return NULL;
	sizenew = ft_count_charinset(s1, set);
	result = (char *) malloc((sizenew + 1) * sizeof(char));
	if (!result)
		return (0);
	while (s1[i])
	{
		if (!ft_inset(s1[i], set))
		{
			result[j] = s1[i];
			j++;
		}
		i++;
	}
	result[j++] = '\0';
	return (result);
}
