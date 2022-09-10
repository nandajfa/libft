/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:38:27 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 20:46:02 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char	ch = 'a';

	if (ft_isalpha(ch))
        printf("\nCharacter is alpha\n");
    else
        printf("\nCharacter is not alpha\n");
	return (0);
}

/* 
**Retorno da função isalpha():** 

- retorna 1 se o valor informado for uma letra (maiúscula ou minúscula)
- retorna **0 (zero)** caso o valor não esteja dentro desse range
*/