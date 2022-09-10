/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:53:29 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 22:13:02 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%c from 'c'\n", ft_toupper('c'));
	printf("%c from 0\n", ft_toupper('0'));
	printf("%c from A\n", ft_toupper('A'));
	printf("%c from 6\n", ft_toupper('6'));
	printf("%c from '6'\n", ft_toupper('D'));
	printf("%c from 'h'\n", ft_toupper('h'));
	printf("%c from '2'\n", ft_toupper('2'));
	printf("%c from random int \n", ft_toupper('~'));
	return 0;
}