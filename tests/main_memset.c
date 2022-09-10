/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:00:32 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 21:05:57 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main (void)
{
	char	str[50] = "Exemplo de String em C";
	printf("%s", str);

	printf("%p\n", ft_memset(str, '!', 20));
	printf("%p\n", memset(str, '!', 20));

	printf("%p\n", memset(str, 'A', 20));
	printf("%p\n", ft_memset(str, 'A', 10));

	
	return (0);
}




/*
preenche uma quantidade de memória 
(variável, struct, array,...) com um determinado byte
**Retorno da função memset():** 

- retorna uma cópia do ponteiro **p**
- retorna **NULL** em caso de erro
*/