/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 20:51:43 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 21:12:29 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char str[50] = "Exemplo de string em C";
	char *p;

	p = (char *) memchr(str, 's', strlen(str));

	if (p != NULL)
		printf("Valor de busca encontrado na posição %d.\n", (p-str+1));
	else
		printf("Não encontrado!\n");
	system("pause");
	return (0);
}