/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:53:10 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 22:08:53 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1;
	char	*str2;

	str1 = "hellolibfts\0v";
	str2 = "libft";
	printf("My function output: %s\n", ft_strnstr(str1, str2, 13));
	printf("Original function output: %s\n", strnstr(str1, str2, 13));
	return (0);
}

/* 
int main(void)
{
	char a[10] = "teste";
	char b[10] = "teste2"
	
  printf("%s", strnstr("65554", "55", 6));
  printf("%s", strnstr("abc", "a", 2));
  printf("%s", strnstr("meu teste de string", "de", 4));
}



procura a primeira ocorrência de um nulo de uma substring dentro de uma string
*/