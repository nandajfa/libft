/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:38:55 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 20:45:37 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%d it should be 1\n", ft_isascii('9'));
	printf("%d it should be 1\n", ft_isascii('l'));
	printf("%d it should be 0\n", ft_isascii(-4));
	printf("%d it should be 0\n", ft_isascii(128));
	printf("%d it should be 1\n", ft_isascii('t'));
}

/* 
**Retorno da função isascii():** 

- retorna **1** se o valor está na tablea ASCII
- retorna **0 (zero)** caso o valor não possa ser convertido para **int**
*/