/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jefernan <jefernan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 21:14:59 by jefernan          #+#    #+#             */
/*   Updated: 2022/09/10 21:16:10 by jefernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void split_tester(char *b, char c)
{
    int i;
    char **teste;

    i = 0;
    teste = ft_split(b, c);
    printf("------------------------------------------------------\n");
    printf("Original string: %s\nDelimiter: '%c'\n", b, c);
    printf("Result: ");
    if (teste == NULL)
        printf("Nulo\n");
    else
    {
        printf("|");
        while (teste[i])
        {
            printf("%s|", teste[i]);
            i++;
        }
        printf("\n");
    }
    free(teste);
}

int        main(void)
{
    split_tester(",,,teste,,,testando,,,", ',');
    split_tester("  ", ' ');
    split_tester(",,,teste,,,testando,,,", ' ');
    split_tester("   Testandozfunção split   ", 'z');
    split_tester("   Testando função split   ", ' ');
    split_tester("   Testando função split   ", ' ');
}