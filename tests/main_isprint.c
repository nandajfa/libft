/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_isprint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:42:49 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 20:48:18 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	printf("%d it should be 0\n", ft_isprint(0));
	printf("%d it should be 0\n", ft_isprint(1));
	printf("%d it should be 0\n", ft_isprint(9));
	printf("%d it should be 1\n", ft_isprint(' '));
	printf("%d it should be 1\n", ft_isprint('a'));
	printf("%d it should be 1\n", ft_isprint('9'));
}

/* **Retorno da função isprint():** 

checks for any printable character including space.

- retorna **1** caso seja um dígito entre 32 e 126 da tabela ASCII;
- retorna **0 (zero)** caso não seja*/