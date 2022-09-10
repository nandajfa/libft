/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:53:00 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 22:09:15 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char a[10] = "teste";
	char b[10] = "teste2"
	
	printf("%d\n", strncmp("test", "test", 4));
	printf("%d\n", ft_strncmp("test", "test", 4));
	printf("%d\n", strncmp("test", "teste", 4));
	printf("%d\n", ft_strncmp("test", "teste", 4));
  	printf("%d\n", strncmp("test", "teste", 5));
	printf("%d\n", ft_strncmp("test", "teste", 5));
}

/*
**Retorno da função strncmp():** 

- retorna **0** (zero) se as duas strings são iguais
- um valor negativo se **s1** for menor que **s2**
- um valor positivo se **s1** for maior **s2**
*/