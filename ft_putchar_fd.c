/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:17:31 by jefernan          #+#    #+#             */
/*   Updated: 2021/09/27 16:46:43 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(void)
{
	ft_putchar_fd('b', 1);
	int fd = open("teste_putchar", O_RDWR | O_CREAT);
	ft_putchar_fd('a', fd);

	close(fd);
	return (0);
	
}
