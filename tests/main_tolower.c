/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:53:26 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 22:12:51 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%c from 'H'\n", ft_tolower('H'));
	printf("%c from 0\n", ft_tolower('0'));
	printf("%c from E\n", ft_tolower('E'));
	printf("%c from L\n", ft_tolower('L'));
	printf("%c from '6'\n", ft_tolower('6'));
	printf("%c from 'l'\n", ft_tolower('l'));
	printf("%c from '5'\n", ft_tolower('5'));
	printf("%c from random int \n", ft_tolower('~'));
	return 0;
}