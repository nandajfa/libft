/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:17:49 by jefernan          #+#    #+#             */
/*   Updated: 2021/09/27 11:44:43 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

int main(void)
{
	ft_putendl_fd("bye", 1);
	int fd = open("teste_putend", O_WRONLY | O_CREAT, 0777);
	ft_putendl_fd("bye", fd);

	close(fd);
	return (0);
}
