/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glabaden <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:20:47 by glabaden          #+#    #+#             */
/*   Updated: 2023/11/09 14:20:50 by glabaden         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar_fd(char c, int fd)
{
    write(fd,c,1);
}

void ft_putstr_fd(char *s, int fd)
{
    int i;
    i = 0;
    while(str[i])
    {
        ft_putchar_fd(str[i],fd);
    }
}

