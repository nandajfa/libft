/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:41:40 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 20:44:50 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("%d it should be 1\n", ft_isdigit('7'));
	printf("%d it should be 0\n", ft_isdigit('b'));
	printf("%d it should be 0\n", ft_isdigit(2));
	printf("%d it should be 0\n", ft_isdigit(' '));
	printf("%d it should be 0\n", ft_isdigit('s'));
	printf("%d it should be 1\n", ft_isdigit('3'));
}

/* 
**Retorno da função isdigit():** 

- retorna **1** caso seja um dígito entre 0 e 9;
- retorna **0 (zero)** caso não seja
*/