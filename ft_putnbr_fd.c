/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/26 17:17:57 by jefernan          #+#    #+#             */
/*   Updated: 2021/09/27 11:48:42 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>

void ft_putnbr_fd(int n, int fd)
{
	write(fd, &n, 1);
}

int main(void)
{
	ft_putnbr_fd('1', 1);
	int fd = open("teste_nbr", O_WRONLY | O_CREAT, 0777);
	ft_putnbr_fd('2', fd);

	close(fd);
	return (0);
}
