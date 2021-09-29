/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:18:02 by jefernan          #+#    #+#             */
/*   Updated: 2021/09/27 11:33:09 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

int main(void)
{
	ft_putstr_fd("bisa", 1);
	int fd = open("teste_put", O_WRONLY | O_CREAT, 0777);
	ft_putstr_fd("amar", fd);

	close(fd);
	return (0);
}

