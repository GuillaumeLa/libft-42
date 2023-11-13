/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:19:56 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/09 14:19:58 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putchar_fd(char c, int fd)
{
	write(fd,&c,1);
}

